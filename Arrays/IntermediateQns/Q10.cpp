Given an array with all distinct elements, find the largest three elements. Expected time complexity is O(n) and extra space is O(1).
Input: arr[] = {10, 4, 3, 50, 23, 90}Output: 90, 50, 23
 https://practice.geeksforgeeks.org/problems/insertion-sort/1#                 selection sort                          
                                            
  //code here
        for(int i = 1; i < n; i++){
            int temp = arr[i];
            int j = i-1;
            for( ;j >=0; j--){
                
                if(arr[j] > temp){
                    arr[j+1] = arr[j];  // copy to right side
                }
                else{   //ruk jao arr[i] > arr[j] se means already sorted h
                    break;
                }
            }
            arr[j+1] = temp;  // insert the element in the middle toh j+1 vaale ko i ki position pe daaldo 
        }
    }
