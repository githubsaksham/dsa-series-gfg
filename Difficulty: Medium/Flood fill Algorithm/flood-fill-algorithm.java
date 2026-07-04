class Solution {

    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {

        int oldColor = image[sr][sc];

        // Agar old aur new color same hain to DFS mat chalao
        if (oldColor == newColor) {
            return image;
        }

        dfs(image, sr, sc, oldColor, newColor);

        return image;
    }


    private void dfs(int[][] image, int row, int col,
                     int oldColor, int newColor) {

        int n = image.length;
        int m = image[0].length;

        // Boundary check
        if (row < 0 || row >= n || col < 0 || col >= m) {
            return;
        }

        // Different color mila to wapas jao
        if (image[row][col] != oldColor) {
            return;
        }

        // Current pixel ka color change karo
        image[row][col] = newColor;

        // 4 directions
        dfs(image, row - 1, col, oldColor, newColor); // Up
        dfs(image, row + 1, col, oldColor, newColor); // Down
        dfs(image, row, col - 1, oldColor, newColor); // Left
        dfs(image, row, col + 1, oldColor, newColor); // Right
    }
}