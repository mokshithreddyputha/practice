#include<stdio.h>
#include<string.h>

 void findIntersection(int a,int b,int A[],int B[]){

    int foundAny = 0;
    
    printf("Intersection: ");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(A[i] == B[j]){
                printf("%d ",A[i]);
                foundAny = 1;
            }
        }
    }
    if(!foundAny){
        printf("(None)");
    }
    printf("\n");
}

void findUnion(int a,int b,int A[],int B[]){
    

    printf("Union: ");

    int C[a+b];
    int count = 0;

    for(int i=0;i<a;i++){
        C[count++] = A[i];
    }

   for(int i=0;i<b;i++){
    int found =0;
        for(int j=0;j<a;j++){
                if(B[i] == A[j]){
                    found = 1;
                    break;
                }
            }
            if(!found){
                C[count++] = B[i];
        }
   }


    //sorting

   for(int i=0;i<count-1;i++){
    for(int j=0;j<count-i-1;j++){
        if(C[j] > C[j+1]){
            int temp = C[j];
            C[j] = C[j+1];
            C[j+1] = temp;
        }
    }
   }

    for(int i=0;i<count;i++){
        printf("%d ",C[i]);
    }
    printf("\n");

}

int main(){
    int n1,n2;
    
   

    scanf("%d",&n1);
    int sa[n1];

    for(int i=0;i<n1;i++){
        scanf("%d",&sa[i]);
    }

    scanf("%d",&n2);
     int sb[n2];

    for(int i=0;i<n2;i++){
        scanf("%d",&sb[i]);
    }

    findUnion(n1,n2,sa,sb);
    findIntersection(n1,n2,sa,sb);

    return 0;
}