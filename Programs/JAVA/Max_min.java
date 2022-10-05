import java.util.Scanner;

public class Max_min {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        System.out.print("Enter three Numbers: ");
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();
        System.out.println("max number is " + max(a,b,c));
        System.out.println("min number is " + min(a,b,c));
    }
    static int max(int a , int b , int c){
        if(a>b){
            return Math.max(a, c);
        }
        else return Math.max(b, c);
    }
    static int min(int a , int b , int c){
        if(a<b){
            return Math.min(a, c);
        }
        else return Math.min(b, c);
    }

}
