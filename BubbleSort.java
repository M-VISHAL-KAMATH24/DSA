public class BubbleSort {
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
    public static void main(String args[]){
        int[] arr={12,4,65,98,356,545,5};
        bubblesort(arr);
        for(int i=0;i<arr.length;i++){

            System.out.print(arr[i]+" ");
        }
    }
}
