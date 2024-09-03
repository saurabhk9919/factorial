import java.util.*;
public class funsubarrray {

    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the size of the array:");
int size=sc.nextInt();
int n[]=new int[size];
System.out.println("Enter the elemnts of the array:");
        for(int i=0;i<size;i++){
        n[i]=sc.nextInt();
        }
        for(int i=0;i<size;i++){
            for(int j=i;j<size;j++){
                for(int k=i;k<=j;k++){
                    System.out.print(n[k]  + " ");
                }
                System.out.println();
            }
   } 
}
}