using namespace std;
#include<iostream>

class Solution {
  public:
    int nthTermOfAP(int A1, int A2, int N) {
        int step=A2-A1;
        for(int i=1;i<N;i++){
            A1=A1+step;
        }
        return(A1);
    }
};

int main(){
    Solution s;
    cout<<s.nthTermOfAP(1,4,10);
}