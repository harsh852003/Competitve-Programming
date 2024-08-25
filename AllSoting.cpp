#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]= arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

void BubbleSort(int arr[],int n){
    bool swapped ;
    for(int i=0;i<n-1;i++){
        swapped = false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            break;
        }
    }
}

void SelectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        if(min_index!=i){
            swap(arr[i],arr[min_index]);
        }
    }
}

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i= s+1;i<=e;i++){
        if(pivot>=arr[i]){
            count++;
        }
    }
    int pivotindex = s+count;
    swap(arr[s],arr[pivotindex]);

    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        while(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}

void QuickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int pi = partition(arr,s,e);
    QuickSort(arr,s,pi-1);
    QuickSort(arr,pi+1,e);
}

void Merge(int arr[],int s,int mid,int e){
    int n1 = mid-s+1;
    int n2 = e-mid;
    int L[n1],R[n2];

    for(int i=0;i<n1;i++){
        L[i] = arr[i+s];
    }

    for(int j=0;j<n2;j++){
        R[j]  = arr[j+1+mid];
    }
    int i=0,j=0,k=s;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            arr[k]= L[i];
            i++;
        }
        else{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]= R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    Merge(arr,s,mid,e);
}

void heapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    while(left<n && arr[left]>arr[largest]){
        largest = left;
    }
    while(right<n && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }

}

void HeapSort(int arr[],int n){
    //build heap
    for(int i=n/2-1;i>=0;i--){
        //to make heap and after that remove the element
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }

}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[] = {8,5,7,3,4,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int s = 0;
    int e = n-1;

    InsertionSort(arr,n);
    printArray(arr,n);
    return 0;
}