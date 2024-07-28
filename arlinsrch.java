import java.util.*;

public class arlinsrch{
    public static void main(String args[]){
        Scanner sc= new Scanner(System.in);
        System.out.print("Enter the size of the arrray elemnt:");
        int size=sc.nextInt(); 
        int flag=0;
        int position=-1;
        int a[]=new int[size];
        System.out.println("Enter the key to search:");
        int key=sc.nextInt();
       // int flag=sc.nextInt();
        System.out.println("Enter the array elements");
        for(int i=0;i<size;i++)
            a[i]=sc.nextInt();
        for(int i=0;i<size;i++){
            if(a[i]==key){
                flag=1;
                position=i;
                break;
            }
        }
                if(flag==1){
                System.out.print("The elemnt is " +key+ " at "+(position+1) );
            }
            else{
                System.out.print("ELmemt not found");
            }
        }
            
        } 
    

