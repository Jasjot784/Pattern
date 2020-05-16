#include<iostream>
using namespace std;
int main(){
  int r,sp,c;
  for(r=1;r<=6;r++){
    for(sp = 5;sp>=r;sp--){
      cout<<" ";
    }
    for(c=1;c<=(2*r-1);c++){
      cout<<"*";
    }
    cout<<endl;
  }
}
