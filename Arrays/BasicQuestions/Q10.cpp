Move all the negative elements to one side of the array.

        int n;
        cout << "Enter size of array = " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter elements in array: " << endl;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i] < 0){
                if(i != j){
                    swap(arr[i],arr[j]);
                }
                j++;
            }
        }
        
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
