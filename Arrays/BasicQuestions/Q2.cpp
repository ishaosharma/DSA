//2 Check whether n is present in an array of size m or not.Input -n,m (Input number, size of array)-Take input n elements for the arrayOutput -> true/false[ Hint : -Create a dynamic array]

    int n, m;
    cout << "Enter size of array = " << endl;
    cin >> m;
    cout << "Enter the no. u wanna search for = ";
    cin >> n;
    int arr[m];
    cout << "Enter elements in array: " << endl;
   
    for (int i = 0; i < m; i++)
    {
       cin >> arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        if(n == arr[i]){
            cout << "true";
        }
        else
        {
            cout << "false";
        }
        
    }
