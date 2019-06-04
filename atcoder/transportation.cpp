#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

int main()
{
    int num;
    int l[5];
    int p[6]={};
    int time=0;
    std::cin >> num;
    std::cin >> l[0] >> l[1] >> l[2] >> l[3] >> l[4];
    p[0] = num;
    while(p[5]!= num){
        time++;
        for(int i=1; i<6; i++){
            //send
            if(p[i-1] > l[i-1]){
                p[i+1] += l[i-1]; //i->i+1
                p[i] -= l[i-1]; 
            }else{
                p[i+1] += p[i];
                p[i] = 0;
            }

            //receive
            if(p[i-1] > l[i-1]){
                p[i] += l[i-1];
                p[i-1] -= l[i-1];
            }else{
                p[i] += p[i-1];
                p[i-1] = 0;
            }
            std::cout << p[i] << std::endl;
        }
    }
    std::cout << time << std::endl;
    return 0;
}