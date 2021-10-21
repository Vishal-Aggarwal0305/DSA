import jdk.dynalink.Operation;

public class TappingRainwaterProblem {
    public static void main(String []args){

    int[] arr = {1, 6 ,3, 4, 5 ,6, 1};
    int []right=new int[arr.length];
    int tapped=0,max=0,left=0;
    for(int i=arr.length-1;i>=0;i--)
    max=right[i]=Math.max(arr[i],max);
    for(int i=0;i<arr.length;i++){
    left=Math.max(arr[i],left);
    max=Math.min(left,right[i]);
    tapped+=max-arr[i];
    }
    System.out.println(tapped);

    }


}
