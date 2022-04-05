 // QNS link = https://practice.geeksforgeeks.org/problems/union-of-two-arrays/0

 //code here
        
       // using sets-> sets does not store duplicates.  T.C = O(n+m)
        
        set<int> val;
        for(int i = 0; i < n+m; i++){
            if(i<n){
                val.insert(a[i]);
            }
            else{
                val.insert(b[i-n]);
            }
         }
        return val.size();
    }  
