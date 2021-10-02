#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;

        int x = (n*n + n - (2*s))/2;
        

        if( x<=n && x>=1){
            cout<<x<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
        
        
	}
	return 0;
}
