Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algorithm.

        int n;
        cout << "Enter size of array = " << endl;
        cin >> n;
        int arr[n];
        cout << "Enter elements in array: " << endl;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int i = 0;
        int countZero = 0;
        int countOne = 0; 
        int countTwo = 0;

        while (i < n)
        {
            if(arr[i] == 0){
            countZero++;
            }
            else if(arr[i] == 1){
            countOne++;
            }
            else{
                countTwo++;
            }
           i++; 
        }

        for (int i = 0; i < countZero; i++)
        {
           arr[i] = 0;
        }

        for (int i = countZero; i < countZero + countOne; i++)
        {
           arr[i] = 1;
        }

        for (int i =countZero + countOne ; i < n; i++)
        {
           arr[i] = 2;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
