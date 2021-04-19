#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
//    string unformatted_full_name{"StephenHawking"};
//    string first_name {unformatted_full_name, 0, 7};
//    string last_name = unformatted_full_name.substr(7, 14);
//    string formatted_full_name = first_name + " " + last_name;
//    cout << first_name << " " << last_name << " " << formatted_full_name << endl;

    string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    // http://www.cplusplus.com/reference/string/string/erase/
    journal_entry_1 = journal_entry_1.erase(0, 6);

    
    if(journal_entry_2 < journal_entry_1){
        journal_entry_1.swap(journal_entry_2);
    }
	return 0;
}
