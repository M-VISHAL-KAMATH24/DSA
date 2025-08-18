public class MaxSubArray {
    public static int kadanesAlgorithm(int[] arr){
        if(arr==null){
            throw new IllegalArgumentException("array is empty");
        }
        int currentsum=arr[0];
        int maxsum=arr[0];
        
        for(int i=1;i<arr.length;i++){
            currentsum=Math.max(currentsum,currentsum+arr[i]);
            maxsum=Math.max(currentsum,maxsum);
        }

        return maxsum;
    }
    
    public static void main(String args[]){
        int[] arr={1,-9,6,8,-9,9,6,5,4,2,3,6,7,-9,2};
        int res=kadanesAlgorithm(arr);
        System.out.println(res);
    }
}
