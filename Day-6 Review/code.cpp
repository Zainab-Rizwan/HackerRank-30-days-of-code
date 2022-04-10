#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int ST, i, j;
    cin >> ST;
   
    for (i=0; i<ST; i++)
    {
        string STR;
        cin >> STR;
                
        for (j=0; j< STR.length(); j++)
        {
            if (j%2==0)
            {
                cout << STR[j];
            }
            
        }
        
        cout << " ";
        
        for (j=0; j< STR.length(); j++)
        {
            if (j%2!=0)
            {
                cout << STR[j];
            }
            
        }
        
        cout << endl;
    }
    return 0;
}
