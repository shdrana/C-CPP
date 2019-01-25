#include <stdio.h>
#include <iostream>

using namespace std;

bool reverses(char names[], int start, int ends)
{
    if(start == ends)
    {
        return true;
    }

    if(names[start]!= names[ends])
    {
        return false;
    }
    if(start<ends+1)
        reverses(names, start+1, ends-1);
}

int main()
{
    char name[100];
    gets(name);
    cout<<reverses(name, 0, 4);

    return 0;
}
