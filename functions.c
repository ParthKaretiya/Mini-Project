
int factorial(int num){
    int fact_num1=1;
    for (int i = 1; i<= num; i++){
        fact_num1=i*fact_num1;
    }
return fact_num1;
}



#include <stdio.h>
int main ()

{
    int num1 ,num2 ,num3, num4;
    num1= factorial(4);
    num2= factorial(6);
    num3= factorial(5);
    num4= factorial(6);

   printf("%d\n",num1);
   printf("%d\n",num2);
   printf("%d\n",num3);
   printf("%d\n",num4);
    return 0;
}
