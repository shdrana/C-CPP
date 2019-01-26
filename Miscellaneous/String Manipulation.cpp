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
    int length = stringlength(str1);

    for(int i = 0; i<length; i++)
    {
        str2[i] = str1[i];
    }
}

char* stringReverse(char str1[])
{
    //found problematic

    int j = 0, i;
    char str2[150];
    int length = stringlength(str1);

    for(i = length-1; i>=0; i--)
        str2[j++] = str1[i];

    str2[j] = '\0';

    return str2;

}

int stringCompare(char str1[], char str2[])
{
    int i;

    for(i = 0; str1[i]!= '\0' || str2[i]!= '\0'; i++)
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

char* stringConcat(char str1[], char str2[])
{
    int i = stringlength(str1);
    int j = 0;
    int length = stringlength(str2);

    while(j<length)
    {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';

    return str1;
}



int main()
{
    char data[30];
    char str2[30];

    gets(data);
    gets(str2);
    cout<<stringConcat(data, str2);

    return 0;
}
