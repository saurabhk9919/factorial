import java.util.*;
public class subarray {
    public static void subarray(int a[],int size){
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                for(int k=i;k<=j;k++){
                    System.out.print(a[k]  + " ");
                }
                System.out.println();
            }

    }
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
    subarray(n,size);
}
}