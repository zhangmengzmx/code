package www.bit.java;

import java.util.Scanner;

public class Sequence {
    public static void main(String[] args) {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        System.out.println(SequenceCount(n));
    }
    public static long SequenceCount(int n){
//        long result=0;
//        for(int i=1;i<=n;i++){
//            result+=i;
//        }
//        return result;
        int middle;
        int couple;
        long result;
        if(n%2==0){
            couple=n/2;
            result=couple*(1l+n);
            return result;
        }else{
            middle=(n/2)+1;
            couple=n/2;
            result=couple*(1l+n)+middle;
            return result;
        }
    }
}
