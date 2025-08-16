
/*/
#include <stdio.h>

int main()
{

    int a;
    printf("enter number 1\n");
    scanf("%d",&a);

    int b;
    printf("enter number b\n");
    scanf("%d",&b);

    int c;
    printf("enter number c\n");
    scanf("%d",&c);

    int d=a*b*c;
    printf("%d",d);

    if(d%6==0 && d%9==0){
        printf("\nspecial");
    }
    else{
        printf("\nnormal");
    }



    return 0;
}
    */


    /*/

#include <stdio.h>
int main()
{
    float a;
    printf("enter your value\n");
    scanf("%f", &a);

    if (a < 7)
    {
        printf("Acidic");
    }
    else if (a == 7)
    {
        printf("Normal");
    }
    else if (a > 7 && a < 10)
    {
        printf("Basic");
    }
    else
    {
        printf("Strongly Basic");
    }
    return 0;
}
    */

    /*/

    #include <stdio.h>
    int main ()
    {
        int a;
        printf("enter your four integers\n");
        scanf("%d",&a);

        int b;
        scanf("%d",&b);

        int c;
        scanf("%d",&c);

        int d;
        scanf("%d",&d);

        if( a>b && a>c || b>a && b>c || c>a && c>b || d>a && d>b) {
            printf(" %d is second largest among this numbers");
        }
        return 0;
    }
        */

        /*/
    #include <stdio.h>
    int main ()
    {
      int a;
      printf("enter marks of test 1 from 100 marks");
      scanf("%d",&a);

      int b;
      printf("enter marks of test 2 from 100 marks");
      scanf("%d",&b);

      int c;
      printf("enter marks of test 3from 100 marks");
      

    }*/
/*/

#include <stdio.h>
int main()
{
    int a;
    for(a=0; a<=100000000; a++) {
        printf("\nKRISHNA IS THIBDI");
    }
    return 0;
}
*/

#include <stdio.h>

int main()
{
   int n;
   printf("enter your number ");
   scanf("%d",&n);
   int a=5;

   for(int i=1;i<=n;i++){
    a=a+5;
    printf("\n%d",a);

   }


   
    return 0;
}


