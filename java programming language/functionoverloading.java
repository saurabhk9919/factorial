public class functionoverloading {
    public static int sum(int a,int b){
        return a+b;         
    }
    public static int sum(int a,int b,int c){   //functiom over loadiing
        return a+b+c;   
    }
    public static void main(String args[]){
        System.out.println(sum(3,4));
        System.out.println(sum(3,7,2));
    }
}
