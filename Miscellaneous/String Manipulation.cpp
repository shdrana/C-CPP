#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int stringlength(char str[])
{
    int count = 0;
    for(int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }

    return count;
}

void stringCopy(char str1[], char str2[])
{
    for(int i = 0; i<stringlength(str1); i++)
    {
        str2[i] = str1[i];
    }
}

void stringReverse(char str1[], char str2[])
{
    int j = 0, i;

    for( i = stringlength(str1)-1; i>=0; i--)
    {

        str2[j++] = str1[i];

    }

    str2[i] = '\0';

}

int stringCompare(char str1[], char str2[])
{
    int i, j;

    for(i = 0; str1[i]!= '\0' && str2[i]!= '\0'; i++)
    {
        if(str1[i]>str2[i])
            return 1;
        if(str1[i]<str2[i])
            return -1;
    }

    if(stringlength(str1) == stringlength(str2))
        return 0;

    if(stringlength(str1)>stringlength(str2))
        return 1;

    if(stringlength(str1)<stringlength(str2))
        return -1;


}



int main()
{
    char data[30];
    char str2[30];

    gets(data);

    gets(str2);

    cout<<stringCompare(data, str2);



    return 0;
}
