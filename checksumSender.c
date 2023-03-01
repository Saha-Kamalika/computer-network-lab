#include<stdio.h>
#include<string.h>
void main()
{
    char dw[50],zero[50],s[20];
    int sl=-1,i,j,sum=0;
    printf("Enter the dataword: ");
    scanf("%s",dw);
    while(sl%2!=0){
		printf("Enter segment length: ");
		scanf("%d",&sl);
	}
    int l=sl-(strlen(dw)%sl);
    for(i=0;i<l;i++)
        zero[i]='0';
    zero[i]='\0';
    strcat(zero,dw);
    printf("The new sequence is: ");
    puts(zero);
    for(i=0;i<sl;i++)
        s[i]='0';
    s[i]='\0';
    for(i=0;i<strlen(zero);i+=sl){
        int c=0,p=sl-1;
        for(j=sl+i-1;j>=i;j--)
        {
        	sum=(s[p]-48)+(zero[j]-48)+c;
        	s[p]=(char)((sum%2)+48);
        	c=sum/2;
        	p--;
		}
		if(c==1){
			for(j=sl-1;j>=0;j--)
        	{
	        	sum=(s[j]-48)+c;
	        	s[j]=(char)((sum%2)+48);
	        	c=sum/2;
			}
		}
	}
	for(i=sl-1;i>=0;i--){
		s[i]=(s[i]=='1')?'0':'1';}
	printf("The Checksum is: ");
	puts(s);
	strcat(zero,s);
	printf("The transmitted bit pattern is: ");
	puts(zero);
}


