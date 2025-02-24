# include<bits/stdc++.h>
using namespace std;
int repeat(vector<int>&arr){
        unordered_map<int, int>freq;
        for( int num :arr){
            freq[num]++;
        }
        for( int num:arr){
            if(freq[num]==1){
                return num;
            }
        }
        return 0;
    }
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int result=repeat(arr);
    cout<<result;
}