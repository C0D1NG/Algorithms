#include<iostream>
using namespace std;


void TH(int n,char Source, char Aux,char Destiny)
{
	if(n==1)
	{
		cout<<"Move Disk "<<n<<" from "<<Source<<" to "<<Destiny<<endl;
		return;
	}

	TH(n-1,Source,Destiny,Aux);
	cout<<"Move Disk "<<n<<" from "<<Source<<" to "<<Destiny<<endl;
	TH(n-1,Aux,Source,Destiny);
}

//main program
int main()
{
	int n;

	cout<<"Enter no. of disks:";
	cin>>n;

	TH(n,'A','B','C');

	return 0;
}
