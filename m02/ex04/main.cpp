#include <iostream>
#include <fstream>
#include <cstring>


int main ( int ac , char **av)
{
    if(ac == 4)
    {
        std::ifstream inputFile(av[1]); 
        std::string str = std::string(av[1]) + ".replace";
        std::ofstream outputFile(str);

        if (inputFile.is_open() && outputFile.is_open()) {
            std::string line;
            std::string linefinale;
            std::string str1 = av[2];
            if(str1.empty())
                return 0;
            while (std::getline(inputFile, line)) 
            {
                size_t pos = 0;
                int currnt = 0;
                while (((pos = line.find(av[2], pos)) != std::string::npos))
                {
                    linefinale.append(line, currnt, pos - currnt);
                    linefinale.append(av[3]);
                    currnt = pos + strlen(av[2]);
                    pos += strlen(av[2]);

                }
                linefinale.append(line, currnt, line.length() - currnt);
                outputFile << linefinale << (inputFile.peek() == EOF ? "" : "\n");
                linefinale.clear();
                
            }

            std::cout << "done" << std::endl;

            inputFile.close();
            outputFile.close(); 
        } 
        else {
            std::cout << "failed" << std::endl;
        }
    }
    else
    {
        std::cout << "wrong args" << std::endl;
    }
     

    return 0;
}
