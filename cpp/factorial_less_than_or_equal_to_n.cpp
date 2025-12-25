#include <iostream>
#include <vector>
using namespace std;

vector<long long> factNos(long long n, long long fact = 1, int  i = 1){
	if(fact > n) return {};
	
	vector<long long> result = factNos(n, fact*(i+1), i+1);
	result.insert(result.begin(), fact);
	
	return result;
}

int main(){
	
	long long k;
	
	cout<<"Enter the number: ";
	cin>> k;
	
	vector<long long> result = factNos(k);
	
	for(long long i : result){
		cout<<i<<" ";
	}
	
	cout<<endl;
	
	
}
