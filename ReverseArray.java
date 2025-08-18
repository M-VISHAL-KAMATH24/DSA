public class ReverseArray {
    
    public static void display(int[] arr){
        for(int i=0;i<arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void reverseArray(int[] arr){
        if(arr.length==0){
            throw new IllegalArgumentException("Array is  empty");
        }
        int i=0;
        int j=(arr.length)-1;
        int temp;
        while(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    public static void main(String args[]){
        int[] arr={10,20,30,40,50,60};
        display(arr);
        reverseArray(arr);
        display(arr);
    }
}
