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
            B = '1' + B;
            D = D/2;
            floor(D);   
              
        }else
        {
            B = '0' + B;
            D = D / 2;
            floor(D);
            
            
        }
    
       
        
    }
    cout<< B << endl;
    

    return 0;
}