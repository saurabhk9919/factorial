public class pattern_11 {
    public static void palipattern(int n){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){            //for spaces
                System.out.print(" ");
            }
            for(int j=i;j>=1;j--){              //for left region of the triangle
                System.out.print(j);
            }
            for(int j=2;j<=i;j++){
                System.out.print(j);        //for right region of the triangle
            }
        System.out.println();
        }


    }
    public static void main(String args[]){
        palipattern(5);
    }
}
