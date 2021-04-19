#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

//----DO NOT MODIFY THE CODE ABOVE THIS LINE----
//----WRITE THE FUNCTION PROTOTYPES BELOW THIS LINE----

void print_guest_list(string[], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
void clear_guest_list(string[], size_t);//----WRITE THE FUNCTION PARAMETER LIST WITHIN THE PARENTHESES
                                      
//----WRITE THE FUNCTION PROTOTYPES ABOVE THIS LINE----                                      
//----DO NOT MODIFY THE CODE BELOW THIS LINE----


void event_guest_list() {

    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};
    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);

    
}

int main(int argc, char **argv)
{
    event_guest_list();
}


void print_guest_list(string guest_list[], size_t size) {
    for(size_t i {0}; i < size; i++){
        cout << guest_list[i] << endl;
    }
    
    return typeid(guest_list).name();
}

void clear_guest_list(string guest_list[], size_t size) {//----WRITE THE FUNCTION PARAMETER LIST WITHIN THEPARENTHESES
    for(size_t i {0}; i < size; i++){
       guest_list[i] = " ";
    }
}