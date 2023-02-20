#include<stdio.h>
#include<string.h>
void crc(char dw[],char div[])
{
	char result[50];
	int dl=strlen(dw),count=0,i,j;
	int divl=strlen(div);
	dw[dl]='\0';
	for(i=0;i<dl-divl+1;i++)
		result[i]=dw[i];
	result[i]='\0';
	for(i=0;i<dl-divl+1;i++)
	{
		if(dw[i]=='1'){
		for(j=0;j<divl;j++)
		{
			dw[i+j]=(dw[i+j]==div[j])?'0':'1';
		}
		}
		}
	/*puts(temp);
	for(int i=0;i<divl;i++)
		rem[i]=rem[i+1];	
	rem[divl-1]='\0';*/
	printf("The remainder is:  ");
	/*for(i=dl;i<strlen(dw);i++)
		printf("%c",dw[i]);*/
	for(i=dl-divl+1;i<strlen(dw);i++)
		printf("%c",dw[i]);
	printf("\nThe dataword is:  ");
	for(i=0;i<strlen(dw)-1;i++)
		printf("%c",result[i]);
	int len=strlen(dw);
	for(i=0;i<len;i++){
	if(dw[i]=='1')
	{
		count=1;
		break;
	}
	}
	if(count==0)
		printf("\nData accepted");
	else printf("\nData rejected");
	}
void main()
{
	char dw[50],div[50];
	printf("Enter the codeword: ");
	scanf("%s",dw);
	printf("Enter the divisor: ");
	scanf("%s",div);
	crc(dw,div);
}
