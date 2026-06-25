#include<stdio.h>
#include<string.h>

int main(){
    char string[100];
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")] = '\0';

    int m = strlen(string);
    int count = 1;

    char compressed[100];
    for(int i=0;i<100;i++){
        compressed[i] = '\0';
    }
    int k=0;

    for(int i=0;i<m;i++){
        if(i<m-1 && string[i] == string[i+1]){
            count++;
        }else{
            compressed[k++]=string[i];
            compressed[k++]=count + '0';
            count = 1;
        }
    }
    compressed[k] = '\0';

    if(strlen(compressed) <= strlen(string)){
        for(int i=0;i<strlen(compressed);i++){
           printf("%c",compressed[i]);
        }
    }else{
        printf("%s",string);
    }

    


    return 0;
}