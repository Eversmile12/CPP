#include <stdio.h>
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
    std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    std::string sentence_to_process;
    int pos{0};
    
    while(true){
        std::cout << "Select an option: " << std::endl << "\t 1. Cypher new string" << std::endl << "\t 2. Decrypt string" << 
        std::endl << "\t 3. Quit" << std::endl;
        
        int option{0};
        std::cin>>option;
        std::cin.clear();
        std::cin.sync();
        switch(option){
            case 1:
                std::cout << "Insert the sentence you want to cypher" << std::endl;
                getline(std::cin, sentence_to_process);
                
                for(std::size_t i{0}; i < sentence_to_process.length(); i++ ){
                    pos = alphabet.find(sentence_to_process.at(i));
                   if(pos != std::string::npos){
                       sentence_to_process.at(i) = key.at(pos);
                    }
                }    
                std::cout << "Your sentence has been encrypted: " << sentence_to_process <<  std::endl;
            break;
            case 2:
                std::cout << "Insert the sentece you want to decrypt" << std::endl;
                getline(std::cin, sentence_to_process);
                for(std::size_t j{0}; j < sentence_to_process.length(); j++){
                    pos = key.find(sentence_to_process.at(j));
                    if(pos != std::string::npos){
                        sentence_to_process.at(j) = alphabet.at(pos);
                    }
                }
                std::cout << "Your sentence has been dencrypted: " << sentence_to_process <<  std::endl;
                
            break;
            case 3:
            break;
        }
    
    }
    
    
    
	return 0;
}
