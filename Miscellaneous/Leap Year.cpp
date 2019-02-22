#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
    //The number which is dividable by 4 and not dividable by 100 is a leap year
    //The number which is dividable by 400 is a leap year
    int year = 2020;
    if((year%4 == 0 && year%100!= 0) || year%400 == 0)
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");

        return 0;
}
