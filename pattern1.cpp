#include<iostream>
using namespace std;
int main()
{
  char alpha = 'A';
  int count = 1;
    for(char j='A';j<='Z';j++){
      for (int i = 0; i < count; i++) {
      cout<<j;
    }
    cout<<endl;
    count++;
  }

}
