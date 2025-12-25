#include <iostream>
using namespace std;
class Soln{
	public:
		int sumofseries(int n){
			if(n==0) return 0;
			
			return sumofseries(n-1) + (n*n*n);
		}
};
int main(){
	int k;
	cout<<"Enter the no. till sum of series is to be printed: ";
	cin >> k;
	
	Soln obj; //making obj of class
	
	cout<<"Sum of your series: "<<obj.sumofseries(k)<<endl;
	
	return 0;
}
