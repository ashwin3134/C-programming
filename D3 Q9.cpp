#include <stdio.h>
int isPerfect(int num);         
int main()
{
    int start, end, i;
    printf("Enter the starting and ending numbers of the range: ");
    scanf("%d %d", &start, &end);
    printf("Perfect numbers between %d and %d are: ", start, end);
    for (i = start; i <= end; ++i) {
        if (isPerfect(i))
            printf("%d ", i);
    }
    return 0;
}
int isPerfect(int num)
{
    int i, sum = 0;
    for (i = 1; i <= num/2; ++i) {
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        return 1;
    else
        return 0;
}
