#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int stringSize(string str)
{
    return str.size();
}

int getMaxSize(string str)
{
    return str.max_size();
}

string stringConcat(string str1, string str2)
{
    return str1+str2;
}

int stringCompare(string str1, string str2)
{
    return str1.compare(str2);
}

string stringReverse(string str1)
{
    reverse(str1.begin(), str1.end()); //algorithm library
    return str1;
}

char charAt(string str, int i)
{
    return str[i];

}




int main()
{
    string myStr = "Hello World";
    string mystr2 = "jsajfgjgf";

    //getline(cin, myStr); //user input

    //cout<<myStr.capacity();

    // cout<< stringReverse(myStr);

    //myStr.swap(mystr2);

    cout<<charAt(myStr, 1)<<endl;


    return 0;
}
