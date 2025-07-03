//TRAVIS COFFINO
#include <stdio.h>

char* my_reverse(char s1[], char s2[]){ //s1=s2
    int i,j;
    int len2;
    for(len2=0;s2[len2]!='\0';len2++){
        
    }
   
    for(i=0, j=len2-1;j>=0;j--,i++){
            s1[i]=s2[j];
    }
    
    s1[i]='\0';
    return s1;
}

int main(){
    char s1[100],s2[100];
    printf("String 1: "); scanf("%s",&s1);
    printf("String 2: "); scanf("%s",&s2);

    printf("%s",my_reverse(s1,s2));
}