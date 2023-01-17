#include<stdio.h>
#include<string.h>
int seg(char s[],int l)
{
    int i,c=0,d=0,k=-1,j=1,m,ni,nf;
    int n=strlen(s);
    char zero[50];
    char ss[50];
    if(n%l>0){
        int rem=l-(n%l); //find no of zeros to pad infront
        for(i=0;i<rem;i++)
            zero[i]='0'; //zero string array created of size rem
        zero[rem]='\0';
        strcat(zero,s); //resulting padded string in zero
        printf("%s",zero);
    }
    else 
        printf(s);
    if(n%l>0)
        m=strlen(zero)/l; //find no of segments
    else
        m=strlen(s)/l; 
    printf("\nno of seg = %d\n",m);
    ni=0,nf=l;
    while(j<=m){
        k++;
        if(n%l>0){
            printf("Segment %d: %s\n",j,strncpy(ss,zero+ni,l));}
        else
            printf("Segment %d: %s\n",j,strncpy(ss,s+ni,l));
        j++;
        ni=l+l*k;
        nf=nf+l;
        }
    ni=0,nf=l,j=1,k=-1;
    printf("\nFrequency: ");
    while(j<=m){
        k++;
        for(i=ni;i<nf;i++)
        {
            if(n%l>0){
            if(zero[i]=='1')
            {
                c++;
            }}
            if(s[i]=='1'){
                d++;
            }
        }
        if(n%l>0)
        printf("\nSegment %d: %d\n",j,c);
        else printf("\nSegment %d: %d",j,d);
        j++;
        c=0;
        d=0;
        ni=l+l*k;
        nf=nf+l;
    }
}
void main()
{
    int l;
    char s[50];
    printf("Enter the string of 0's and 1's: ");
    scanf("%s",&s);
    printf("Enter the segment length: ");
    scanf("%d",&l);
    seg(s,l);
}