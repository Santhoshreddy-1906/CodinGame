#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    int i;
    int sum;
    scanf("%d", &n);

    i = 0;
    sum = 0;
    int l1[n], l2[n];
    while(i < n)
    {
        scanf("%d", &l1[i]);
        i++;
    }

    i = 0;
    while(i < n)
    {
        scanf("%d", &l2[i]);
        i++;
    }

    i = 0;
    while(i < n)
    {
        sum += pow(l1[i], l2[i]);
        i++;
    }

    printf("%d\n", sum);

    retur
