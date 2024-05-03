#include <stdio.h>
void minMax(int  arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);


    }
  

}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    minMax(arr,n);

 return 0;
}
