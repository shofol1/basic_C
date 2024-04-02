#include<stdio.h>
int main(){
   int moneyInHand;
   scanf("%d",&moneyInHand);
if(moneyInHand>0){
   if(moneyInHand==(int)20000){
    printf("Gucci Bag");
   }else if(moneyInHand==(int)6500){
    printf("Levis Bag");
   }if(moneyInHand==(int)200){
    printf("Something");
   }else if(moneyInHand==(int)25400){
    printf("Gucci Bag\nGucci Belt");
   }
}
else{
      printf("Enter a valid input");
}
    return 0;
}