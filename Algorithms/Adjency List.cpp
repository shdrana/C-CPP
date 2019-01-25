#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main(){
        int edge,node1, node2, i, j;
        vector <int> mat[10];

        cin>>edge;
        for(i= 0;i<edge;i++){
            cin>>node1>>node2;
            mat[node1].push_back(node2);
        }
//Adjacency list
        for(i= 0;i<edge;i++){
            int sze= mat[i].size();
            for(j= 0;j<sze;j++){
                printf("%d-->%d\n", i, mat[i][j]);
            }
        }

//Number of node
        for(i= 0;i<edge;i++)
            printf("%d's Total node: %d\n",i+1, mat[i+1].size());

//Number of out degree
        for(i= 0;i<edge;i++)
            printf("%d's Out degree node: %d\n",i+1, mat[i+1].size());




return 0;

}
