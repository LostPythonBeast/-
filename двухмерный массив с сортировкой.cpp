#include <iostream>
using namespace std;

int main()
    {
        int n;
        
        cout<<"Vvedite razmer massiva";
        cin>>n;
        int array[n];
        for(int i=0; i<0; i++)
            array [i] = rand()%10000;
        for ( int i = 0; i < n; i++)
            cout << array[i] << "\t";
            cout << endl << "\v";
        for (int i = 0; i < n; i++)
            cout << array[i] << "\t";
            cout << "\\";
        for (int j = 0; j <n; j++)
            for(int i; i<n; i++)
                if(array [i] > array[i+1])
                {
                        int temp = array [i];
                        array[i] = array [i+1];
                        array[i+1] = temp;
                }
        for (int i = 0; i < n; i++)
            for(int j = 0; j < n-1; j++)
                if (array [i] > array[i+1]) {
                    int temp = array[i+1];
                    array[i+1] = array[i];
                    array[i] = temp;
                    }
        
        return 0;
    }   
