#include<iostream>
using namespace std;
sort_array(int size,int a[]){
	int i=0,j=size-1,k=0;
	while(i!=j){
		if(a[k]==0){
			a[i]=0;
			i++;
			k++;
		}
		else if(a[k]==1)
		{
			if(a[j]==1)
			{j--;
			}if(a[j]==0){
				a[i]=0;
				i++;
				a[j]=1;
				j--;
			}
			
		}
	}
}
main()

{
	int size,a[100],i;
	cin>>size;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	sort_array(size,a);
	i=0;
		for(i=0;i<size;i++)
	{
		cout<<a[i];
	}
}
