#include <stdio.h>
void numberPrint(int n,int i){
if(i>n) return;
printf("%d\n",i);
numberPrint(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    numberPrint(n,1);
 return 0;
}
