#include <bits/stdc++.h>
#define m 1000000007

using namespace std; 

class TreeNode{
	int val; 
	TreeNode *right=NULL; 
	TreeNode *left=NULL; 
};



int main(){
	long long T; 
	cin >> T; 
	long long n=1; 

	while(T--){
		int N; 
		cin>>N; 
		int Q; 
		cin>>Q;
		vector <TreeNode *> containers(N); 
		int node=-1; 

		for (int i=0; i<N-1; i++){
			int i, j; 
			cin>>i; 
			cin>>j; 
			if (containers[i-1].left){
				containers[i-1].right=containers[j-1];
				node=i-1; 
			}
			else {
				containers[i-1].left=containers[j-1]; 
			}
		}

		for (int i=0; i<Q; i++){
			int containerNumber; 
			cin >> containerNumber; 
		}

		

	}
}