#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int target;

    scanf("%d",&target);

    int k = n-1;
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            k = i;
        break;
        }
    }

int low = 0;
int high = k;
int mid;
int found = 0;

while(low <= high){
    mid = (low+high)/2;

    if(arr[mid] > target){
        high = mid-1;
    }
    else if(arr[mid] < target){
        low = mid+1;
    }
    if(arr[mid] == target){
        printf("%d\n",mid);
        found = 1;
        break;
    }
}

if(!found){
    int low1 = k+1;
    int high1 = n-1;
    int mid1;

    while(low1 <= high1){
        mid1 = (low1+high1)/2;

        if(arr[mid1] > target){
            high1 = mid1-1;
        }
        else if(arr[mid1] < target){
            low1 = mid1+1;
        }
        if(arr[mid1] == target){
            printf("%d\n",mid1);
            found = 1;
            break;
        }
    }
}

    if(!found){
        printf("-1\n");
    }

    return 0;
}