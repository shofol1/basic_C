#include <stdio.h>
int main()
{
    int ar[5]={10,20,30,40,50};
    // printf("address %p\n",&ar[0]);
    // printf("address %p\n",ar);
    // printf("address %d\n",ar[0]);
    // printf("address %d\n",* ar);
    printf("address %p\n", &ar[1]);
    printf("address %p\n", (ar+1));
 return 0;
}
