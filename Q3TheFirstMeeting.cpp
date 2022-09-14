#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
	if(n<2){
		return false;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	int mini = INT_MAX;
	int maxi = INT_MIN; 
	for(int i=0;i<n;i++){
		if(isPrime(arr[i])){
			if(arr[i] < mini){
				mini = arr[i];
			}
			if(arr[i] > maxi){
				maxi = arr[i];
			}
		}
	}
	if(mini == INT_MAX && maxi == INT_MIN){
		cout << -1;
	}
	else{
	
	cout << maxi - mini;
	 
	}
	return 0;
}
