//TRAVIS COFFINO
#include <stdio.h>

int my_isalpha(char ch){

    return(ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}

int my_isdigit(char ch){

    return(ch>='0'&&ch<='9');
}

int my_is_upper(char ch){
    return(ch>='A'&&ch<='Z');
}

int my_to_upper(char ch){
    if(ch>='a'&&ch<='z'){
        ch=ch-32;
    }
    else{
        return ch;
    }
}

int my_to_lower(char ch){
    if(ch>='A'&&ch<='Z'){
        ch=ch+32;
    }
    else{
        return ch;
    }
}

int main(){
    char ch='a';

    while(ch!='#'){
        printf("Input a character: "); scanf("%c",&ch); getchar();
        printf("%d\n",my_isalpha(ch));

        printf("%d\n",my_isdigit(ch));

        printf("%d\n",my_is_upper(ch));

        printf("%c\n",my_to_upper(ch));

        printf("%c\n",my_to_lower(ch));
    }
    return 0;
}
