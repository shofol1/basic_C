#include <stdio.h>
int count_before_one(){
    int n;
scanf("%d",&n);
int ar[n];
for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(ar[i]!=1){
        count++;
        }else{
            break;
        }
    }
    return count;
}
int main()
{

printf("%d",count_before_one());
return 0;
}
