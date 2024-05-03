#include <stdio.h>
void play(int * ar,int n){
   for(int i=0;i<n;i++){
    printf("%d ",ar[i]);
   }
}
int main()
{
    int ar[5]={10,20,30,40,50};
 play(ar,5);
 return 0;
}
