#include<stdio.h>
void lower(char str[]){
int i=0;
while(str[i]!='\0'){
    if(str[i]>='A' && str[i]<='Z'){
        str[i]=str[i]+32;
    }
    i++;
}

}
int main(){

    char str[100];
    printf("Enter a string");
    fgets(str,100,stdin);
    lower(str);
    printf("%s",str);
    return 0;
}