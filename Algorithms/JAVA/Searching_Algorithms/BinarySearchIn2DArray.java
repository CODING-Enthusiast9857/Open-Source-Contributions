import java.util.Scanner;

public class BinarySearchIn2DArray {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the number of rows in Array : ");
        int rows = input.nextInt();
        System.out.print("Enter the number of columns in Array : ");
        int cols = input.nextInt();
        int[][] arr = new int[rows][cols];
        System.out.println("Enter sorted array, column-wise and row-wise ");
        for(int i = 0;i<rows;i++)
        {
            System.out.print("Enter " + cols + " elements : ");
            for(int j =0 ; j<cols;j++)
            {
                arr[i][j] = input.nextInt();
            }
        }

        System.out.print("Enter Target Element : ");
        int target = input.nextInt();
        int[] pos = BinarySearch(arr,target,rows,cols);
        if(pos[0]==-1){
            System.out.println("Element not found!!");
        }
        else {
            System.out.println("Element found at the position " + pos[0] + ","+ pos[1]);
        }

    }

    public static int[] BinarySearch(int[][] arr,int target,int rows,int cols){

        int i = 0,j=cols-1;
        while(i<rows&&cols>-1){
            if(arr[i][j]==target){
                return new int[]{i,j};
            }
            else if(arr[i][j]>target){
                j--;
            }
            else {
                i++;
            }

        }
        return new int[]{-1,-1};

    }


}
