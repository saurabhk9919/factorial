import java.util.*;
public class kadanes {
    public static void kadanes(int n[]){
        int maxsum=Integer.MIN_VALUE;
        int currsum=0;
        for(int i=0;i<n.length;i++){
            currsum=currsum+n[i];
            if(currsum<0){
                currsum=0;
            }
            maxsum=Math.max(currsum, maxsum);
    }
    System.out.print("Our maximum subarray sum is "+ maxsum);
}
public static void main(String[] args) {
    int n[]={-3,3,4,-4,6,7};
    kadanes(n);
}
}