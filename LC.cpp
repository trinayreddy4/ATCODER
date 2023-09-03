#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>>ans;
        int ps=(1<<nums.size());

        for(int i=0;i<ps;i++)
        {
            vector<int>temp;
            for(int j=0;j<nums.size();j++)
            {
                if(i&(1<<j))
                {
                    temp.push_back(nums[i]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
}
int main()
{
	int n;
	cin>>n;
	vector<int>nums;
	for(int i=0;i<n;i++)
	{
		int t;
		cin>>t;
		nums.push_back(t);
	}
	vector<vector<int>>ans=subsets(nums);
	for(int i=0;i<ans.size();i++)
	{
		for(int j=0;j<ans[i].size();j++)
		{
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
}
    
