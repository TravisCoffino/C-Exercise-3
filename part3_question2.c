//TRAVIS COFFINO
#include <stdio.h>
#include <string.h>
char s3[100];
char *ex2(char s1[], char s2[]){
	int lens1=strlen(s1);
	int lens2=strlen(s2);
	int lens3=strlen(s3);
	s3[0]='\0';
	int m=0,true=0;
	int i,j;
    for(i=0;i<lens1;i++/*i from 0 to lens1-1*/){
    	true=0;
        for(j=0;j<lens2;j++/*j from 0 to lens2-1*/){
            //check if s1[i]==s2[j];
            
            if(s1[i]==s2[j]){
            	true=1;
            	break;
			}
		}
        //if(s1[i] appears in s2[j])
          //  skip i;
        if(true==0){
        
            //s3[i]=s3+s1[i]; //append s1[i to s3;]
           s3[m]=s1[i];
            m++;
            
        }
            
    
}s3[m]='\0';
    return s3;
}

int main(){

char s1[100],s2[100];
printf("Enter s1: "); scanf("%s",s1);
printf("Enter s2: "); scanf("%s",s2);
printf("%s\n",ex2(s1,s2));
}




// //TRAVIS COFFINO
// #include <stdio.h>
// s3="";
// char *ex2(char s1[], char s2[]){
//     for(i from 0 to lens1-1)
//         for(j from 0 to lens2-1)
//             check if s1[i]==s2[j];
//         if(s1[i] appears in s2[j])
//             skip i;
//         else
//             s3=s3+s1[i]; //append s1[i to s3;]
// }

// char s1[100],s2[100];
// printf("%s\n",ex2(s1,s2));