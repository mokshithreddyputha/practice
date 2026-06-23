#include<stdio.h>
void multiplyMatrices(int c1,int r1,int c2,int r2,int m1[r1][c1],int m2[r2][c2]){

    int m[r1][c2];
    
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            m[i][j] = 0;
        }
    }

    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
                m[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int c1,r1,c2,r2;

    scanf("%d %d",&r1,&c1);

    int matrix1[r1][c1];

    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }

    scanf("%d %d",&r2,&c2);

    int matrix2[r2][c2];

    for(int k=0;k<r2;k++){
        for(int h=0;h<c2;h++){
            scanf("%d",&matrix2[k][h]);
        }
    }

    if(c1 != r2){
        printf("Not Possible");
        return 0;
    }

    
    multiplyMatrices( c1,r1,c2,r2,matrix1,matrix2);

    return 0;

}