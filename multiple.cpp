#include <iostream>
using namespace std;
int main()
{
	int sum=0;
	int minus=3;
	for(int i=1; i<=20; i=i+1)
	{
		sum = sum+i;
		if(i%2 == 0)
		{
			sum = sum - minus;
		}
	}
	cout<<"The final answer comes out to be: "<<sum<<endl;
	return 0;
}