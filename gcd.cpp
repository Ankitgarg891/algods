#include <iostream>
using namespace std;


int gcd(int a,int b)
{
	return(b==0?a:gcd(b,a%b));

/*
	int r;
	while (true)
	{
		int div=a/b;
		int r=a%b;
		if (r==0)
		{

			return b;
		}
		else
		{
			a=b;
			b=r;
		}


	}*/

}

int main()
{
	cout<<gcd(12,18);
	return 0;
}