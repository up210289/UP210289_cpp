#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;  //number of elements we want user to enter
    cout<<"Enter the number of elements\n";
    cin>>n;

    int arr[n]; //array to store the elements

    cout<<"Enter the elements\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }

    double mean = (double)sum/n;

    double sum2 = 0.0;

    for(int i=0;i<n;i++)
    {
        sum2 = sum2 + (arr[i]-mean)*(arr[i]-mean);
    }

    double variance = (double)sum2/n;

    double standardDeviation = sqrt(variance);

    cout<<"Mean: "<<mean<<endl;
    cout<<"Variance: "<<variance<<endl;
    cout<<"Standard deviation: "<<standardDeviation;
}