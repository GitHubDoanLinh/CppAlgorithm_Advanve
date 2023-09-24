#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,N,cnt=0;
	cin>>N;
	for(int a=1;a<N/3;a++){
		for(int b = a+1;b<=(N-a)/2;b++){
			float d = sqrt(a*a+b*b);
			float e = d - (int)d;
			if(a+b+d<=N){
				if(e==0){
					cnt++;
				}
			}
			else break;
		}
	}
	cout<<cnt;
	return 0;
}

