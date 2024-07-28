	// int minSwaps(vector<int>&nums)
	// {
	//     // Code here
	//     int n=nums.size();
	//     vector<int>temp(nums.begin(),nums.end());
	//     sort(temp.begin(),temp.end());
	//     unordered_map<int,int>mp;
	//     for(int i=0;i<n;i++)mp[temp[i]]=i;
	//     int cnt=0;
	//     int i=0;
	//     while(i<n){
	//         if(mp[nums[i]]==i){
	//             i++;
	//         }else{
	//             swap(nums[i],nums[mp[nums[i]]]);
	//             cnt++;
	//         }
	//     }
	//     return cnt;
	// }