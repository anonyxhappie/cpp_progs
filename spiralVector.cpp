#include <bits/stdc++.h>
#define all(c) c.begin(), c.end()
#define m 3
#define n 3
using namespace std;
class Solution{
	public:
		vector<int> spiralOrder(const vector<vector<int> >&);
};
int main(){
	int data[][n] = {{1,2,3},{4,5,6},{7,8,9}};
	vector<vector<int> > A;
	for(int i=0; i<m; i++) A.push_back(vector<int>());
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			A[m].push_back(data[i][j]);
			cout << A[m].back() << " ";
		}	
		cout << endl;
	} 
	Solution s;
	vector<int> R = s.spiralOrder(A);
	for(int i=0; i<R.size(); i++){
	//	cout << R[i] << " ";
	}
	return 0;
}
vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
	vector<int> result;
	int T, L, B, R, dir;
	dir=T=L=0, B=R=A.size()-1;
	while(T<=B && L<=R){
		if(dir==0){
			for(int i=L; i<=R; i++) result.push_back(A[T][i]);
			T++;
		}else if(dir==1){
			for(int i=T; i<=B; i++) result.push_back(A[i][R]);
			R--;
		}else if(dir==2){
			for(int i=R; i>=L; i--) result.push_back(A[B][i]);
			B--;
		}else if(dir==3){
			for(int i=B; i>=T; i--) result.push_back(A[i][L]);
			L++;
		}
		dir=(dir+1)%4;
	}
	return result;
}




