// Ðoàn Huu Linh - 1851061544
#include<iostream>
using namespace std;

const int MAX=1000;

long long f[MAX];

long long fibo(int n){
	if(n<2) return n;
	if(f[n==-1])
		f[n]=fibo(n-1)+fibo(n-2);
	return f[n];
}
int check(int k){
	if(k<0) return 0;
	int i=0;
	if(k<2) return k+1;
	while(fibo(i)!=k&&k>2){
		 if(fibo(i)>k){
			return fibo(i);
		}
		i++;
	}
}
int main(){
	int k;cin>>k;
	for(int i=0;i<MAX;i++) f[i]=-1;
	cout<<check(k);
}
// if(fibo(i)>k){
// i++;
