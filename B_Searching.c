#include <stdio.h>
int main()
{
 int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   int s;
    scanf("%lld",&s);
 int ans=-1;
    for(int i=0;i<n;i++){
           if(arr[i]==s){
           ans=i;
           break;
           }
        
    }
    printf("%d",ans);

 return 0;
}