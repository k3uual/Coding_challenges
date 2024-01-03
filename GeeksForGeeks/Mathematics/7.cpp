using namespace std;
#include<iostream>

class Solution {
  public:
    int isDigitSumPalindrome(int N) {
        int temp=N,sum=0;
        while(temp>0){
            sum+=(temp%10);
            temp/=10;
        }
        N=sum;
        while(sum>9){
            temp=((sum%10)+temp)*10;
            sum/=10;
        }
        temp+=sum;
        if(temp==N)
            return 1;
        return 0;
    }
};

int main(){
    Solution s;
    cout<<s.isDigitSumPalindrome(54);
}