import java.util.*;
public class binsearch {
    public static void main(String args[]){
        System.out.print("ENTER the size of the array:");
        Scanner sc=new Scanner(System.in);
        int size=sc.nextInt();
        int a[]=new int[size];
        System.out.print("Enetr the array elemnts");
        for(int i=0;i<size;i++){
            a[i]=sc.nextInt();
        }
        int key=20;
        int l=0;
        int r=size-1;
        int result=-1;

        while (l <= r) {
            int mid = l + (r- l) / 2;

            if (a[mid] == key) {
                result = mid;
                break; // Target found
            }

            if (a[mid] < key) {
                l= mid + 1;
            } else {
                r = mid - 1;
            }
        }

        if (result == -1) {
            System.out.println("Element not present in the array.");
        } else {
            System.out.println("Element found at index: " + result);
        }
    }
}
    
