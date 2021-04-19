#include <stdio.h>
#include <string>
#include <iostream>
#include "Dog.h"


int main(int argc, char **argv)
{
	Dog dog;
    dog.set_name("lucky");
    std::cout << dog.get_name() << std::endl;
    dog.set_age(12);
    std::cout << dog.get_age() << std::endl;
    
}
