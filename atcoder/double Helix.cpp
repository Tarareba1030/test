#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    std::string b;
    std::cin >> b;
    if(b[0] =='A'){
        std::cout << 'T' << std::endl;
    }else if(b[0] == 'T'){
        std::cout << 'A' <<std::endl;
    }else if(b[0] == 'G'){
        std::cout << 'C' <<std::endl;
    }else{
        std::cout << 'G' << std::endl;
    }
    return 0;
}