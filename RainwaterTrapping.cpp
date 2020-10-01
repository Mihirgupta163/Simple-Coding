#include <iostream>

using namespace std;

int main()
{
    int n,a[20],left[20],right[20],sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {   left[i] = a[i];
          for(int j=0;j<=i;j++){
            if(a[j]>=left[i])
                left[i] = a[j];
          }
    }
    for(int i=0;i<n;i++)
        {
            right[i] = a[i];
            for(int j=i;j<n;j++)
                right[i] = max(right[i],a[j]);
        }
    for(int i=0;i<n;i++)
    {
        sum += (min(left[i],right[i]) - a[i]);
    }
    cout<<"Total trapping of water is: "<<sum;
    return 0;
}
