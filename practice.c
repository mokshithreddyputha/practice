#include<stdio.h>

struct Student{
    int id;
    char name[50];
    float marks[3];
    float avg;
};
int main(){

    int N,i,j;
    int topperIndex;

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

        printf("Topper: %s\n",s[topperIndex].name);

    return 0;
}