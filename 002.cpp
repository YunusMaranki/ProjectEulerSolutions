#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int a=1,b=2,c;
	int sum=0;
	
	while(b<4*pow(10,6)){
		if (!(b&1)) {
    			sum += b;
		}
		c=a;
		a=b;
		b=c+a;
	}
	
	cout << sum;

}
