#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void main(){
  char str[50];
  int cwlen,pblen,i,j,k;
  printf("Enter the dataword: ");
  gets(str);
  int dwlen=strlen(str);
  while(1){
    if(pow(2,pblen)>=dwlen+pblen+1)   //2^r>=m+r+1
      break;
    pblen++;
  }
  cwlen=dwlen+pblen;
  int cw[cwlen];
  for(i=0;i<cwlen;i++)
    cw[i]=0;
  for(i=0;i<pblen;i++){
    int temp=pow(2,i);
    cw[cwlen-temp]=-1;  //set the parity bits to -1
  }
  k=0;
  for(i=0;i<cwlen;i++){
    if(cw[i]==-1) continue;
    else cw[i]=str[k++]-48;  //copy the message bits 
  }
   //calculating parity bits
  for(i=0;i<pblen;i++){
    int xor=0;
    int rn=pow(2,i);
    printf("P%d",i+1);
    for(j=rn;j<=cwlen;j++){
      for(k=1;k<=rn;k++){
        if(j!=rn) xor=xor^cw[cwlen-j];
        j=j+1;
        if(j>cwlen)
          break;
      }
      j=j+rn-1;
    }
    printf("%d\n",xor);
    cw[cwlen-rn]=xor;
  }
  printf("Codeword is : ");
  for(i=0;i<cwlen;i++)
    printf("%d",cw[i]);
  printf("\n");
  }
