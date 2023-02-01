#include<stdio.h>
#include<string.h>	
void main()
{
	char dw[50],div[50],rem[50],temp[50];
	printf("Enter the dataword: ");
	scanf("%s",dw);
	printf("Enter the divisor: ");
	scanf("%s",div);
	int dl=strlen(dw),i,j;
	int divl=strlen(div);
	dw[dl]='\0';
	div[divl]='\0';
	strcpy(temp,dw);
	for(i=0;i<divl-1;i++)
		temp[dl+i]='0';
	printf("After padding n+1 zeros, the dataword is[here n = %d] : ",divl);
	puts(temp);
	for(i=0;i<dl;i++)
	{
		if(temp[i]!='0'){
			for(j=0;j<divl;j++)
				rem[j]=temp[i+j]=(temp[i+j]==div[j])?'0':'1';
			}
	/*printf("%s\n",temp);
	printf("%s\n",rem);*/
	}
	for(i=0;i<divl;i++)
		rem[i]=rem[i+1];
	printf("CRC bit: ");
	puts(rem);
	strcat(dw,rem);
	printf("The transmitted bit pattern: ");
	puts(dw);
}

