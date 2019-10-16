#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {   int i,n=1,a,k,s=0,q;
printf("enter n and k");
scanf("%d%d",&a,&k);
a=a+1;
q=a;
for(  i=0;n<a;i++)
{  n=n*2;
 s++;
 } n=n/2; int b[s];
 for(  i=0;i<s;i++)
 {  if(a>n)
 { a=a-n;
    b[i]=1;
 }
 else
 { b[i]=0;
  } n=n/2;
 }
 int f=0,g,h;
 printf("\n%d",b[k+1]);n=1;
for(  i=1;i<s;i++)
{   f=f+(n*b[i]);
    n=n*2;        }
printf("\nafter right shift= %d",f-1);
n=n*2;
printf("\nafter parity %d",n-q);
 
	return 0;
}
