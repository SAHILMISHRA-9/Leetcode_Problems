#include<iostream>
#include<vector>
using namespace std;


bool helper(vector<int> v,int i){
    if(i>=v.size()-1) return true;
    if(v[i]>v[i+1]) return false;
    else{
        return helper(v,i+1);
    }
    return true;
}
int Sort(vector<int> v){
   return helper(v,0);
}
int main(){
    cout<<Sort({1,2,3,4});
}