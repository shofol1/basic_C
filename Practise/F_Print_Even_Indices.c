#include <stdio.h>
void evenIndicate(int * ar,int n,int i){
if(i<0) return;
printf(" ");
if(i%2==0){
    printf("%d",ar[i]);
}
evenIndicate(ar,n,i-1);
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&ar[i]);
    }
    evenIndicate(ar,n,n-1);
 return 0;
}
