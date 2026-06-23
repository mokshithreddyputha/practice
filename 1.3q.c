#include<stdio.h>
#include<string.h>

int main(){

    char string[1000];

    fgets(string,sizeof(string),stdin);

    int s = strlen(string);

    int count=1;

    for(int i=0;i<s;i++){
        if(string[i] == ' '){
            count++;
        }
    }

    printf("Words: %d\n",count);

    int v=0;

    for(int i=0;i<s;i++){
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            v++;
        }
    }

    printf("Vowels: %d\n",v);

    for(int i=0;i<s/2;i++){
        int temp = string[i];
        string[i] = string[s-i-1];
        string[s-i-1] = temp;
    }

    printf("Reversed: %s\n",string);

    return 0;

}