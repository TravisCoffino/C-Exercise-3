//TRAVIS COFFINO 
#include <stdio.h>

char* my_strcpy(char s1[], char s2[]){ //s1=s2
    int i;
    for(i=0;s2[i]!='\0';i++){
        s1[i]=s2[i];
    }
    s1[i]='\0';
    return s1;
}

int main(){
    char s1[100],s2[100];
    printf("String 1: "); scanf("%s",&s1);
    printf("String 2: "); scanf("%s",&s2);

    printf("%s",my_strcpy(s1,s2));
}