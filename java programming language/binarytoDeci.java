public class binarytoDeci{
    public static void binToDec(int binNum){
        int pow=0;
        int decNum=0;
        int n=binNum;
        while(binNum>0){
            int lastdigit=binNum%10;
            decNum=decNum + (lastdigit*(int)Math.pow(2,pow));
            pow++;
            binNum=binNum/10;
        }
        System.out.println("The decimal of " +n +" is = " +decNum);
    }
    public static void main(String args[]){
        binToDec (1010);
    } 

}
