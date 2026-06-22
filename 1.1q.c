#include<stdio.h>

struct Student{
    int id;
    char name[50];
    float marks[3];
    float avg;
};
int main(){

    int N,i,j,m = 0;
    int topperIndex = 0;

    scanf("%d",&N);
    
    struct Student s[N];
    
    for(int i=0;i<N;i++){
        scanf("%d %s %f %f %f",&s[i].id,s[i].name,&s[i].marks[0],&s[i].marks[1],&s[i].marks[2]);

        s[i].avg = (s[i].marks[0]+s[i].marks[1]+s[i].marks[2])/3;

        if(s[i].avg > s[topperIndex].avg){
            topperIndex = i;
        }

        //print merit list
        

    }
    printf("Merit List:");

    for(j=0;j<N;j++){
            if(s[j].avg>75){
                printf("%d %s (Avg : %.2f)\n",s[j].id,s[j].name,s[j].avg);
            }
        }

    for (int k=0;k<N;k++){
        if(s[k].avg <= 75){
            m++;
        }
    }
    if(m == N){
        printf("Empty\n");
    }

        printf("Topper: %s\n",s[topperIndex].name);

    return 0;
}