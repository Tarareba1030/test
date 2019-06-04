#include <iostream>

struct bit{
    unsigned int X1 : 1;
    unsigned int X2 : 1;
    unsigned int X3 : 1;
    unsigned int X4 : 1;
};

unsigned int W1[16]={0,4,3,2,1,7,6,5,5,4,3,9,8,7,6,10};

union bit_address{
    unsigned int* address;
    struct bit B;
}; //ROMへのアクセストリガー

int main()
{
    
    unsigned int* offset=W1;

   
    
    std::cout << *(offset+8) << std::endl;
    

    //0xaが結構大事な部分に使われているので書き換えられない?
    return 0;
}
