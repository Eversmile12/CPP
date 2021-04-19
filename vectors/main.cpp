#include <stdio.h>
#include <vector>
#include <iostream>

int main(int argc, char **argv)
{
	std::vector<int> vector1;
    std::vector<int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    std::vector<std::vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    std::cout<<vector_2d[0][0] << std::endl;
    std::cout<<vector_2d[0][1] << std::endl;
    std::cout<<vector_2d[1][0] << std::endl;
    std::cout<<vector_2d[1][1] << std::endl<<std::endl;
    
    vector1.at(0) = 100;
    
    std::cout<<vector_2d[0][0] << std::endl;
    std::cout<<vector_2d[0][1] << std::endl;
    std::cout<<vector_2d[1][0] << std::endl;
    std::cout<<vector_2d[1][1] << std::endl;
    
    std::cout<<vector1[0]<<std::endl;
    std::cout<<vector1[1]<<std::endl;
    

    
    
	return 0;
}
