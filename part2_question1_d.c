//TRAVIS COFFINO
#include <stdio.h>
#include <string.h>

char* my_strcat(char s1[], char s2[]){ //s1=s2
    int i;
    int len1=strlen(s1);
    //printf("%d",len1);
    for(i=0;s2[i]!='\0';i++){
        s1[len1+i]=s2[i];
       // printf("%d",len1+1+i);
    }
    s1[len1+i]='\0';
    return s1;
}

int main(){
    char s1[100],s2[100];
    printf("String 1: "); scanf("%s",s1);
    printf("String 2: "); scanf("%s",s2);

    printf("%s",my_strcat(s1,s2));
}