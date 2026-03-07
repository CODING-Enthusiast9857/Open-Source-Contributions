import java.util.Arrays;
import java.util.Scanner;

public class MergeSort {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int[] arrayToSort;

        while(true){
            System.out.print("Would you like to enter your own integers to sort (1) or use the default array (2) ? ");
            int requestNumber = input.nextInt();
            input.nextLine();

            if (requestNumber == 2){
                arrayToSort = new int[]{5, 3, 2, 4, 1};
                break;
            }else if (requestNumber == 1){
                boolean done = false;
                while(true){
                    System.out.println("Enter the values to sort separated by spaces: ");
                    String userArrayInput = input.nextLine();

                    String[] stringArrayToSort = userArrayInput.split(" ");

                    arrayToSort = new int[stringArrayToSort.length];
                    try{
                        for (int i = 0; i < stringArrayToSort.length; i++){
                            arrayToSort[i] = Integer.parseInt(stringArrayToSort[i]);
                        }
                        done = true;
                        break;
                    }catch(Exception e){
                        System.out.println(e.toString());
                    }
                }
                if (done) break;
            }else{
                System.out.println("Invalid choice! \n");
            }
        }
        input.close();

        sort(arrayToSort, 0, arrayToSort.length-1);
        System.out.println(Arrays.toString(arrayToSort));
    }

    static void sort(int[] arr, int low, int hi){
        if (low >= hi) return;

        int mid = (low+hi)/2;
        sort(arr, low, mid);
        sort(arr, mid+1, hi);
        merge(arr, low, mid, hi);
    }

    static void merge(int[] arr, int low, int mid, int hi){
        int[] read = Arrays.copyOfRange(arr, low, hi+1);
        int readStartLeft = 0;
        int readStartRight = mid+1-low;

        int leftEnd = mid - low;
        int rightEnd = hi - low;

        while(readStartLeft <= leftEnd && readStartRight <= rightEnd){
            if (read[readStartLeft] <= read[readStartRight]){
                arr[low] = read[readStartLeft];
                readStartLeft++;
            }else{
                arr[low] = read[readStartRight];
                readStartRight++;
            }
            low++;
        }

        while (readStartLeft <= leftEnd) {
            arr[low] = read[readStartLeft];
            readStartLeft++;
            low++;
        }
        while (readStartRight <= rightEnd) {
            arr[low] = read[readStartRight];
            readStartRight++;
            low++;
        }
    }

}
