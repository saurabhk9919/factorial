import java.util.*;
public class reversearray {
    public static void main(String args[]){
        System.out.print("Enteer the size of the array:");
        Scanner sc = new Scanner(System.in);
        int size=sc.nextInt();
        int a[]=new int[size];
        System.out.print("Enetr the array elemnts");
        for(int i=0;i<size;i++){
            a[i]=sc.nextInt();
        }
            int x=0;
            int y=size-1;
            while(x<y){
                int temp=a[x];
                a[x]=a[y];
                a[y]=temp;
                x++;
                y--;
            
        }
        System.out.print("The recverse arrray is:");
        for(int i=0;i<size;i++){
            System.out.print(a[i]+" ");
        }
            }
        }
    
