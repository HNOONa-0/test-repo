#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int getSum(vector<int>& nums){
    int sum = 0;
    for(int i = 0; i < nums.size(); i++) sum += nums[i];
    return sum;
}
int getMin(vector<int>& nums){
    return *min_element(begin(nums), end(nums) );
}
int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << getSum(nums) << endl;
    cout << getMin(nums) << endl;
}