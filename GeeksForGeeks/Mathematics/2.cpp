using namespace std;
#include<iostream>
#include<vector>

class Solution
{
public:
    vector<int> getTable(int N)
    {
        std::vector<int> vec;
        for(int i=1;i<=10;i++){
            vec.push_back(i*N);
        }
        return(vec);
    }
};

int main(){
    Solution s;
    std::vector<int> out=s.getTable(9);
    for(int i=0;i<out.size();i++)
        cout<<out[i]<<" ";
}