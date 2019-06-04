#include <iostream>
#include<cmath>
#include <vector>

unsigned int W1[16];

unsigned int W[4];

unsigned int X[4];

void weight_initialize()
{
    int index;
    W[0]=0,W[1]=1,W[2]=2,W[3]=3;
    for(int i=0; i<std::pow(2,4);i++){
        W1[i]=0;
        for(int j=0; j<4; j++){
            index=(i>>j)&1;
            W1[i]+=W[3-j]*index;

        }
    }
    //W1[0]=0,W1[1]=3,W1[2]=2,W1[3]=5,W1[4]=1,W1[5]=4,W1[6]=3,W1[7]=6;
   // W1[8]=0,W1[9]=3,W1[10]=2,W1[11]=5,W1[12]=1,W1[13]=4,W1[14]=3,W1[15]=6;
}

unsigned int distributed_arithmetic()
{
    unsigned int *offset=W1;

    unsigned int result=0;
    unsigned int temp;
    unsigned int selector;
    for(int i=0; i<32;i++){
        selector=0;
        for(int j=0; j<4;j++){
            selector+=(X[j]&1)<<(3-j);
            X[j]=(X[j]>>1);
        }
        temp=*(offset+selector);
        result+=(temp<<i);
    }
    return result;
}

int main()
{
    //input
    std::cin >> X[0]>>X[1]>>X[2]>>X[3];
    weight_initialize();
    unsigned int results=0;
    results=distributed_arithmetic();
    std::cout << results<<std::endl;
    std::cout << W1 << std::endl;
    return 0;
}