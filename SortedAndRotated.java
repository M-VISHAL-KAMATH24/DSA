public class SortedAndRotated {

    public static boolean isSortedAndRotated(int[] arr){
        if(arr==null){
            throw new IllegalArgumentException("array is empty");
        }
        int count=0;
        for(int i=0;i<arr.length;i++){
            if(arr[i]>arr[(i+1)%arr.length]){
                count++;
            }
            if(count>1){
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]){
        int arr[]={4,5,1,2,6};
        if(isSortedAndRotated(arr)){
            System.out.println("the array is sorted and rotated");
        }else{
            System.out.println("array is not sorted and rotated");
        }

    }
    
}
