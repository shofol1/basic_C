#include <stdio.h>
int main()
{
   long long int num;
    scanf("%lld\n",&num);
    long long int arr[num];
    long long int sum=0;
    for (int i=0;i<num;i++){
        scanf("%lld",&arr[i]);
    }
    for (int i=0;i<num;i++){
        sum=sum+arr[i];
        
    }
    if(sum>=0){

    printf("%lld",sum);
    }else{
 printf("%lld",sum*-1);
    }
 return 0;
}
