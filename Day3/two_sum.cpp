#include <iostream>
using namespace std;

int main(){
    int arr[]={};
    int sum=0;
    int count =0;
    int target;
    int length;
    cout<<"Enter the length of the num array";
    cin>>length;
    cout<<"Enter the array of numbers"<<endl;
    for(int i=0;i<length;i++)
    {
        cin>>arr[i];
    }
   
 
    cout<<"Enter the target number"<<endl;
    cin>>target;
    for(int i =0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {       
        count++;
        if(count<=2){
            sum=sum+i;
        }
        else{
            count=0;
            sum=0;
        }
        if(sum == target){
            cout<<"Target achieved ";
        }
            
    }
    
    
    
    
}