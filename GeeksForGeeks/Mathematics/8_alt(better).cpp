using namespace std;
#include<iostream>

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int rev=0;
		    
		    while(n!=0)
		    {
		        int digit = n%10;
		        rev=(rev*10)+digit;
		        n/=10;
		    }
		    
		    return rev;
		}
};

int main(){
    Solution s;
    cout<<s.reverse_digit(460100406171279);
}