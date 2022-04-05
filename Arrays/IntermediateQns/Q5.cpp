Find duplicates in an array.[Practice here : https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1]
         // code here
        vector<int> ans;
        sort(arr,arr+n);
        int flag = 0; 
        for(int i = 0; i< n; i++){
            
                if(arr[i] == arr[i+1]){
                    
                    while(arr[i] == arr[i+1]){
                        i++;
                    }
                    flag = 1;
                    ans.push_back(arr[i]);
                }
                    
        }
        if(flag == 0){
            ans.push_back(-1);
        }
        return ans;                    
