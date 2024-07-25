#include <stdio.h>
#include <string.h>

int main(){
    char password[10];
    int flag=0;
    printf("ENter password\n");
    scanf("%s",password);
    if(strcmp(password,"123")==0){
        printf("Welcome!");
        flag=1;
   }
   else{
    printf("WRong password\n");
   }
   if(flag){
    printf("ROOOOOOOOOOOOOT ACCESSSSSSSSSSSSSSSSS\n");
   }
   return 0;
}
