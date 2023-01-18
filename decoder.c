#include<stdio.h>
#include<string.h>
void main()
{
	char cw[50];
	int ch;
	printf("The sender data was in even or odd ?\nEnter 1 for even & 2 for odd: \n");
	scanf("%d",&ch);
	printf("Enter the codeword: ");
	scanf("%s",&cw);
	int len=strlen(cw);
	int one=0;
	for(int i=0;i<len;i++)
	{
		if(cw[i]=='1')
			one++;
	}
	switch(ch){
	case 1: if(one %2==0)
			{
				printf("Dataword is \n");
				for(int j=0;j<len-1;j++)
				{
					printf("%c",cw[j]);
				}
			}
			else
				printf("Wrong codeword received\n");
			break;
	case 2: if(one %2!=0)
			{
				printf("Dataword is \n");
				for(int j=0;j<len-1;j++)
				{
					printf("%c",cw[j]);
				}
			}
			else
				printf("Wrong codeword received");
			break;
	default: printf("Wrong choice");
}
}


