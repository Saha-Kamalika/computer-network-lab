#include<stdio.h>
int mul(int r){
    int re=1,i;
    for(i=0;i<r;i++)
        re*=2;
    return re;
}
void main(){
    int m,r,ms[50],data[50];
    int i,j=1,k=0;
    printf("Enter the message size: ");
    scanf("%d",&m);
    while(1){
        if((m+r+1)<=mul(r))
        break;
        r++;
    }
    printf("Enter the message: ");
    for(i=1;i<=m;i++)
        scanf("%d",&ms[i]);
    for(i=1;i<=(m+r);i++){
        if(i==mul(k)) {
            data[i]=8;
            k++;
        }
        else{
            data[i]=ms[j];
            j++;
        }
    }
    for(i=1;i<=(m+r);i++)
        printf("%d",data[i]);
}