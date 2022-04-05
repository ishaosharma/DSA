// 3 Find the minimum and maximum element in an array.

        int n;
        cout << "Enter size of array = " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter elements in array: " << endl;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int min = arr[0];
        int max = arr[0];
        for (int i = 0; i < n; i++)
        {
           if (min > arr[i])
               min = arr[i];

           if(max < arr[i])
               max = arr[i];
           
        }
        cout << "Maximum Value = " << max << "\n";
        cout << "Minimum Value = " << min;
