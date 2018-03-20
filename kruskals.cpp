#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	cout<<"Enter the number of edges and vertices.";
	int n;int v;
	cin>>n>>v;
	pair<int,pair<int,int> > arr[n];int dis[v+1];vector<int> vec;int dis2[1000]={0};
	cout<<"Enter the edge and the corresponding vertices.\n";
	for(int i=0;i<n;i++){
		int edge,v1,v2;
		cin>>edge>>v1>>v2;
		arr[i]=make_pair(edge,make_pair(v1,v2));
		dis[v1]=v1;dis[v2]=v2;
	}
	sort(arr,arr+n);int sum=0;
	cout<<endl;
	for(int i=0;i<n;i++){
		int edge=arr[i].first;
		pair<int ,int> ver=arr[i].second;
		int u=ver.first;
		int v=ver.second;
		if(dis[u]!=dis[v]){
			sum=sum+edge;
			int temp=dis[v];
			for(int i=1;i<n;i++){
				if(dis[i]==temp){
					dis[i]=dis[u];
				}
			}
			cout<<u<<" to "<<v<<endl;
		}
	}
	cout<<"The minimum spanning tree is of length:"<<sum;
	
}
