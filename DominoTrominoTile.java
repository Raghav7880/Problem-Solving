import java.util.Scanner;

class DominoTrominoTile {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] dp = new int[n + 1];

        int ans = numTilings(n, dp);
        System.out.println(ans);

    }

    public static int numTilings(int n, int[] dp) {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        if (n == 3)
            return 5;

        if (dp[n] != 0)
            return dp[n];

        dp[n] = (2 * numTilings(n - 1, dp) + numTilings(n - 3, dp)) % 1000000007;

        return dp[n];
    }
}