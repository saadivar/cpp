#include "Serializer.hpp"

int main()
{
    Data *saad = new Data;
    saad->a = 1;
    uintptr_t ptr;
    std::cout << saad << std::endl;
    ptr = Serializer::serialize(saad);
    std::cout << ptr << std::endl;
    saad = Serializer::deserialize(ptr);
    std::cout << saad << std::endl;
    delete saad;
}