#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int main() 
{
    long long int lower,high;
    cin>>lower>>high;
    long long int k;
    cin>>k;
    vector<long long int> even;
    vector<long long int> odd;
    for(long long int i=lower;i<=high;i++)
    {
        if(i%2==0)
        {
            even.push_back(i);
        }
        else
        {
            odd.push_back(i);
        }
    }
    long long int ans;
    long long int x1,x2;
    long long int even_size=even.size();
    long long int odd_size=odd.size();
    //cout<<even_size<<" "<<odd_size; 
    x1=pow((even_size+odd_size),k);
    x2=pow((even_size-odd_size),k);
    //cout<<x1<<" "<<x2<<endl;
    ans=(x1+x2)/2;
    ans=ans%1000000007;
    cout<<ans;
}



(a ^ n) % 10 = ( ( (a % 10) ^ n);