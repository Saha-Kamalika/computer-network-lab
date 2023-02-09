#include<stdio.h>
#include<string.h>
void crc(char dw[],char div[])
{
	char temp[50],rem[50];
	int dl=strlen(dw),i,j;
	int divl=strlen(div);
	strcpy(temp,dw);
	for(i=0;i<divl-1;i++)
		dw[dl+i]='0';
	dw[dl+divl-1]='\0';
	div[divl]='\0';
	printf("After zero padding, the updated dividend is: ");
	puts(dw);
	for(i=0;i<dl;i++)
	{
		if(dw[i]=='0')
			continue;
		else{
		for(j=0;j<divl;j++)
		{
			dw[i+j]=(dw[i+j]==div[j])?'0':'1';
		}
		}
		}
	printf("CRC bit: ");
	for(i=strlen(dw)-divl+1;i<strlen(dw);i++)
		printf("%c",dw[i]);
	printf("\n");
	for(i=0;i<dl;i++)
		dw[i]=temp[i];
	printf("Transmitted bit pattern : ");
	puts(dw);
}
	
void main()
{
	char dw[50],div[50];
	printf("Enter the dataword: ");
	scanf("%s",dw);
	printf("Enter the divisor: ");
	scanf("%s",div);
	crc(dw,div);
}
