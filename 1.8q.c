#include<stdio.h>
#include<string.h>

void rotateLeft(int arr[],int k,int n){
    
        int temp = arr[0];
        for(int i=0;i<n-1;i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = temp;

    k--;
    if(k>0){
        rotateLeft(arr,k,n);
    }
    if(k==0){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
    
}

void rotateRight(int arr[],int k,int n){

    int temp = arr[n-1];

    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    k--;
    if(k>0){
        rotateRight(arr,k,n);
    }
    if(k==0){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}


int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int d;
    scanf("%d",&d);
    
    int k;
    scanf("%d",&k);

    if(k>n){
        k = k%n;
    }

    if(d == 0){
        rotateLeft(arr,k,n);
    }else{
        rotateRight(arr,k,n);
    }






    return 0;
}