#include<iostream>
#include<vector>
using namespace std;

int helper(int i,vector<int> &v){
      if(i==v.size()-1){
           return v[i];
      }
      int mini=helper(i+1,v);
      return min(mini,v[i]);
}

int minimum(vector<int> v){
      return helper(0,v);
}
int main() {
    cout<<minimum({1,2,3,4,5});
}