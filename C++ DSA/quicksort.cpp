#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot=arr[s];
    
    int cnt=0;


    for(int i=s+1;i<=e;i++){
        if(arr[s]>arr[i]){
            cnt++;
        }

       
    }
        int pivotindex=s+cnt;
        swap(arr[pivotindex],arr[s]);
        int i=s;
        int j=e;

        while(i<pivotindex &&j>pivotindex){
            
            while(i<pivot){
                i++;
            }

            while(j>pivot){
                j--;
            }
            if(i<pivot&&j>pivot){
                swap(arr[i++],arr[j--]);
            }

        }

        return pivotindex;


}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    
    quicksort(arr,s,p-1);

    quicksort(arr,p+1,e);

}


int main(){
    int arr[5]={1,23,2,4,3};
    int n=5;
   quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

return 0;
}