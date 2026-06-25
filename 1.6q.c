#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int array[n];

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    
    int frequency[n];
    for(int i=0;i<n;i++){
        frequency[i] = 0;
    }


    int count = 1;

    for(int j=0;j<n;j++){
        if( j <n-1 && array[j] == array[j+1]){
            count++;
        }else{
            printf("%d -> %d\n",array[j],count);
            count = 1;
        }
    }










    return 0;
}