#include<iostream>
#include<string>
#include<map>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        map<char , int >m;
        for (int i=0;i<s.length();i++){
            m[s[i]]++;
        }
        int flag=0;
        for (int i=0;i<s.length();i++){
            //cout<<m[s[i]]<<endl;
            if(m[s[i]]==1)
            {  
                return i;
            }
        }
        return -1;
    }
};
int main(){
    Solution s;
    int res=s.firstUniqChar("leetcode");
    cout<<res<<endl;
    return 0;
}
