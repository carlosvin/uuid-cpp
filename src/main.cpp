
#include "Uuid.h"
#include <iostream>

int main() 
{
    ids::Uuid uuid;
    std::cout << uuid.to_str() << std::endl;
    return 0;
}