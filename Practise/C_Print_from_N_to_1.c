#include <stdio.h>
void numberPrint(int n){
if(n==1) return;
    printf(" ");
printf("%d",n-1);
numberPrint(n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",n);
    numberPrint(n);
 return 0;
}
