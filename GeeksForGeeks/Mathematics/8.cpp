using namespace std;
#include<iostream>

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		    long long int temp=n,rev=0;
		    while(temp>0){
		        rev+=temp%10;
		        temp/=10;
		            if(temp>0)
		                rev*=10;
		    }
		    return rev;
        }
};

int main(){
    Solution s;
    cout<<s.reverse_digit(460100406171279);
}