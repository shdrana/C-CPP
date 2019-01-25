#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
    int firstMax, secondMax;

    int arr[] = {35, 38, 100, 40, 50, 60};

    if(arr[0]>arr[1])
    {
        firstMax = arr[0];
        secondMax = arr[1];
    }
    else
    {
        firstMax = arr[1];
        secondMax = arr[0];
    }

    for(int i = 0; i<6; i++)
    {
        if(arr[i]>firstMax)
        {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if(arr[i]>secondMax)
        {
            secondMax = arr[i];
        }

    }

    printf("%d + %d = %d\n", firstMax, secondMax, firstMax+secondMax);






    return 0;
}
