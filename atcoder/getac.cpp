#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    std::string S;
    int N,Q;
    int l[100000],r[100000];
    int A_place[100000];
    int count=0;
    std::cin >> N >> Q;
    std::cin >> S;
    for(int i=0; i<Q; i++){
        std::cin >> l[i] >> r[i];
    }

    int place=0;
    for(int i=0; i<N; i++){
        if(S[i] == 'A'){
            A_place[place] = i;
            place++;
        }
    }

    for(int i=0; i<Q; i++){
        for(int j=0; j<place;j++){
            if(l[i]-1 <= A_place[j] && A_place[j] <= r[i]-2){
                if(S[A_place[j]+1] == 'C'){
                    count++;
                }
            }
        }
        std::cout << count << std::endl;
        count=0;
    }
    return 0;
}