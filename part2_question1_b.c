//TRAVIS COFFINO
#include <stdio.h>
#define MAX 32

int my_strncmp(char str1[],char str2[], int n){
    int i;
    
    for(i=0; str1[i] != '\0' && str2[i] != '\0'&&i<n;i++){
        if(str1[i]!=str2[i])
            return 1;
    }
    if(i==n){
        return 0;
    }
        if (str1[i] == str2[i])
		    return 0;
    return 1;
}

int main () {
	char str1 [MAX] = "a", str2[MAX];
	int n=0;
    

    while (str1[0]!='#') {
        printf("Length n: "); scanf("%d",&n);
		printf ("str1: "); scanf ("%s", str1); getchar();
		
		printf ("str2: "); scanf ("%s", str2); getchar();
		
		
        printf("\n%d\n",my_strncmp(str1,str2,n));
    }
    return 0;
}