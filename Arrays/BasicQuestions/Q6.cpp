 Find the Kth largest and Kth smallest number in an array.

        int n,k;
        cout << "Enter size of array = " << endl;
        cin >> n;
        cout << "Enter k = ";
        cin >> k;
        int arr[n];
        cout << "Enter elements in array: " << endl;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);

            cout << "Smallest = " << arr[k-1] << endl;
            cout << "Largest = " << arr[n-k];
