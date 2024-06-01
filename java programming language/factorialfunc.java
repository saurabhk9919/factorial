public class factorialfunc {
   public static int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }       
        return f;
    }
   
    
//fact(4);
        public static int binCoeff(int n,int r){
            int factn=fact(n);
            int factr=fact(r);
            int factnmr=fact(n-r);
            int binCoeff=(factn)/(factr*factnmr);
            return binCoeff;
        }
        public static void main(String args[]){
    System.out.print(binCoeff(4,2));
   }

    }


