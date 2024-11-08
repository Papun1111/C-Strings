#include<stdio.h>
#include<string.h>
int main(){
char str[]="papun";
char st2[100];
fgets(st2,100,stdin);
int l=strlen(st2);
printf("%d",l);
return 0;
}