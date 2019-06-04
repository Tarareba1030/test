#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    int N,A,B,C,D;
    std::cin >> N >> A >> B >> C >> D;
    std::string S;
    char none[2]=".";
    char stone[2]="#";
    for(int i=0; i<N; i++){
        std::cin >> S[i];
    }
    
    int flag=1;

    for(int i=0; i<N-1; i++){
        if(S[i]==*stone){
            if(S[i+1]==*stone && ((A<i&&i<<C) || (B<i&&i<<D))){
                flag=0;
                break;
            }
        }
    }

    int stone_num=B-1;
    if(D<C && flag==1){
        if(S[(B-1)-1]==*stone || S[(B-1)+1]==*stone){
            for(int i=B-1; i<N; i++){
                if(S[i]==*stone){
                    if(i-stone_num<3){
                        stone_num=i;
                    }else{
                        break;
                    }
                }
                if(i==N-1 && N-1-stone_num <3){
                    flag=0;
                }
            }
            
        }
    }

    if(flag==1){
        std::cout << "Yes" << std::endl;
    }
    if(flag==0){
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
