class Solution {
    public void setZeroes(int[][] matrix) {
        boolean[] line = new boolean[matrix.length];
        boolean[] colume = new boolean[matrix[0].length];

        for (int i = 0; i < matrix.length; ++i) {
            for (int j = 0; j < matrix[0].length; ++j) {
                if (matrix[i][j] == 0){
                    line[i] = true;
                    colume[j] = true;
                }
            }
        }

        for (int i = 0; i < matrix.length; ++i) {
            if (line[i] == true) {
                for (int j = 0; j < matrix[0].length; ++j) {
                    matrix[i][j] = 0;
                }
            }
        }

        for (int j = 0; j < matrix[0].length; ++j) {
            if (colume[j] == true) {
                for (int i = 0; i < matrix.length; ++i) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
}