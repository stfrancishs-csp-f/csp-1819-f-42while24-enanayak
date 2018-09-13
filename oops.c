
#include <stdio.h>
int main(void)
{
    int sum=0;
    int k;

    while (k<5)
    {
        sum+=k; //use something different in "while" version
    }

    printf ("%d\n",sum);

    k=5;

    for (k=0;k<5;k++) {
        k=k-1; //use something different in "for" version
        printf ("%d\n", k);
    }

}
