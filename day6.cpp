/*

Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.

Example 1:

Input: [3,2,3]
Output: 3
Example 2:

Input: [2,2,1,1,1,2,2]
Output: 2

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
            
            /*    
            THIS APPROACH GIVES CORRECT ANSWER BUT ALSO EXCEEDS THE TIME LIMIT.
            LEETCODE := 40 / 46 test cases passed.
            map<int,int>m;
            for(int i=0;i<nums.size();i++){
                m[nums[i]]++;
            }
            for(int i=0;i<m.size();i++){
                cout<<i<<" "<<m[i]<<endl;
                if(m[i]>(nums.size()/2)){
                    return i;
                }
            }
            
            */
       sort(nums.begin(),nums.end());
       /*
        for(int i=0;i<nums.size();i++){
            //cout<<nums[i]<<" ";
        }
        */
            return nums[nums.size()/2];


    }
};

int main(){
    Solution s;
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    int ans=s.majorityElement(arr);

    cout<<ans<<endl;
}