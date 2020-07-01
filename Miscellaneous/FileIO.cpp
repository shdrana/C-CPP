#include <stdio.h>
#include <iostream>
#include <string.h>
#define MAX 1000

void bubbleSort(int arr[], int number[], int length)
{
    int i, j;
    for(i = 0; i<length-1; i++)
    {
        for(j = 0; j<length-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp1 = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp1;

                int temp2 = number[j];
                number[j] = number[j+1];
                number[j+1] = temp2;
            }
        }
    }
}
int checkDuplicatePoints(int points[], int length)
{
    int i;
    int val = points[0];
    int recurrance = 1;

    for(i = 1; i<length; i++)
    {
        if(val== points[i]){
            recurrance++;
        }
        else
            return recurrance;
    }
}
char findLexicographicallySmallName(char restaurantName[100][100], int restaurantNumber[], int recurrance)
{
    int i;
    char smallStr[100][100] = {"zzzzzzzzzz"};
    for(i = 0; i<recurrance; i++)
    {
        int data = strcmp(smallStr[0], restaurantName[i]);
        if(data>0){
                strcpy(smallStr[0], restaurantName[i]);
        }
    }
    return smallStr;
    //printf("%s\n", smallStr);
}


using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

    int points[MAX], N, M, i, T, k, j;
    char restauranNameList[100][100];
    int restaurantNumber[100];
    cin>>N;
    getchar();
    for(j = 0; j<N; j++)
    {
        scanf("%s", restauranNameList[j]);
        cin>>points[j];
        restaurantNumber[j] = j;
    }

    bubbleSort(points, restaurantNumber, N);
    int recurrance = checkDuplicatePoints(points, N);
    //printf("\nrecr: %d\n", recurrance);
    if(recurrance>1)
    {
            cout<<findLexicographicallySmallName(restauranNameList, restaurantNumber, recurrance);
    }
    else{
        printf("%s", restauranNameList[restaurantNumber[0]]);
    }

    return 0;
}



