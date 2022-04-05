Find all pairs on integer array whose sum is equal to given number.[Practice here: https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum/0]
                                                                    
 // code here go to code library YT vdo more understanding of optimised approach
                     
  //Using Unordered Map Time Complexity = O(n)
        
            unordered_map<int,int> m;
            int count = 0;
            for(int i= 0; i < n; i++){
            // (a,b) i.e a + b = k
               int b = k - arr[i];
               if(m[b]){
                   count += m[b];
               }
               m[arr[i]]++;             //inserting value in the map 
            }
            return count;
    
   //Brute approach Time Cmplexity = O(n^2) gives TLE
        int count = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] + arr[j] == k){
                count++;
            }
            }
        }
       return count; 
