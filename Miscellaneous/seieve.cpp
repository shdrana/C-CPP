#include <bits/stdc++.h>
#define MAX 100

using namespace std;

int main(){
    bool prime[MAX];
    int limit = sqrt(MAX);

    for(int i = 2;i<=MAX;i++){
        prime[i] = true;
    }

    for(int i = 4; i<=MAX;i+= 2){
        prime[i] = false;
    }


    for(int i = 3;i<=sqrt(MAX);i+= 2){
        if(prime[i]){
            for(int j = i*i;j<=MAX;j+= i){
                prime[j] = false;
            }
        }
    }
    for(int i = 2;i<=MAX;i++){
        if(prime[i] == true)
            cout<<i<<" ";
    }




return 0;
}
