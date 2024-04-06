int FirstOccurenceUsingBinarySearch(int a[],int n,int key){
    int start= 0,end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){
        if(a[mid]==key){
            ans = mid;
            end = mid -1;
        }
        else if (a[mid]>key){
            end = mid - 1;
        }
        else if(a[mid]<key){
            start = mid + 1;
        }
        mid = start = (end-start)/2;
    }
    return ans;
}