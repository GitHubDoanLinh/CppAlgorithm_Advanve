#include <iostream>
using namespace std;

/*int print(int n){
	if(n==1)	cout<<1;
	else{
		print(n-1);
		cout<<" "<<n;
	}*/
	
int C(int k, int n){
	if(k == n || k == 0)	 return 1;
	else return C(k-1 , n-1) + C(k, n-1);
}	
	
	
	

 int main(){
 	//print(5);
 	cout<<C(5,10);
 }













/*int print(int n){
	if(n==1) cout<<1;
	
	else
	{
		print(n-1); // <=> for(int i=1;i<=n;i++) cout<<" " <<n;
		cout<<" "<<n;
	}
}
int C(int k, int n){
	if(k==n || k ==0) return 1;
	else
	return C(k-1, n-1) + C(k,n-1);
}
int main(){
	print(5);
	cout<<C(3,6);
}*/

