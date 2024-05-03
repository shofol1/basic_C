#include <stdio.h>
void odd_even(){
    int n,countEven=0,countOdd=0;
scanf("%d",&n);
int ar[n];
for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
for(int i=0;i<n;i++){
    if(ar[i]%2==0){
  countEven++;
    }else{
        countOdd++;
    }
}
printf("%d %d",countEven,countOdd);
}
int main()
{
odd_even();

return 0;
}
