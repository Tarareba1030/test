#include <iostream>
#include <cmath>

unsigned int W[4];
unsigned int W1[16];
unsigned int* offset;
//ABCDEF
struct bit{
    unsigned int X3:1;
    unsigned int X2:1;
    unsigned int X1:1;
    unsigned int X0:1;
};

union bit_address{
    unsigned int num:4;
    struct bit B;
};

void weight_initialize(){
    W[0]=1,W[1]=2,W[2]=3,W[3]=4;

    int index;
    for(int i=0; i<std::pow(2,4);i++){
        W1[i]=0;
        for(int j=0; j<4;j++){
            index=(i>>j)&1;
            W1[i]+=W[3-j]*index;
        }
        std::cout << W1[i] << std::endl;
    }
    offset=W1;
}

void distribute(unsigned int *X,unsigned int *Y){
    unsigned int result=0;
    unsigned int temp=0;
    bit_address selector;
    for(int i=0; i<31; i++){
        selector.B.X0=X[0]&1;
        selector.B.X1=X[1]&1;
        selector.B.X2=X[2]&1;
        selector.B.X3=X[3]&1;
        X[0]=X[0]>>1;
        X[1]=X[1]>>1;
        X[2]=X[2]>>1;
        X[3]=X[3]>>1;
        temp=*(offset+selector.num);
        std::cout << selector.num << " "; // << std::endl;
        result+=(temp<<i);
    }
    Y[0]=result;
}

int main()
{
    unsigned int X[4];
    unsigned int Y[1];
    X[0]=0,X[1]=1,X[2]=2,X[3]=3;
    weight_initialize();
    distribute(X,Y);
    std::cout << Y[0] << std::endl;
    return 0;
}
