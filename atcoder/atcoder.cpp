#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    std::string S;
    std::cin >> S;
    int length = S.length();
    int tempcount=0,count=0;
    for(int i=0; i<length; i++){
        if(S[i]=='A' || S[i]=='G' || S[i]=='T' || S[i]=='C'){
            tempcount++;
        }else{
            if(count <= tempcount){
                count = tempcount;
            }
            tempcount=0;
        }
    }
    if(count <= tempcount){
        count = tempcount;
    }
    std::cout << count <<std::endl;
    return 0;
}