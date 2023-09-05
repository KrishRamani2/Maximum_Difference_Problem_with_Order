#include <iostream>
#include <cmath>
using namespace std;
int maxDiff(int arr[], int n)
{
	int res = arr[1]-arr[0],minVal=arr[0];
		for(int j=1;j<n;j++)
		{
			res=max(res,arr[j]-minVal);
			minVal=min(minVal,arr[j]);
		}
	
	return res;
}
int main() 
{
    int arr[] = {10,20,45,45,80,6,6},n =7;
	cout<<maxDiff(arr,n);
}