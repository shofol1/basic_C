#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
   
   for(int i=0;i<t;i++){
      int n;
     scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
    scanf("%d ",&a[i]);
   }
   int tn;
   scanf("%d",&tn);
int found = 0;
   for(int j=0;j<n;j++){
    if(a[j]==tn){
     found=1;
     break;
    }
   }
   if(found==1){
    printf("YES\n");
   }else{
     printf("NO\n");
   }
   }
   
 return 0;
}
