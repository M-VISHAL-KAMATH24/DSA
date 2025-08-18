public class BinarySearch{
     public static void bubblesort(int[] arr){
        int temp;
        boolean swapped;
        int n=arr.length;
        for(int i=0;i<n-1;i++){
            swapped=false;
            for(int j=0;j<n-1-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=true;
                }

            }
            if(!swapped) break;
        }
        
    }
    public static int binarysearch(int[] arr,int target){
        int left=0;
        int right=(arr.length)-1;
        while(left<=right){
            int mid=(left+right)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]>target){
                right=mid-1;
            }else{
                left=mid+1;
            }
        }
        return -1;//not found

    }
    public static void main(String agrs[]){
        System.out.println("hiii");
        int[] numbers={55,31,545,4544,545,5,54,4};
        bubblesort(numbers);
        int target=4544;
        int res=binarysearch(numbers, target);
        System.out.println("the targte "+target+" is in index "+ res );

    }
}