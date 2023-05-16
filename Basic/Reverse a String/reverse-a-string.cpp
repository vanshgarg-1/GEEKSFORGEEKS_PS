//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    int s=0;
    string ans;
    int e = str.size()-1;
    
  for(int i=0;i<str.size();i++){
      ans[i] = str[i];
  }
  for(int i=0;i<str.size();i++){
      str[s] = ans[e];
      s++,e--;
  }
  return str;
}

