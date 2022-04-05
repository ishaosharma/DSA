You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in the list. One of the integers is missing in the list. 
Write an efficient code to find the missing integer.
[Practice here: https://practice.geeksforgeeks.org/problems/missing-number-in-array/0]
 
 // Your code goes here
        
        sort(array.begin(), array.end());
        
        for(int i = 1; i < n; i++){
            
            if(array[i-1] != i){    //i-1 islie cuz array ki indexing 0 se hoti h
                return i;
            }
      }
