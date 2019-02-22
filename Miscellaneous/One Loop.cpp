#include <stdio.h>
#include <iostream>

using namespace std;


int main()
{
    int dir = 1;
    for(int i=1; i>0; i+=dir)
    {
        if(i == 10)
            dir = -1;
        printf("%d", i);
    }


    return 0;
}
