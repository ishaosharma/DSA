// 1 Create an Array of size 10 of integers. Take input from the user for these 10 elements and print the entire array after that.
   

    int n = 10;
    cout << "Enter n = " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements in arrays = " << endl;
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
       cout << arr[i] << " ";
    }cout << endl;
