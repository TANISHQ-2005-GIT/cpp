#include<iostream>
#include<vector>
using namespace std;
int longestsubarrrayfind(vector<int> arr,long long k){
    int n=arr.size();
    long long sum=arr[0];
    int left=0;
    int right=0;
    int maxilength=0;
    while(right<n){
        while(left<=right && sum>k)
        {
            sum-=arr[left];
            left++;

        }
        if(sum==k){
         maxilength=max(maxilength,right-left+1);
        }
        right++;
        if(right<n) sum+=arr[right];
    }
    return maxilength;
}
int main(){
        vector<int> arr={1,2,3,1,1,1,1,3,3};
        long long k=6;
        int ans=longestsubarrrayfind(arr,k);
        cout<<ans<<endl;
        return 0;
    }