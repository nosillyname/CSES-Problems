import java.util.Scanner;
 
public class MissingNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        int n = scanner.nextInt();
        scanner.nextLine();
        
        int[] arr = new int[n];
        int missing = n;
        for (int i=0; i<n-1; i++) {
            missing = missing^(i+1);
            arr[i] = scanner.nextInt();
            missing ^= arr[i];
        }
        scanner.nextLine();
 
        System.out.println(missing);
    }
}