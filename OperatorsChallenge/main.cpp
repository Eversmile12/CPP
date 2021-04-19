#include <stdio.h>
#include <iostream>


int main(int argc, char **argv)
{
	const int dollar{100};
    const int quarter{25};
    const int dime{10};
    const int nickel{5};
    const int penny{1};
    
    std::cout << "Insert a number of cents from 0 to 100" << std::endl;
    int change_amount {};
    
    std::cin >> change_amount;
    
    int dollar_amount = change_amount/dollar;
    change_amount %= dollar;
    int quarter_amount = change_amount/quarter;
    change_amount %= quarter;
    std::cout << "change after quarters" << change_amount << std::endl;
    int dime_amount = change_amount/dime;
    change_amount %= dime;
    std::cout << "change after dimes" << change_amount << std::endl;
    int nickel_amount = change_amount/nickel;
    change_amount %= nickel;
    std::cout << "change after nickels" << change_amount << std::endl;
    int pennies_amount = change_amount/nickel;
    
    
    
    std::cout << "dollars: " << dollar_amount << std::endl;
    std::cout << "quarters: " << quarter_amount << std::endl;
    std::cout << "dimes: " << dime_amount << std::endl;
    std::cout << "nickel: " << nickel_amount << std::endl;
    std::cout << "pennies: " << pennies_amount << std::endl;
    
    
    
    
}
