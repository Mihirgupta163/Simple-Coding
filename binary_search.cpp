#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {12,25,34,45,56,67,78,89};
    int n = sizeof(arr)/sizeof(int);
    auto x = binary_search(arr,arr+n,89);
    if(x){
        cout<< "find";
    }
    else{
        cout<<"dont find";
    }
    return 0;
}