#include <iostream>
using namespace std;

int main()
{

	int n;
	cin>>n;
	int ans=0;
	cout<<n<<" in binary is:";

	int p=1;
	while (n!=1)
	{

		ans=ans+(n%2)*p;
		n=n/2;
		p=p*10;
	}
	ans=ans+(n%2)*p;
		n=n/2;
		p=p*10;
	cout<<ans<<"\n";
	return 0;
}