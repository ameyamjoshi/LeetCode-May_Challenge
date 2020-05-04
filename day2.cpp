#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int n1=J.length();
        int n2=S.length();
        int cnt=0;
        for (int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(J[i]==S[j]){
                    cnt++;
                }
            }
        }
    return cnt;
    }

};

int main(){
    Solution s;
    int res=s.numJewelsInStones("aA","aAAbbbb");
    cout<<res<<endl;
    return 0;
}
