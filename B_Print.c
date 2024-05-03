#include <stdio.h>
void myLoop(int n){
    for(int i=1;i<n;i++){
printf("%d ",i);

    }
    printf("%d",n);
}
int main()
{
    int n;
    scanf("%d",&n);
    myLoop(n);
 return 0;
}
