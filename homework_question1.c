#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100

char* ToPigLatin (char* s1){
	 char pigLatin[MAX];
	int i,j,vowel;
	int lens1=strlen(s1);
	int setUpper=0;
	for(i=0;i<lens1;i++){
		if(s1[i]==' '){
			continue;
		}
	}
	for(i=0; i<lens1;i++){
		if(s1[i] == 'a' || s1[i] == 'i' || s1[i] == 'u' || s1[i] == 'e' || s1[i] == 'o' || s1[i] == 'A' || s1[i] == 'E' || s1[i] == 'I' ||
               s1[i] == 'O' || s1[i] == 'U' || (s1[i] == 'y' && i > 0) || (s1[i] == 'Y' && i > 0)){
               	
               	vowel=i;
               	break;
			   }
	}
	if(s1[0]>='A'&&s1[0]<='Z'){
		setUpper=1;
		s1[0]=tolower(s1[0]);
	}
	if(vowel==0){
		strcpy(pigLatin,s1);
		strcat(pigLatin,"way");
	//	pigLatin[0]=toupper(pigLatin[0]);
		//printf("\n%s\n",pigLatin);
	}
	else
	{
		j=0;
		pigLatin[j]=s1[vowel];
		for(i=vowel+1;i<lens1;i++){
			pigLatin[++j]=s1[i];
		}
		pigLatin[++j]=s1[0];
		for(i=1; i<vowel;i++){
			pigLatin[++j]=s1[i];
		}
		strcat(pigLatin,"ay");
		pigLatin[lens1+2]='\0';
		//printf("\n%s\n",pigLatin);
	}
	strcpy(s1,pigLatin);
	if(setUpper==1){
		s1[0]=toupper(s1[0]);
	}
	return s1;
}
//}

int main(){
	char s1[MAX];
	int i;
	for(i=0;i<5;i++){
	printf("Input s1s: "); scanf("%s",s1);
	printf("\n%s\n",ToPigLatin(s1));
}

}
