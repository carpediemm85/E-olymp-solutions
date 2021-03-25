#include <stdio.h>

int main()
{
    long long num;
    int count = 0;

    scanf("%lld", &num);
    if(0<=num)
    do
    {
        count++;

        num /= 10;
    }
    
    while(num != 0);

    printf("%d", count);

    return 0;
}