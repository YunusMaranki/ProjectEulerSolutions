#include <iostream>
using namespace std;

bool isPalindrome(int number){
	int len = to_string(number).length();
	int digits[len];
	
	for (int i=len;i;i--){
		digits[i-1]= number % 10;
		number /= 10;
	}
	
	int l=0,r=len-1;
	while (l<r){
		if (digits[l]!=digits[r]){
			return false;
		}
		l++;
		r--;
	}

	return true;	
}

int main(){
	int palindrome=0;
	for (int i=999;i>=0;i--){
		for (int j=999;j>=0;j--){
			if (isPalindrome(i*j)){
				if(i*j>palindrome){
					palindrome = i*j;
				}
			}

		}
	}

	cout << palindrome;
}
