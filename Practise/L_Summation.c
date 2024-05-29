#include <stdio.h>
void sumation(int * ar,int n,int i,int sum){

if(i==n) return ;
// printf("%d",sum+=ar[i]);
sum+=ar[i];
printf("%d ", sum);


sumation(ar,n,i+1,sum);
}
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&ar[i]);
    }
    sumation(ar,n,0,sum);
  
 return 0;
}
