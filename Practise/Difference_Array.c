#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
       int n;
       scanf("%d",&n);
       int ar[n];
       int cr[n];
       int m=n;
       for(int j=0;j<n;j++){
        scanf("%d ",&ar[j]);
       }
       for(int j=0;j<n;j++){
        m--;
        cr[j]=ar[m];
       }
       for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
              
            if(cr[j]>cr[k]){
                int tmp=cr[j];
                cr[j]=cr[k];
                cr[k]=tmp;
            }
        }
       }
      for(int j=0;j<n;j++){
        printf("%d ",abs(ar[j]-cr[j]));
      }
       printf("\n");
    }
 return 0;
}
