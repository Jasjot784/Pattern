#include<iostream>
using namespace std;
int main()
{
  int a;
  int j;
  cout<<"Enter an integer"<<endl;
  cin>>a;
  if(a<6)
  {
    for(int i=1;i<=a;i++)
    {j=i;
      while(j>0)
      {
        cout<<i;
        j--;
      }
      cout<<endl;
    }
  }
  if(a>5&&a<11)
  {
    for(int i=1;i<=a;i++)
    {j=i;
      while(j>0)
      {
        cout<<"*";
        j--;
      }
      cout<<endl;
    }
  }
  if(a>10)
  {
    for(int i=1;i<=10;i++)
    {
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
  }
}
