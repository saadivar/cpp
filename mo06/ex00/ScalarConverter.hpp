#include <iostream>

class ScalarConverter
{
    ScalarConverter();
    ScalarConverter(const ScalarConverter& sc);
    ScalarConverter& operator=(const ScalarConverter& sc);
    ~ScalarConverter();
    public:
        static void convert(std::string str);

};