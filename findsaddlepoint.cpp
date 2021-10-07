#include <bits/stdc++.h>
using namespace std;

bool findSaddlePoint(int a[100][100], int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = a[i][0], col_ind = 0;
		for (int j = 1; j < n; j++)
		{
			if (min > a[i][j])
			{
				min = a[i][j];
				col_ind = j;
			}
		}
		int k;
		for (k = 0; k < n; k++)

			if (min < a[k][col_ind])
				break;

		if (k == n)
		{
		cout << "Value of Saddle Point " << min;
		return true;
		}
	}

	return false;
}

int main()
{
	int a[100][100] ;
	int n ;
	cout<<"Enter the order of matrix"<<endl;
	cin>>n;
	cout<<"Enter the matrix :-"<<endl;
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cin>>a[i][j];
	    }
	}
	
	cout<<"Matrix is :-"<<endl;
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        cout<<a[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	if (findSaddlePoint(a, n) == false)
	cout << "No Saddle Point ";
	return 0;
}
