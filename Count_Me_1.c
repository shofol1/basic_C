#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int countOne=0,countTwo=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
        countOne++;
        }else if(a[i]%2==0&&a[i]%3==0){
            countOne++;
        }else if(a[i]%3==0){
            countTwo++;
        }
    }
    printf("%d %d",countOne,countTwo);

 return 0;
}
