#include<iostream>

using namespace std;

class Fibonacci{
public:
  int a,b,c;
  void genrate(int);
};

void Fibonacci::genrate(int n){
  a = 0,b = 1;
  cout<<a<<" "<<b;
  for(int i = 1;i<=n-2;i++){
    c = a + b;
    cout<<" "<<c;
    a = b;
    b = c;
  }
}


int main(){

  int n;
  cin>>n;
  Fibonacci fibonacci;
  fibonacci.genrate(n)x;
  
  return 0;
}
