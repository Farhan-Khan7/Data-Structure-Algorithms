#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> nums , int target){
    vector<int> sum;
    int n = nums.size();
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]+nums[j] == target){
                sum.push_back(nums[i]);
                sum.push_back(nums[j]);
                return sum;
            }
        }
    }
    return sum;
}

int main(){

    vector<int> arr = {2,7,11,15};
    int target = 13;
    

    vector<int> ans = pairSum(arr , target);

    cout<< ans[0]<< " "<<ans[1] <<endl;

}