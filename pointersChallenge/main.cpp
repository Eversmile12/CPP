#include <stdio.h>
#include <iostream>

int* apply_all(const int*, size_t, const int*, size_t);

int main(int argc, char **argv)
{
	printf("hello world\n");
    int arr_one[5] = {3,2,4,5,4};
    const size_t arr_one_size = sizeof(arr_one)/sizeof(arr_one[0]);
    
    int arr_two[6] = {5,4,3,2,12,3};
    const size_t arr_two_size = sizeof(arr_two)/sizeof(arr_two[0]);
    
    int *temp_array = apply_all(arr_one, arr_one_size, arr_two, arr_two_size);
    for(size_t i = 0; i <= (arr_two_size*arr_one_size); i++){
        std::cout << *temp_array++ << std::endl;
    }

	return 0;
}


int* apply_all(const int* const arr_one, size_t arr_one_size, const int* const arr_two, size_t arr_two_size){
    int *temp_array = new int [arr_one_size * arr_two_size]{0};
    int index {0};
    for(size_t j {0}; j < arr_two_size; j++){
        for(size_t i {0}; i < arr_one_size; i++){
            temp_array[++index] = arr_two[j]*arr_one[i];
        }
    }
    
    return temp_array;
}