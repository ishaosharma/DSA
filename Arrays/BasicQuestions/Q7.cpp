 Given an number n. Find the number of occurrences of n in the array.

        int n,m;
        cout << "Enter size of array = " << endl;
        cin >> m;
        cout << "Enter n who occurence u wanna know = ";
        cin >> n;
        int arr[m];
        cout << "Enter elements in array: " << endl;

        for (int i = 0; i < m; i++){
            cin >> arr[i];
        }

           int count = 0;
        for (int i = 0; i < m; i++)
        {
            if(arr[i] == n){
                count++;
            }
        }
        cout << count << endl;
