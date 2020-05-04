#include<iostream>
#include<string>
#include<map>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
         map<char , int >m;
         for(char c: magazine) m[c]++;
         for (char c: ransomNote){
             if(m[c]){
                 m[c]--;
             }
             else return false;
         }        
         return true;
    }
};

int main(){
    Solution s;
    bool res=s.canConstruct("aa","aab");
    cout<<res<<endl;
    return 0;
}
