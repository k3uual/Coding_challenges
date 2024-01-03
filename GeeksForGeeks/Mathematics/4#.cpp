using namespace std;
#include<iostream>

class Solution {
  public:
    long power (int r, int n) {
	    if (n == 0)
	        return 1;
	    if (n % 2 == 0) {
	        long ans = power(r, n/2) % 1000000007;
	        return (ans * ans)  % 1000000007;
	    } else if (n % 2 == 1) {
	        return (r * (power(r, n-1) % 1000000007)) % 1000000007;
	    }
	}
   	int Nth_term(int a, int r, int n){
   	    // Code here
   	    return (a * power(r, n-1)) % 1000000007;
   	}
};

int main(){
    Solution s;
    cout<<s.Nth_term(9,6,12);
}