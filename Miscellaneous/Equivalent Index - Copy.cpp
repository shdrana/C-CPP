#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};

    int sum = 0, leftSum = 0;
    for(int i = 0; i<7; i++)
    {
        sum+= arr[i];

    }

    for(int i = 0; i<7; i++)
    {
        sum-= arr[i];

        printf("%d %d\n", leftSum, sum);

        leftSum+= arr[i];
    }

    return 0;
}
