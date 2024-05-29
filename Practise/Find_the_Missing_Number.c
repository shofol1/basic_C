#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
   for(int i=0;i<t;i++){
   long long int ar[4];
   for(int i=0;i<4;i++){
    scanf("%lld ",&ar[i]);
   }
   long long int M=ar[0],Mul=1,mis;
   for(int i=1;i<4;i++){
   if(i>0){
      Mul*=ar[i];
 }
   }

   mis=M/Mul;
   if((mis*Mul)==M){

   printf("%lld\n",mis);
   }else if(M=0){
  printf("%d\n",0);
   }
   else{
     printf("%d\n",-1);
   }
   }
 return 0;
}
