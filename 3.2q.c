#include<stdio.h> 

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int low = 0;
    int high = n-1;
    
    while(low < high){
        int mid = (low+high)/2;
        if(arr[mid] < arr[mid+1]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }

    printf("%d\n",low);












    return 0;
}