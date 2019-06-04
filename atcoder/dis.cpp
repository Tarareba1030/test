#include <iostream>
#include <cmath>
unsigned int W1[16];

unsigned int W[4];

unsigned int X[4];

    //W1[0]=0,W1[1]=3,W1[2]=2,W1[3]=5,W1[4]=1,W1[5]=4,W1[6]=3,W1[7]=6;
   // W1[8]=0,W1[9]=3,W1[10]=2,W1[11]=5,W1[12]=1,W1[13]=4,W1[14]=3,W1[15]=6;
void weight_initialize()
{
    W[0]=0,W[1]=1,W[2]=2,W[3]=3;

    int index;
    for(int i=0; i<std::pow(2,4);i++){
        W1[i]=0;
        for(int j=0; j<4; j++){
            index=(i>>j)&1;
            W1[i]+=W[3-j]*index;
        }
    }
}


int main()
{
    unsigned int *W[4];
    unsigned int W1[4];
    W1[0]=114514;
    for(int i=0; i<4; i++){
        W[i]=&W1[i];
    }
    
    std::cout << *W[0]<< std::endl;
    return 0;
}