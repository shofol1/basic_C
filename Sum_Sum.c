#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int negS=0,posS=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
       if(arr[i]>0){
       posS+=arr[i];
       }else{
negS+=arr[i];
       }
    }
     
printf("%d %d",posS,negS);

    
 return 0;
}
