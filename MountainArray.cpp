if(arr.size()<3 || arr[1]<arr[0]){
        return false;
       }
       for(int i=0;i<arr.size()-1;i++){
            if(arr[i]>arr[i+1]){
            i++;
            break;
            }
            else if(arr[i]==arr[i+1]){
            return false;
            }
        }
        for(int i =1;i<arr.size()-1;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                 i++;
            }
           
        }
    return false;
    }