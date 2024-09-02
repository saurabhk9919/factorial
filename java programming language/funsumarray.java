import java.util.*;
public class funsumarray {
    public static void asum(int n[],int size){
        int sum=0;
        for(int i=0;i<size;i++){
            sum=sum+n[i];
        }
        System.out.println("The sum of the arrays are " +sum);

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
            asum(n,size);
    }
    
}
