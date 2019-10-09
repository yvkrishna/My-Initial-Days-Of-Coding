// https://codeforces.com/contest/205/problem/A

#include <stdio.h>
 
int main()
{
    long long int i, n, time, min_time, min_index, count;
    scanf("%I64d", &n);
    for (i = 1; i <= n; ++i)
    {
        scanf("%I64d", &time);
        if (time < min_time)
        {
            min_time = time;
            min_index = i;
            count = 1;
        }
        else if (time == min_time)
        {
            count += 1;
        }
    }
    if (count == 1)
    {
        printf("%I64d\n", min_index);
    }
    else
    {
        printf("Still Rozdil\n");
    }
    return 0;
}
