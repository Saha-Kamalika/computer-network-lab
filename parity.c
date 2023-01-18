#include<stdio.h>
#include<string.h>
void main()
{
		char s[50],s1[50];
		printf("Enter the dataword: ");
		scanf("%s",&s);
		int len=strlen(s);
		int one=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='1')
				one++;
		}
		if(one%2==0){
			strcat(s,"0");
			printf("Parity bit = 0\n");
			}
		else {
			strcat(s,"1");
			printf("Parity bit = 1\n");
			}
		printf("The codeword is %s in even parity\n",s);
		strncpy(s1,s,len);
		if(one%2!=0){
			strcat(s1,"0");
			printf("Parity bit = 0\n");
		}
		else {
			strcat(s1,"1");
			printf("Parity bit = 1\n");}
		printf("The codeword is %s in odd parity\n",s1);
}
