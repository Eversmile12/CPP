#include <string>

#ifndef _DOG_H_
#define _DOG_H_

class Dog
{
private:
    std::string name;
    int age;
public:
    std::string get_name();
    void set_name(std::string);
    int get_age();
    void set_age(int);
};

#endif // _DOG_H_
