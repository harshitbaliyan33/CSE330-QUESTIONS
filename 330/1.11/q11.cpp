#include <stdio.h>
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
void Factors(int n){
	vector<int> v;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			v.push_back(i);
		}
	}
	int sum = 0;
	for(int i=0;i<v.size();i++){
		for(int j = i+1;j<v.size();j++){
			sum = sum + v[i] * v[j];
		}
	}
	cout << sum << endl;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		if(isPrime(n)){
			cout << n << endl;
		}else{
			Factors(n);
		}
	}
}

