#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <string>
int checktirer(std::string key);
int checkingkey(std::string key);
int checkingvalue(std::string value);
float bitcoin(std::map<std::string ,float>data ,std::string key,std::string value);
std::map<std::string ,float> reading(std::string filename);
void converting(std::string filename,std::map<std::string ,float>data );
class invalid_csv : public std::exception
{
    public:
    const char *what()const throw(){
        return "invalid csv";
    }
};