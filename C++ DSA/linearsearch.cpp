#include <iostream>
using namespace std;
bool linearsearch(int arr[],int size,int k){
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remain=linearsearch(arr+1,size-1,k);
        return remain;
    }
    
}
int main() {
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=3;
   bool ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"element is found"<<endl;
    }
    else{
        cout<<"element is not found"<<endl;
        
    }
  

    return 0;
}