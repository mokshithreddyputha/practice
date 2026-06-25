#include<stdio.h>

int main(){
    int a1,a2;
    scanf("%d",&a1);
    int array1[a1];

    for(int i=0;i<a1;i++){
        scanf("%d",&array1[i]);
    }

     scanf("%d",&a2);
    int array2[a2];

    for(int i=0;i<a2;i++){
        scanf("%d",&array2[i]);
    }

    int merged[a1+a2];

    int a=0,b=0,c=0;

    while(a<a1 && b<a2){
        if(array1[a] < array2[b]){
            merged[c++] = array1[a++];
        }
        else{
            merged[c++] = array2[b++];
        }
    }

    while(a < a1){
        merged[c++] = array1[a++];
    }

    while(b < a2){
        merged[c++] = array2[b++];
    }


    for(int i=0;i< (a1+a2);i++){
        printf("%d ",merged[i]);
    }




    return 0;
}