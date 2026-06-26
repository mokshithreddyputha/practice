#include<stdio.h>
#include<math.h>

int main(){
    int n,h;

    scanf("%d %d",&n,&h);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int max = 0;

    for(int i=0;i<n;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }

    int low = 1;
    int high = max;
    int mid,x,sum=0;

    while(low<high){
        sum = 0;
        mid = (low + high)/2;
        for(int i=0;i<n;i++){
            sum += ceil((double)arr[i]/mid);
        }
            if(sum > h){
                low = mid+1;
            }else{
                high = mid;
            }
        
    }

    printf("%d\n",low);
    return 0;
}