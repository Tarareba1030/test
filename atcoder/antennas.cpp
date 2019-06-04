#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main()
{
    int antenna[5];
    int k;
    std::cin >> antenna[0];
    std::cin >> antenna[1];
    std::cin >> antenna[2];
    std::cin >> antenna[3];
    std::cin >> antenna[4];
    std::cin >> k;
    for(int i=4; i>0; i--){
        for(int j=0; j<i; j++){
            if(antenna[i] - antenna[j] > k){
                std::cout << ":(" << std::endl;
                goto point;
            }
        }
    }
    std::cout << "Yay!" << std::endl;
    point:
    return 0;
}