# include<iostream>
using namespace std;
void mejority_elements(int arr[],int size){
    for (int i = 0; i < size; i++)

    {
         int count=0;
        for (int j = 0; j < size ;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            

        }
        if (count>size/2)
        {
            cout<<arr[i]<<" Is mejority mejority_elements.";
            return ;
        }


        
        
    }
    
    cout <<"Not mejority element";
}

int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
        
    }
    
     mejority_elements(arr,size);
    return 0;
}