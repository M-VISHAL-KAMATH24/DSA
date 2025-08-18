public class MinMaxInArray{
    public static int findmin(int[] arr){
        int min=arr[0];
        if(arr.length==0){
            throw new IllegalArgumentException("Array is empty");
        }
        for(int i=1;i<arr.length;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return min;
    }
    public static int findmax(int[] arr){
        int max=arr[0];
        if(arr.length==0){
            throw new IllegalArgumentException("Array is empty");
        }
        for(int i=1;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        return max;

    }
    public static int[] findMinMaxArray(int[] arr){
        if(arr.length==0){
            throw new IllegalArgumentException("array is empty");
        }
         int max=arr[0];
         int min=arr[0];
       
        for(int i=1;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        for(int i=1;i<arr.length;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        return new int[] {min,max};

    }
    public static void main(String args[]){
        int[] arr={11,2,5,4,5,6,4,55};
        int res=findmin(arr);
        int res2=findmax(arr);
        int res3[]=findMinMaxArray(arr);
        System.out.println(res);
        System.out.println(res2);
        System.out.println(res3[0]+" "+res3[1]);

    }
}