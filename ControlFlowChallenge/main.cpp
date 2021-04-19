#include <stdio.h>
#include <iostream>
#include <vector>
#include <limits>
#include <cctype>
using namespace std;

/*
    Your program should display a menu options as follows:
        P - Print numbers
        A - Add a number
        M - Display mean of the numbers
        S - Display the smallest number
        L - Display the largest number
        Q - Quit

 */


int main(int argc, char **argv)
{
    vector<char> valid_options{'P', 'A', 'M','S', 'L', 'Q'};
    vector<int> num_list {};
    char option {};
    bool is_playing{true};
    
	while(is_playing){
        cout << "Enter an option \n" << endl
        << "P -  Print numbers in the list" << endl
        << "A - Add a number" << endl
        << "M - Print list mean" << endl
        << "S - Print smallest number" << endl
        << "L - Print largest number" << endl
        << "Q - Quit" << endl << endl;
        
        cin >> option;
        
        for(auto i {0}; i < valid_options.size(); i++){
            
            option = toupper(option);
            
            if(option == valid_options.at(i)){
                switch(option){
                    case 'P':
                    {
                            if(num_list.size() == 0){
                                cout << "You list is empty" << endl;
                                break;
                            }else{
                                cout << "[ ";
                                for(auto j {0}; j < num_list.size(); j++){
                                    cout << num_list.at(j) << " ";
                                }
                                cout << "]" << endl;
                            }
                        break;
                    }
                    case 'A':
                    {
                        int number {0};
                            // https://stackoverflow.com/questions/12721911/c-how-to-verify-is-the-data-input-is-of-the-correct-datatype 
                        while(true){
                            cout << "Insert a number you want to add: " << endl;
                            cin >> number;
                            if(cin.fail()){
                                cout << "Only numbers are allowed" << endl;   
                                cin.clear();
                                cin.ignore(numeric_limits<streamsize>::max(), '\n');                                
                                continue;
                            }else{
                                num_list.push_back(number);                                
                                cout << "Number has been added" << endl;
                                
                                break;
                            }
                        }                        
                        break;
                    }
                    case 'M':
                        {
                            if(num_list.size() == 0){
                            cout << "You list is empty" << endl;
                            }else{
                                int result{0};
                                for(auto k{0}; k < num_list.size(); k++){
                                    result += num_list.at(k);
                                }
                                double mean = result/num_list.size();
                                cout << "The mean is: " << mean << endl;
                            }
                            break;
                        }
                    
                    case 'S':
                    {
                        if(num_list.size() == 0){
                            cout << "You list is empty" << endl;
                        }else{
                            int smallest = num_list.at(0);
                            for(auto y{1}; y < num_list.size(); y++ ){
                                if(num_list.at(y) < smallest){
                                    smallest = num_list.at(y);
                                }
                            }
                            cout << "The smallest number is: " << smallest << endl;
                        }
                       
                        break;
                    }
                    case 'L':
                    {
                         if(num_list.size() == 0){
                            cout << "You list is empty" << endl;
                        }else{
                            int largest = num_list.at(0);
                            for(auto y{1}; y < num_list.size(); y++ ){
                                if(num_list.at(y) > largest){
                                    largest = num_list.at(y);
                                }
                            }
                            cout << "The smallest number is: " << largest << endl;
                        }
                       break;
                    }
                                        
                    case 'Q':
                        is_playing = false;
                    break;
                    
                    
                };
                break;
            }else if (i == valid_options.size()-1){
                cout << "\nUknown selection please try again" << endl;
                break;
            }
        }
    }
}


