vector<int> singleNumber(vector<int>& nums) {

        map<int,int>m;
        vector<int>v;
        int flag=0;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

        for( auto it=m.begin(); it!=m.end(); it++)
        {
            if(it->second==1)
            v.push_back(it->first);
            flag=1;
        }

        
        return v;
        
    }
