#include <iostream>



void margesort(int *A, int length)
{
    if(length!=1){
        int *L,*R;
        L=(int*)malloc(sizeof(int)*(length/2));
        R=(int*)malloc(sizeof(int)*(length/2));
        margesort(L,length/2);
        margesort(R,length/2); //A->L,R
        for(int i=0; i<length/2; i++){
            //LとRの比較
        }
    }
}