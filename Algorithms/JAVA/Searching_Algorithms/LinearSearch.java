import java.util.Scanner;

public class LinearSearch {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int n = input.nextInt();
        int[] arr = new int[n];
        System.out.print("Enter elements in the array: ");
        for (int i = 0; i < n; i++)
            arr[i]= input.nextInt();
        System.out.print("Enter target element : ");
        int target = input.nextInt();
        if(LinearSearch(arr,target)!=-1){
            System.out.println("Element is found at position : " + LinearSearch(arr,target));
        }else{
            System.out.println("Element not found!");
        }
    }

    public static int LinearSearch(int[] arr, int target) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == target) {
                return i;
            }
        }
        return -1;
    }

}
