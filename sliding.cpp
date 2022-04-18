#include<iostream>
using namespace std;
int main()
{
int w,i,fr,frames[50];int abhi;
cout<<"Enter size of Window: ";
cin>>w;
cout<<"\nEnter total number of frames to transmit: ";
cin>>fr;
cout<<"\nEnter "<<fr<<" frames: \n";
for(i=1;i<=fr;i++)
cin>>frames[i];

for(int i=1;i<=fr;i=i+w)
{int m =i;
cout<<"\n";
	for(int j=1;j<=w;j++)
	{
		cout<<frames[m]<<"\t";
		m++;
	}
	cout<<"\nIS ACKNOWLEDGEMENT RECEIVED? ENTER 1 IF RECEIVED or ELSE 0\n";
	cin>>abhi;
	if(abhi == 1)
	cout<<"RECEIVED AND ACKNOWLEDGED\n";
	
	else
	{
		while(abhi==0)
		{int mm=i;
			for(int k=1;k<=w;k++)
	{
		cout<<frames[mm]<<"\t";
		mm++;
	}cout<<"IS ACKNOWLEDGEMENT RECEIVED???\n";cin>>abhi;
		}
	}
	
}}


