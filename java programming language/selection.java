public class selection {
    public static void main(String args[]){
        int a[] ={5,3,2,4,8};
        int i,min;
        for( i=0;i<a.length;i++){
            min=i;
            for(int j=i+i;j<a.length;j++){
                if(a[min]>a[j])
                min=j;
        }
    
    //ab swap kardenge
    int temp=a[min];
    a[min]=a[i];
    a[i]=temp;
}
for(i=0;i<a.length;i++){
    System.out.print(a[i]+" ");
}
}
}