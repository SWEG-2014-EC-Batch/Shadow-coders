#include<iostream>
using namespace std;
int main()
{
   cout<<"enter the numbers of rows";
   cin>>rows;
  int z;

  for (int i=0; i<rows; i++)
  {
    for (int j=rows; j>i; j--)
    {
      cout<<" "; 
    }
    cout<<"*";   
    if (i!=0)
    {
      for (int k=1; k<=z; k++)
      {
        cout<<" ";
      }
      cout<<"*";
      z+=2;
    }
    cout<<endl;  
  }

  for (int i=0; i<=z+1; i++)
  {
    cout<<"*";
  }

return 0;
}
