#include <stdc++/bits>
#include <iostream> 
#include <string>
using namespace std; 

// Function to reverse a string 
void reverseStr(string& str) 
{ 
	int n = str.length(); 

	// Swap character starting from two 
	// corners 
	for (int i = 0; i < n / 2; i++) 
		swap(str[i], str[n - i - 1]); 
} 

void reverse_print(string str) 
{ 
   for (int i=str.length()-1; i>=0; i--) 
      cout << str[i];  
}


// Driver program 
int main() 
{ 
	string str = "mohan"; 
	cout<<str<<endl;
	reverseStr(str); 
    cout << str<<endl;
	reverse(str.begin(), str.end()); 
	cout << str<<endl;
	reverse_print(str);

	return 0; 
} 
