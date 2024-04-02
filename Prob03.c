#include<stdio.h>
int main(){
   int numberToCheck;
   scanf("%d",&numberToCheck);
if(numberToCheck>0){
    if(numberToCheck%2==0){
        printf("even");
    }else{
         printf("odd");
    }
}else{
      printf("Number is less then zero");
}
    return 0;
}