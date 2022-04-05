Find the range of the array. Range means the difference between the maximum and minimum element in the array.

        int n;
        cout << "Enter size of array = " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter elements in array: " << endl;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        
        sort(arr, arr+n);

        int range =  arr[n-1] - arr[0];

        cout << "Range is Largest element - smallest element = " << range;
