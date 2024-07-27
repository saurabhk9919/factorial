import java.util.*;
public class array2 {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("ENTer the size of the array:");
        int size=sc.nextInt();
        //creaating an array
        int a[]=new int[10];
        //readinbg elemnts from the user
        for(int i=1;i<=size;i++){
            a[i]=sc.nextInt();
        }
        //DIsplaying of elements
        System.out.print("The eelments of the arrray is:-");
        for(int i=1;i<=size;i++){
            System.out.print(a[i]+" ");
        }
    } 
    
}
