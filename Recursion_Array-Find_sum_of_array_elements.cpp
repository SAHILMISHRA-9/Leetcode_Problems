#include<iostream>
#include<vector>
using namespace std;

int helper(int i,vector<int> &v){
    if(i==v.size()){
        return 0;
    }
    int add=v[i]+helper(i+1,v);
    return add;
}

int sum(vector<int> v){
    return helper(0,v);
}
int main() {
    cout<<sum({1,2,3,4,5});
}