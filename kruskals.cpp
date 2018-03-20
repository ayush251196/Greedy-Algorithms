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
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		int edge=arr[i].first;
	//	cout<<edge<<endl;
		pair<int ,int> ver=arr[i].second;
		int u=ver.first;
		int v=ver.second;
	//	cout<<dis[u]<<" "<<dis[v]<<endl;
		if(dis[u]!=dis[v]){
			int temp=dis[v];
			for(int i=1;i<n;i++){
				if(dis[i]==temp){
					dis[i]=dis[u];
				}
			}
			cout<<u<<" to "<<v<<endl;
		}
	}
	
}
