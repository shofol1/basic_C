#include <stdio.h>
void play(int *p){
    *p=200;
  printf("Address in play %p\n",p);
  printf("Value of x in play %d\n",*p);

}
int main()
{
    int x=10;
printf("Addres of x in main %p\n",&x);
    play(&x);
printf("Addres of x in main %d\n",x);

    
 return 0;
}
