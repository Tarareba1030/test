#include <iostream>

int main()
{
    int W[2];
    W[0]=1;
    W[1]=2;
    int *p;
    p=W+1;
    std::cout <<*p << std::endl;;
    return 0;
}