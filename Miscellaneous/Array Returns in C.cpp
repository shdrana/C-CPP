#include <stdio.h>
#include <iostream>

using namespace std;

int *returnIntegerArray()
{
    //C does not allow to return the address of a local variable to outside of the function
    //So we need declare the array as static variable

    static int intArray[5];

    for(int i = 0; i<5;  i++)
    {
        intArray[i] = i;
    }

    return intArray;

}

char *returnCharacterArray()
{
    static char charArray[5];

    for(int i = 0; i<5;  i++)
    {
        charArray[i] = 65+i;  //65 is the ACII value of A
    }
    return charArray;
}

int main()
{
    int *I = returnIntegerArray();
    char *C = returnCharacterArray();

    cout<<"Showing Integer Array:";
    for(int i = 0; i<5; i++)
    {
        cout<<I[i]<<" " ;
    }
    cout<<endl;

    cout<<"Showing Character Array:";

    for(int i = 0; i<5; i++)
    {
        cout<<C[i]<<" " ;
    }

    return 0;
}
