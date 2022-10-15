#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int D,NO;
    string B;
    cout<<"Dame el numero decimal que se convertira a binario. \n";
    cin>>D;
    NO=D;
    for (int i = 8; i > 0; i--)
    {
        if (D % 2 >0)
        {
            B = B +  '1';
            D = D/2;
            floor(D);       
        }else
        {
            B = B +'0';
            D = D / 2;
            floor(n);
        }
    cout << endl
        
        
    }
    

    return 0;
}