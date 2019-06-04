#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int method(int N){
    int step;
    if(N==1){
        step=1;
    }else if(N==2){
        step=2;
    }else if(N==0){
        step=1;
    }else{
        step = method(N-1)+method(N-2)+method(N-3);
    }
    return step;
}

int main()
{
    int N,steps;
    std::cin >> N;
    steps=method(N);
    std::cout << steps << std::endl;
    return 0;
}
