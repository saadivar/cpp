#pragma once

#include <iostream>
#include <map>
#include <sstream>
#include <fstream>
#include <string>
class Btc
{
    private:
        std::map<std::string ,float> data;
        std::string filename_csv;
    public:
        Btc();
        ~Btc();
        Btc(const Btc& other);
        Btc& operator=(const Btc& other);
        float bitcoin(std::string key,std::string value);
        void reading_csv();
        void converting(std::string filename );
};
int checktirer(std::string key);
int checkingkey(std::string key);
int checkingvalue(std::string value);
