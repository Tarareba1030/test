#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main()
{
    int d[5];
    int min=10;
    int time=0;
    int mod;
    std::cin >> d[0] >> d[1] >> d[2] >> d[3] >> d[4];
    for(int i=0; i<5; i++){
        mod = d[i]%10;
        if(mod < min && mod > 0){
            min = mod;
        }
        if(mod == 0){
            time += d[i];
        }else{
            time += 10*(d[i]/10+1);
        }
    }
    time -= (10-min);
    std::cout << time << std::endl;
    return 0;
}