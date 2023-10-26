#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getSum(vector<int>& nums){
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) sum += nums[i];
    return sum;
}
int getAverage(vector<int>& nums){
    return getSum(nums) / nums.size();
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << getSum(nums) << endl;
    cout << getAverage(nums) << endl;
}