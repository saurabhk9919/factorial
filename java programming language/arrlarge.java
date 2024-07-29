import java.util.*;
public class arrlarge {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("Entre the size of the array");
        int size=sc.nextInt();
        int a[]=new int[size];
        System.out.println("Enter the array element");
        for(int i=0;i<size;i++){
        a[i]=sc.nextInt();
        }
        int largest=a[0];
        for(int i=0;i<size;i++){
            if(a[i]>largest){
                largest=a[i];
            }
        }
        
    
    System.out.print("The largest number in the array is: " + largest);
    }

}