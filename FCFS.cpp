#include<iostream>
using namespace std;

int main()
{
    int m;
    cout << "Enter size of BT ";
    cin >> m;

    int BT[m];

    cout << "Enter elemnet of BT ";
    for (int i = 0 ; i < m ; i++)
    {
        cin >> BT[i];
    }

    cout << "BT = ";

    for( int i = 0 ; i < m ; i++)
    {
        cout << BT[i] << " ";
    }

    int TAT[m];

    TAT[0] = BT[0];

    for ( int i = 1 ; i < m ; i++)
    {
        TAT[i] = TAT[i-1] + BT[i]; 
    }

    cout << endl << "TAT = ";

    for ( int i = 0 ; i < m ; i++)
    {
        cout << TAT[i] << " "; 
    }

    int WT[m];

    WT[0] = 0;

    for ( int i = 1 ; i < m ; i++ )
    {
        WT[i] = TAT[i-1];
    }

    cout << endl << "WT = ";

    for( int i = 0 ; i < m ; i++ )
    {
        cout << WT[i] << " ";
    }

    int totWT = 0;

    for ( int i = 0 ; i < m ; i++ )
    {
        totWT += WT[i];
    }

    float avgWT = float(totWT)/m;

    cout << endl << "avgWT = " << avgWT;

    return 0;
}