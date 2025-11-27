#include<iostream>
#include<vector>
using namespace std;

bool helper(vector<int> v,int i, int target){
    if(i==v.size()) return false;
    if(v[i]==target){
        return true;
    }
    return helper(v,i+1,target);
    
}
int search(vector<int> v,int target){
    return helper(v,0,target);
}

int main(){
    cout<<search({1,2,3,4,5},7);
}
