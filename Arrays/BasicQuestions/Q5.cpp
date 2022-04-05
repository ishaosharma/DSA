Write a program to sort the given array.

        int n;
        cout << "Enter size of array = " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter elements in array: " << endl;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        
        }
