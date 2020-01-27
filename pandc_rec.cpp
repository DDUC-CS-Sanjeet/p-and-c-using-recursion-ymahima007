#include<iostream>
using namespace std;
int combination(int n, int r)
{
	if(r==0)
	return 1;
	else
	{
    	return (n*1.0)*combination(n-1,r-1)/r;
	}
}
int permutation(int n, int r)
{
	if (r==0)
	return 1;
	else
	{
		return (n*1.0)*permutation(n-1,r-1);
	}
}
int main()
{
	try
	{
		int n=0,r=0;
		cout<<"ENTER VALUES OF n AND r IN nCr AND nPr:";
		cin>>n>>r;
		if(n<0||r<0)
		throw 0; //exception handling
	    else if(n<r)
		throw 0.0;//exception handling 
		else 
		{
			int p=permutation(n,r);
			cout<<"\n PERMUTATION ,nPr:"<<p;
			int c=combination(n,r);
			cout<<"\n COMBINATION, nCr"<<c;
		}
	}
		catch (int exp)
		{
			cout<<"\n INVALID INPUT!,n AND r SHOULD BE POSITIVE FOR OPERATIONS";
		}
		catch (double exp)
		{
			cout<<"\n INVALID INPUT!,n CANNOT BE LESS THAN r";
		}
  return 0;
}
