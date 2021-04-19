#include <stdio.h>
#include <iostream>
#include <string>
/*
 
  * We need to print a letter pyramid as follow
  * if the user inputs "abc"
  *   a
  *  aba
  * abcba
  *   
  * N of repetitions = input.length();
  * for i < repetitions
  *     for (?)
  *     print a space per number of repetitions - i 
  *     for j <= i
  *         print input.at(j);
  *     print end line
  *   a
  *  aba
  * abcab
*/


void printPyramid(std::string input){
    int input_length {input.length()};           // We get the length of input
    for(auto i = 0; i < input_length; i++){           // We loop through the length of input
        for(auto j = i; j < input_length-1; j++){   // We print (input_length-1) - current loop number
            std::cout << " ";
        }
        for (auto k = 0; k <= i; k++){              // We print all the char in the input until we reach the current number of the loop
            std::cout << input.at(k);
        }
        for(auto y = i; y > 0; y--){                // We than loop backwards without repeating the last printed char
                std::cout << input.at(y-1);
        }
        std::cout << std::endl;
    }
}

int main(int argc, char **argv)
{
	printf("hello world\n");
    printPyramid("ABCDEFG");
	return 0;
}

