#include<iostream>
using namespace std;

 int main()
{
	int i,j,r,c;
	
	cout<<"enter row size"<<endl;
	cin>>r;
	cout<<"enter Column size"<<endl;
	cin>>c;
	int a[r][c];
	
	cout<<"\nEnter Array Element :\n"<<endl;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<input row & Column<<endl;
			cin>>a[i][j];
		}
		cout<<"\n"<<endl;
	}
	
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			if(i==0 || j==0 || i==r-1 || j==c-1)
//			{
//				("",a[i][j]);
//			}
//		
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
}
