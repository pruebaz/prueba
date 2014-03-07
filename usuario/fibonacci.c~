#include "servicios.h"

#define MAX_FIBO 30 /* ponga las que considere oportuno */
 
int fibonacci(int n){
    if (n<2)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
      int i,res;
      
      for(i=0;i<=MAX_FIBO-1;i++)
      {
        res = fibonacci(i);
        printf("fibonacci: %i \n", res);
      }
      
      printf("fibonacci: termina\n");
      return 0;
}