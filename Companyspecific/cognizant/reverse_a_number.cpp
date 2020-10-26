#include <iostream>
using namespace std;
int main() {
    int n, rev = 0, remainder;
    n = 5;
    int count = 0, i = 0;
    while (n != 0) {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        if(remainder==0 && i==0)
        {
        	count++;
        }
        else 
        {
        	i=1;
        }
        n /= 10;
    }
    for(int j=0;j<count;j++)
    {
    	cout<<"0";
    }
    cout<<rev<<endl;
    return 0;
}
