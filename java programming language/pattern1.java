public class pattern1 {
    public static void patter_1(int l, int b){
        for(int i=1;i<=l;i++){
            for(int j=1;j<=b;j++){
                if(i==1 || i==l || j==1 ||j==b){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();

        }
    }
    public static void main(String args[]){
        patter_1(4,4);
    }
    
}
