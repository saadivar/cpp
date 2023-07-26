#include "BitcoinExchange.hpp"

Btc::Btc()
{
    this->filename_csv = "data.csv";
}
Btc::Btc(const Btc& other)
{
    *this = other;
}
Btc& Btc::operator=(const Btc& other)
{
    this->data = other.data;
    this->filename_csv = other.filename_csv;
    return *this;
}
Btc::~Btc()
{

}
int white_spaces(std::string str) {
    for (size_t i = 0; i < str.length(); i++) {
        if (!std::isspace(str[i])) {
            return 0;
        }
    }
    return 1;
}
int checktirer(std::string key)
{
    for(int i = 0; i < 10 ;i++)
    {
        if(i == 0 || i == 1 || i== 2 || i == 3 || i==5 || i==6 || i== 8 || i==9 )
        {
            if(!std::isdigit(key[i]))
            {
                return 1;
            }
        }
        else if(i == 4 || i == 7)
        {
            if(key[i] != '-')
            {

                return 1;
            }
        }
        
    }
    key =key.substr(10);
    if(!white_spaces(key))
        return 1;
    return 0;
}
int checkingkey(std::string key)
{
    int year;
    int month;
    int day;

    size_t tirer;
    
    if(checktirer(key))
    {
        return 1;
    }
    tirer = key.find('-');
    year = atoi(const_cast<const char *>(key.substr(0 ,tirer).c_str()));
    key = key.substr(tirer + 1);
    tirer = key.find('-');
    month = atoi(const_cast<const char *>(key.substr(0 ,tirer).c_str()));
    day = atoi(const_cast<const char *>(key.substr(tirer + 1).c_str()));
    if(year < 2009 || year > 2022)
        return 1;
    if(!(day > 0 && day <31) || !(month > 0 && month <=12))
    {
        return 1;
    }
    else  if(month == 2 || month == 6 ||month == 9 ||month == 11 )
    {
        if(month == 2 && year % 4 != 0 && day > 28)
            return 1;
        else if(month == 2 && year % 4 == 0 && day > 29)
            return 1;
        else if(day > 30)
            return 1;

    }
    return 0;

}
int checkingvalue(std::string value)
{
    float val = 0.0;
    int flag = 0;
    for(size_t i = 0; i < value.length() ; i++)
    {
        if(std::isdigit(value[i]) && flag==0)
            flag =1;
        else if((!std::isdigit(value[i])&& value[i] != '.') && flag== 1)
            return 3;
    }
    for(size_t i = 0; i < value.length() ; i++)
    {
        if(!std::isdigit(value[i]) && !std::isspace(value[i])  && value[i] != '.' && value[i] != '-' && value[i] != '+')
            return 3;
    }
    val = stof(value);
    if(val > 1000.0)
        return 2;
    else if(val < 0.0 )
        return 1;
    return 0;
}
float Btc::bitcoin(std::string key,std::string value)
{
    float val = stof(value);
    
    std::map<std::string ,float>::iterator it ;
    it = this->data.lower_bound(key.substr(0,10 ));
    if(it->first == key.substr(0,10 ))
        return(it->second * val);
    else
    {
        it--;
        return(it->second * val);
    }
}
void Btc::reading_csv()
    {
        std::ifstream file(this->filename_csv);
        std::string line;
        std::string skip;
        std::string key;
        float value;
        std::getline(file,skip);
        
        while(std::getline(file,line))
        {
            size_t comma = line.find(',');
            if(comma != std::string::npos)
            {
                key = line.substr(0 ,comma);
                if(checkingkey(key) == 1)
                {
                    continue;
                }    
                value = stof(line.substr(comma + 1));
                this->data[key] = value;
            }
            
        }
        file.close();
    }
    
    void Btc::converting(std::string filename)
    {
        this->reading_csv();
        std::ifstream file(filename);
        std::string line;
        std::string skip;
        std::string error;
        std::string value;
        std::string key;
        size_t pipe;
        float results;
        int s;
        if (!file) {
            std::cout << "Error args." << std::endl;
            return ;
        }
        std::getline(file,skip);
        while(white_spaces(skip))
        {
            std::getline(file,skip);
        }
        while(std::getline(file,line))
        {
            if(white_spaces(line))
                continue;
            pipe = line.find('|');
            if(pipe != std::string::npos)
            {
                key = line.substr(0 ,pipe);
                if(checkingkey(key) == 1)
                {
                    error = "Error: bad input";
                    std::cout << error << "=> " <<key<<std::endl;
                    continue;
                }
                value = line.substr(pipe + 1);
                s = checkingvalue(value);
                if(s)
                {
                    if(s == 1)
                        error = "Error: not a positive number.";
                    else if(s == 2)
                        error = "Error: too large a number.";
                    else if(s == 3)
                        error = "Error: bad input";
                    std::cout << error <<std::endl;
                    continue;
                }
                results = bitcoin( key,value);
                std::cout << key << "=> " << value << " = "<<results<<std::endl;
            }
            else
            {
                key = line.substr(0);
                error = "Error: bad input";
                std::cout << error <<  "=> " << key << std::endl;
            }
        }
        file.close();
    }