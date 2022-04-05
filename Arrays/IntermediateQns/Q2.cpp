 Write a program to cyclically rotate an array by one.[Practice here: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0]
                                                       
 void rotate(int arr[], int n)
{
    int i = n-1; int j = n-2;
    while(i > 0 ){
        swap(arr[i--],arr[j--]);
    }
}                                                      
