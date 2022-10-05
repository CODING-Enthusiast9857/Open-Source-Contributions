import java.util.Scanner;

public class Vote {
    public static void main(String[] args) {
        Scanner in =new Scanner(System.in);
        System.out.print("Enter age: ");
        int a = in.nextInt();
        System.out.println("The person "+eligible(a)+" to give vote");
    }

    static String eligible(int a) {
        if(a < 18) return "is not eligible";
        else return "is eligible";
    }
}
