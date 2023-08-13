# include<iostream>
using namespace std;
bool prime_or_not(int number)
{
	for(int i=2;i<number;i++)
	{
		if(number%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main ()
{	int sp,lp;
	cout<<"Enter the Starting and last point: ";
	cin>>sp>>lp;
	for (int i=sp;i<=lp;i++)
	{
		if(prime_or_not(i))
		{
			cout<<i<<ends;
		}
	}
	return 0;
}
