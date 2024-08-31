import java.util.*;
public class funbinsrch {
    public static void binsrch(int a[], int key ){
        int flag=0;
        int l=0;
        int r =a.length-1;
        int mid;
            
   
        while(l<=r){
            mid=(l+r)/2;
            if(a[mid]==key){
                flag=1;
                System.out.println("The key is at index:"+ mid);
                break;
            }
            if(a[mid]<key){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if (flag==0){
        System.out.print("key not found");
    }
}
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("ENter the numer of elements of the array:");
    int n=sc.nextInt();
    int a[]=new int[n];
    for(int i=0;i<n;i++){
        a[i]=sc.nextInt();
    }
       System.out.print("Enter the key to search:");
       int key=sc.nextInt();
       binsrch(a, key);
    }
    }
    

