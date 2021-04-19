#include <stdio.h>
#include<iostream>

int main(int argc, char **argv)
{
	const double small_room_price = 25;
    const double large_room_price = 35;
    const double tax_rate = 0.06;
    const int valid_days = 30;
    
    
    std::cout << "You will be asked to provide the number and size of rooms you intend to clean" << std::endl;
    
    std::cout << "How many small rooms?" << std::endl;
    int small_room {0};
    std::cin >> small_room;
    
    std::cout << "How many big rooms?" << std::endl;
    int large_room{0};
    std::cin >> large_room;
    
    std::cout << "Estimate for carpet cleaning service" << std::endl;
    std::cout << "Number of small rooms: " << small_room << std::endl;
    std::cout << "Number of large rooms: " << large_room << std::endl;
    std::cout << "Price per small room: $" << small_room_price << std::endl;
    std::cout << "Price per large room: $" << large_room_price << std::endl;
    double cost = (small_room * small_room_price)+(large_room * large_room_price);
    std::cout << "Cost: $" << cost << std::endl;
    
    double taxes_from_cost = cost*tax_rate;
    std::cout << "Tax: $"<< taxes_from_cost << std::endl;
    std::cout << "=======================================" << std::endl;
    std::cout << "Total estimate: $"<< cost+taxes_from_cost << std::endl;
    std::cout << "This estimate is valid for " << valid_days << std::endl;
    
    return 0;
    
}
