#include <stdio.h>
void fun(int n, int a, int b, int c, int i, long long sum)
{
    if (n == 1)
    {
        printf("%d\n", a);
        return;
    }
    else if (n == 2)
    {
        printf("%d\n", b);
        return;
    }
    else if (n == 3)
    {
        printf("%d\n", c);
        return;
    }
    if (i == n)
    {
        printf("%lld\n", sum);
        return;
    }
    sum = a + b + c;
    a = b;
    b = c;
    c = sum;
    fun(n, a, b, c, i + 1, sum);
}
int main()
{
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    // printf("%d %d %d %d", n, a, b, c);
    fun(n, a, b, c, 3, 0);
    return 0;
}