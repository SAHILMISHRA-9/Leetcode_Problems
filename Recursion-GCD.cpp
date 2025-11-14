#include<iostream>
using namespace std;

void GCD(int a,int b){
      if(b==0){
          cout<<a;
          return;
      }
      GCD(b,a%b);
}
int main() {
    GCD(12,18);
}