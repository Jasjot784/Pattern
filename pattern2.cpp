#include<iostream>
using namespace std;
int main()
{
  int count = 1;
  for(int i=1;i<8;i++)
  {
    if((i%2)==1)
    {
      for(int j=1;j<8;j++)
      {
        if((j%2)==1)
        cout<<"+";
        if((j%2)==0)
        cout<<"-";
      }
      cout<<endl;
    }
    if((i%2)==0)
    {
      for(int j=1;j<8;j++)
      {
        if((j%2)==1)
        cout<<"|";
        if((j%2)==0)
        cout<<count++;
      }
      cout<<endl;
    }
  }
}
