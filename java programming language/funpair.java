import java.util.*;
public class funpair {
 public static void pairs(int n[],int size){
    int tp=0;
    for(int i=0;i<size;i++){
        int curr=n[i];
        for(int j=i+1;j<size;j++){
            System.out.println("(" + curr +","+ n[j]+")");
            tp++;
        }      
        System.out.println();
        }
        System.err.println("Total number of pairs"+tp);
 
        }
        public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            System.out.print("Enter the size of the array:");
            int size=sc.nextInt();
            
            int n[]=new int[size];
            System.out.println("Enter the arraay elements");
            for(int i=0;i<size;i++){
                n[i]=sc.nextInt();
            }
                         pairs(n,size);

}
}
