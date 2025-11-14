#include<iostream>
#include<vector>
using namespace std;


int helper(int i,vector<int> &v){
     if(i==v.size()-1){
         return v[i];
     }
    int maxi=helper(i+1,v);
    return max(v[i],maxi);

}
int maximum(vector<int> v){
    return helper(0,v);
}

int main() {
    cout<<maximum({1,2,3,4,5});
}