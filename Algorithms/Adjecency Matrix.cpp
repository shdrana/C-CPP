#include <bits/stdc++.h>
#include <stdio.h>
#define MAX 4
using namespace std;

int main(){
    int node,mat[MAX][MAX], i, j;
    cin>>node;

    for(i=0;i<node;i++){
        for(j= 0;j<node;j++){
            cin>>mat[i][j];
        }
    }

cout<<"Connected edge are below for directed graph: :)"<<endl<<endl;
    for(i=0;i<node;i++){
        for(j= 0;j<node;j++){
            if(mat[i][j]!=0)
               printf("%d-->%d\n",i+1,j+1);
        }
    }





return 0;

}
