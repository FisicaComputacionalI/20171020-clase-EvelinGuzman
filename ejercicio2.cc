#include <iostream>
using namespace std;

int main()
{
  int sum=0;
  int count=1;
  while (count<21){
    if ((count%2)==0)
      {
	sum=sum+count;
      }
    count++;
  }
  cout<<"suma"<<sum<<endl;
  return 0;
}
 
//suma da 110
