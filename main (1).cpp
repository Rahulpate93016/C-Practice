# include<iostream>
# include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"This is the main array=";
    for(int i=0;i<n;i++){
        cout<<arr[i];
        
    }
    
    cout<<"\n";
  int i=0;
  int j=n-1;
  while(i<j){
      swap(arr[i],arr[j]);
      i++;
      j--;
  }
  cout<<"This is the reverse array=";
  
  for(int i=0;i<n;i++){
      cout<<arr[i];
  }
}