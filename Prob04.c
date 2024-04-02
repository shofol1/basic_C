#include<stdio.h>
int main(){
   int numberToCheck;
   scanf("%d",&numberToCheck);
if(numberToCheck>0){
    printf("positive");
}else if(numberToCheck==0){
      printf("Number is  zero");
}
else{
      printf("negative");
}
    return 0;
}