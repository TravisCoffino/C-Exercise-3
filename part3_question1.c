//TRAVIS COFFINO
#include <stdio.h>
#include <string.h>
#define MAX 32

void ex1(char str[]){
	int i;
	int len=strlen(str);
    for(i=0;i<len;i++){
        str[i]=str[i+1];
        //remember override '\0'
    }
    return;
}

char Shift(char str[]){
    
//	int i=0;
//    int len;
//    char temp;
    
    while(str[0]!='\0'){
        printf("\n%s\n",str);
		ex1(str);
		//remove the first character
    }
    //return 0;
    // for(len=0;s1[len]!='\0';len++){
        
    // }

    // while(len!=0){

    // }

    // s1[i]=\0
}

int main(){
	char str[MAX];
	printf("Give a string: "); scanf("%s",str);
	Shift(str);
	printf("\n%s\n",str);
}



// //TRAVIS COFFINO
// #include <stdio.h>

// void ex1(char str){
//     for(i=0;i=len;i++){
//         str[i]=str[i+1];
//         //remember override '\0'
//     }
//     return;
// }

// char Shift(char s1[]){
//     int i=0;
//     int len;
//     char temp;
//     while(str[0]!='\0'){
//         ex1(str); //remove the first character
//     }
//     return 0;
//     // for(len=0;s1[len]!='\0';len++){
        
//     // }

//     // while(len!=0){

//     // }

//     // s1[i]=\0
// }

// int main(){

// }