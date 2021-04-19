#include <stdio.h>
#include <iostream>

// https://en.wikibooks.org/wiki/C_Programming/String_manipulation
#include <cstring>

//http://www.cplusplus.com/reference/cctype/
#include <cctype>

using namespace std;

int main(int argc, char **argv)
{
//	char first_name[30] {};
//    char second_name[30] {};
//    char full_name[60] {};
//    char temp[60] {};
//    
//    
//    cout << "Please insert your name: " << endl;
//    cin >> first_name;
//    
//    cout << "Your first name length is: " << strlen(first_name) << endl;
//    
//    cout << "Please insert your surname: " << endl;
//    cin >> second_name;
//    
//    cout << "Your first name length is: " << strlen(second_name) << endl;
//    
//    strcat(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, second_name);
//    cout << "Your full name is: " << full_name << ". The length is: " << strlen(full_name) << endl;
//    
    
    
    char first_name[] {"Bjarne"};
    char last_name[] {"Stroustrup"};
    char whole_name[20];
    
    int first_name_length = strlen(first_name);
    int last_name_length = strlen(last_name);
    
    strcpy(whole_name, first_name);
    strcat(whole_name, " ");
    strcat(whole_name, last_name);
    
    int whole_name_length =  strlen(whole_name);
    
}
