#include <cmath>
#include <iostream>
using namespace std;

int gauß(int n){
	return (n*(n+1))/2;

}

int main(){
	int n = 999;
	int a = floor(n/3);
	int b = floor(n/5);
	int c = floor(n/15);
	cout << 3*gauß(a) + 5*gauß(b) - 15*gauß(c); 
}
