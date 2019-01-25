#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};

    for(int i = 0; i<7; i++)
    {
        int leftSum = 0, rightSum = 0;
        for(int j = 0; j<=i-1; j++)
        {
            leftSum += arr[j];
        }

        for(int j = i+1; j<7; j++)
        {
            rightSum+= arr[j];
        }

        if(leftSum == rightSum)
        {
            printf("%d [%d] %d\n", leftSum, i, rightSum);

            break;
        }



    }







    return 0;
}
