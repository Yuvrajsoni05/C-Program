#include <stdio.h>

using namespace std;
int main() {
    int a,b;

    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("You entered: %d and %d", a, b);

    int x = 0;
    if (x == x)
        printf("this is if");
    else {

        printf("this is else");

    }

    int z = 0, q = 0; // post increment in post increment first original value print when use z++ = 0
    if (z++ == q++)
        printf("%d %d",z-- , q--);
    else
        printf("%d %d",z,q);
    // post increment
    // use first, increase later
    int f = 5;
    // now x became 6
    printf("%d\n", f++);
    printf("%d", f);



    int d = 0,j = 1 , k = 0;
    if (++k,j,d++)
        printf("%d %d %d",d,j,k);

    int v;
    if (true)
        printf("this will work");
    else
        printf("this will not work");
    return 0;

}