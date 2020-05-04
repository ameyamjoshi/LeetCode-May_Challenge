#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<math.h>
using namespace std;
class Solution {
public:
    int findComplement(int num) {
        vector<int> bin;
        while(num!=0){
            int rem=num%2;
            if(rem==1)
            bin.insert(bin.begin(),0);
            else 
            bin.insert(bin.begin(),1);
            num/=2;
        }
        int res=0;
        for (int i=0;i<bin.size();i++){
            res+=pow(2,bin.size()-1-i)*bin[i];
        }
        return res;
        


    }
};

int main(){
    Solution s;
    int res=s.findComplement(5);
    cout<<res<<endl;
    return 0;
}

