//CHARACTER COUNT


#include<stdio.h>
#include<string.h>
void main()
{
struct frame{
int c;
char s[100];
}f[100];
int n,i,j=0,sum=0,k,l;
char str[100];
printf("enter the string :\n");
scanf("%s",str);
l=strlen(str);
printf("enter the number of frames:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the frame count:\n");
scanf("%d",&f[i].c);
}
for(i=0;i<n;i++)
{
sum=sum+f[i].c;
k=0;
while(j<sum &&j<l)
{
f[i].s[k]=str[j];
j++;
k++;
}
f[i].s[f[i].c]='\0';
}
for(i=0;i<n;i++)
{
printf("frame  %d  :  %s\n",i+1,f[i].s);
}
}

EXECUTION:

enter the string :                                                                                                                              
COMPUTERNETWORKS                                                                                                                                
enter the number of frames:                                                                                                                     
4                                                                                                                                               
enter the frame count:                                                                                                                          
4                                                                                                                                               
enter the frame count:                                                                                                                          
4                                                                                                                                               
enter the frame count:                                                                                                                          
4                                                                                                                                               
enter the frame count:                                                                                                                          
4                                                                                                                                               
frame  1  :  COMP                                                                                                                               
frame  2  :  UTER                                                                                                                               
frame  3  :  NETW                                                                                                                               
frame  4  :  ORKS

