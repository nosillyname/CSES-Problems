import java.util.*;
 
public class CountingRooms {
    static int n, m;
    static char[][] matrix;
    static int[][] directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
 
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        n = scanner.nextInt();
        m = scanner.nextInt();
        scanner.nextLine(); // Consume the remaining newline character
 
        matrix = new char[n][m];
        for (int i = 0; i < n; i++) {
            String row = scanner.nextLine();
            matrix[i] = row.toCharArray();
        }
 
        int ans = 0;
        for (int row = 0; row < n; row++) {
            for (int column = 0; column < m; column++) {
                if (matrix[row][column] == '.') {
                    ans++;
                    dfs(row, column);
                }
            }
        }
 
        System.out.println(ans);
    }
 
    static void dfs(int i, int j) {
        Stack<int[]> stack = new Stack<>();
        stack.push(new int[]{i, j});
 
        while (!stack.isEmpty()) {
            int[] cell = stack.pop();
            int r = cell[0];
            int c = cell[1];
            matrix[r][c] = '#';
 
            for (int[] dir : directions) {
                int dr = r + dir[0];
                int dc = c + dir[1];
                if (dr >= 0 && dr < n && dc >= 0 && dc < m && matrix[dr][dc] == '.') {
                    stack.push(new int[]{dr, dc});
                }
            }
        }
    }
}