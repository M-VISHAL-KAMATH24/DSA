public class FindMissingNumber {
    public static int FindMissing(int[] arr,int n){
        int totalsum=(n*(n+1))/2;
        int arraysum=0;
        for(int i=0;i<arr.length;i++){
            arraysum=arraysum+arr[i];
        }
        return (totalsum-arraysum);
    }
//using XOR a^a=0 and a^0=a
public static int FindMisiingUisngXOR(int[] arr ,int n){
    int xor1=0;
    int xor2=0;
    for(int i=1;i<=n;i++){
        xor1^=i;
    }
    for(int j=0;j<arr.length;j++){
        xor2^=arr[j];
    }
    return (xor1^xor2);
}
    public static void main(String args[]){
        int[] arr={1,2,3,4,5,6,7,9};
        int n=(arr.length)+1;
        int missing_value1=FindMissing(arr,n);
        int missing_value2=FindMisiingUisngXOR(arr, n);
        System.out.println(missing_value1);
        System.out.println(missing_value2);
    }
    
}
