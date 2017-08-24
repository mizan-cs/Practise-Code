#include<bits/stdc++.h>

using namespace std;
int main()
{

	int n, i, arr[50], values, first, last, middle;
	cout<<"Enter total number of elements :";
	cin>>n;
	cout<<"Enter "<<n<<" number :";
	for (i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter a number to find :";
	cin>>values;
	first = 0;
	last = n-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr[middle] < values)
		{
			first = middle + 1;

		}
		else if(arr[middle] == values)
		{
			cout<<values<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}

	if(first > last)
	{
		cout<<"Not found! "<<values<<" is not present in the list.";
	}
	return 0;
}
