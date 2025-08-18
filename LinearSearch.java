public class LinearSearch {
    public static int linearSearch(int[] arr,int target){
        for(int i=0;i<arr.length;i++){
            if(arr[i]==target){
                return i;
            }
        }
        return -1;
    }
    public static void main(String args[]){
        int[] numbers={54,65,5,54,55,5,45,45,4,545};
        int target=45;
        int res=linearSearch(numbers, target);
        if (res==-1){
            System.out.println("number not found");
        }else{
            System.out.println("the number "+ target+" found at the index "+ res);

        }
    }
}
