
import java.util.*;
public class sumofn {
    public static void main(String [] args){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the number:");
        int n=sc.nextInt();
        int sum=0;
        int c=1;
        while (c<=n) {
            sum=sum+c;
            c++;
        }
        System.out.println(sum);
    }
}
