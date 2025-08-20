/*/  que 6
#include <stdio.h>
int main ()
{
    int a;
    for(a=10;a>=1;a--){
        printf("\n%d",a);
    }
        return 0;

}
        */

        /*/

       #include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
     int b;
    scanf("%d", &b);

    char c;
    printf("enter what you want +,-,%,*,/");
    scanf(" %c", &c);

    switch (c)
    {
    case '+': printf("%d",a+b);
    break;   
    case '-' : printf("%d", a-b);
    break;
    case '%' : printf("%d", a%b);
    break;
    case '*' : printf("%d", a*b);
    break;
     case '/' : printf("%d", a/b);
    }
    return 0;
}
    */

#include <stdio.h>
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d is second largest", 
        (a > b ? (b > c ? (a > c ? (d > b ? (d < a ? d : b) : b) : (d > c ? (d < a ? d : c) : c))) 
               : (a > c ? (c > b ? (d > a ? (d < c ? d : a) : a) : (d > b ? (d < c ? d : b) : b))) 
                        : (b > c ? (c > a ? (d > b ? (d < c ? d : b) : b) : (d > a ? (d < c ? d : a) : a)) 
                                 : (a > b ? (d > c ? (d < a ? d : c) : c) : (d > b ? (d < a ? d : b) : b)))));
    return 0;
}
