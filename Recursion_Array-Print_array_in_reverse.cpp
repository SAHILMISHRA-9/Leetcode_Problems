#include<iostream>
#include<vector>
using namespace std;

void helper(int i,vector<int> &v){
    if(i<0) return;
    cout<<v[i]<<" ";
    helper(i-1,v);

}

void print(vector<int> v){
    helper(v.size()-1,v);
}

int main() {
  print({1,2,3,4,5});
}