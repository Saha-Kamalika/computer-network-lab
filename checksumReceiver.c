#include<stdio.h>
#include<string.h>
void main()
{
    char cw[50],zero[50],s[20],s1[20];
    int sl=-1,i,j,sum=0;
    printf("Enter the codeword: ");
    scanf("%s",cw);
    while(sl%2!=0){
		printf("Enter segment length: ");
		scanf("%d",&sl);
	}
    for(i=0;i<sl;i++)
        s[i]='0';
    s[i]='\0';
    for(i=0;i<strlen(cw);i+=sl){
        int c=0,p=sl-1;
        for(j=sl+i-1;j>=i;j--)
        {
        	sum=(s[p]-48)+(cw[j]-48)+c;
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
	for(i=0;i<sl;i++){
		if(s[i]!='0'){
			printf("Data rejected");
			strncpy(s1,cw,strlen(cw)-sl);
			s1[strlen(cw)-sl]='\0';
			printf("\nThe transmitted bit pattern was ");
			puts(s1);
			return;
		}
	}
	printf("Data accepted");
	strncpy(s1,cw,strlen(cw)-sl);
	s1[strlen(cw)-sl]='\0';
	printf("\nThe transmitted bit pattern was ");
	puts(s1);
}
