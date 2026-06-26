#include<stdio.h>

int main(){

    int n;

    scanf("%d",&n);

    int student[n][2];

    for(int i=0;i<n;i++){
        scanf("%d",&student[i][0]);
        scanf("%d",&student[i][1]);
    }

    printf("\n");

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(student[j][0] < student[j+1][0]){
                int temp1 = student[j][0];
                int temp2 = student[j][1];

                student[j][0] = student[j+1][0];
                student[j][1] = student[j+1][1];

                student[j+1][0] = temp1;
                student[j+1][1] = temp2;
            }
        }
    }
    

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(student[j][0] == student[j+1][0] && student[j][1] > student[j+1][1]){
                int temp = student[j][1];
                student[j][1] = student[j+1][1];
                student[j+1][1] = temp;
            }
        }
    }


    for(int i=0;i<n;i++){
        printf("%d %d\n",student[i][0],student[i][1]);

    }





    return 0;
}