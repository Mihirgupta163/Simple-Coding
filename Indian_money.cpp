#include <iostream>
#include <algorithm>
using namespace std;
bool comp(int a, int b){
    return a<=b;
}
int main() {
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int n = sizeof(coins)/sizeof(int);
    int money = 10000;
        while(money>0){
            auto lb = lower_bound(coins,coins+n,money,comp) - coins - 1;
            cout<<coins[lb]<<endl;
            money -= coins[lb];
        }
    return 0;
}
