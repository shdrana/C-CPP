#include <stdio.h>
#include <iostream>

using namespace std;

/**
    Dynamic Array in CPP
    @author Sohid Ullah
    @since 2019-04-09
**/
int main()
{
    /**
        Declaring 1D dynamic array array
        __________________________________
    **/

    int *ptr = new int[5];
    ptr[0] = 10;
    // cout<<ptr[0];

    /**
       Declaring 2D dynamic array array
       ______________________________________
    **/

    #define ROW 5
    #define COL 5

    int** a = new int*[ROW];
    /**It will create 5 integer pointer. a will get the address of first pointer .It is actually 5 Row
    **/

    for(int i = 0; i < 5; ++i)
        a[i] = new int[COL]; /**Every row is getting 5 column. The row is getting address of first column**/

    a[0][1] = 598;

    cout<<a[0][1]<<endl;

    return 0;
}
