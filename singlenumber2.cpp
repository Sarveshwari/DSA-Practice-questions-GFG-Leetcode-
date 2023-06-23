int singleNumber(vector<int>& nums) {

        map<int, int> m;
        int flag=0;

        for(int i=0; i<nums.size(); i++)
        {
            m[nums[i]]++;
        }

       
        
           for (auto it = m.begin(); it != m.end(); ++it) {
            if (it->second == 1)
                return it->first;
            flag = 1;
        }

        if(flag==0)
            return 0;
    
    return -1;
    }
