 #include <iostream>
 using namespace std;

//  bool Even(int n);
 int main()
 {
    int n, i, temp=0;
         cout << "Lucrare de laborator Nr.2 realizat de Costiuc Igor" << endl;
     cout << "Tema: Numere pare\n";
   cout << "Introduceti marimea sirului de numere intregi: ";
     cin>>n;
    int arr[n];
    cout<<"Introduceti orice "<<n<<" numere: ";
    for(i=0; i<n; i++)
            cin>>arr[i];
    for(i=0; i<n; i++)
    {
       if(arr[i]%2==0)
       {
          if(temp==0)
             cout<<"\nNumerele pare sunt:\n";
          cout<<arr[i]<<" ";
          temp=1;
       }
    }
    if(temp==0)
       cout<<"\nNumere pare nu au fost gasite!";
    cout<<endl;

  for(i = 1;i < n; ++i) 
  {
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Cel mai mare numar = " << arr[0];

    return 0;
 };
 

