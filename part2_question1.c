//TRAVIS COFFINO
#include <stdio.h>
#define MAX 32

// int my_strcmp(char str1[], char str2[]){
//     int i;
//     for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++){
// 		// if (str1[i] == str2[i])
// 		// 	return 0;
//         // else
//         //     return 1;

//         if (str1[i] == '\0' && str2[i] == '\0')
// 		    return 0;
//         if(str1[i]!=str2[i])
//             return 1;
//     }
// }

// // int my_strncmp(char str1[],char str2[], int n){
// //     int i;
    
// //     for(i=0; str1[i] != '\0' && str2[i] != '\0'&&i<=n;i++){
// //         if (str1[i] == '\0' && str2[i] == '\0')
// // 		    return 0;
// //         if(str1[i]!=str2[i])
// //             return 1;
// //     }
// // }


// int main () {
// 	char str1 [MAX] = "a", str2[MAX];
// 	int t;
// 	//printf("%d",my_strcmp(str1, "#"));
// 	while (my_strcmp(str1, "#") != 0) {
// 		printf ("str1: "); scanf ("%s", str1); getchar();
		
// 		printf ("str2: "); scanf ("%s", str2); getchar();
		
		

//         printf("\n%d\n",my_strcmp(str1,str2));
//     }
//     return 0;
// }


int my_strcmp(char s1[], char s2[]){
    int i;
    for(i=0;s1[i]!='\0'&&s2[i]!='\0';i++){
        if(s1[i]!=s2[i])
            return 1;
    }
    if(s1[i]==s2[i]) //both 0's
        return 0;
        //1 '\0', another not '\0'
    return 1;
}

// char* my_strcpy(char s1[], char s2[]){ //s1=s2
//     int i;
//     for(i=0;s2[i]!='\0';i++){
//         s1[i]=s2[i];
//     }
//     s1[i]='0';
//     return s1;
// }

int main(){
    char s1[100],s2[100];
    scanf("%s %s",s1,s2);
    printf("%s %s\n",s1,s2);

    printf("%d\n",my_strcmp(s1,s2));
    return 0;

}