#include<bits/stdc++.h>
using namespace std;
int main()
{

	vector<int> number;
	int n;
	int l;
	cin>>l;
	while(l--){
        cin>>n;
        number.push_back(n);
	}

	sort(number.begin(),number.end());

	cout<<number[0]+number[1]<<endl;
	return 0;
}


