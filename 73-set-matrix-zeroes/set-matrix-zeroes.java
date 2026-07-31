class Solution {
    public void setZeroes(int[][] ma) {

        int n = ma.length;
        int m = ma[0].length;

        ArrayList<Integer> iid = new ArrayList<>();
        ArrayList<Integer> jid = new ArrayList<>();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (ma[i][j] == 0) {
                    iid.add(i);
                    jid.add(j);
                }
            }
        }

        int is = iid.size();
        int js = jid.size();

        // Zero rows
        for (int i = 0; i < is; i++) {
            int row = iid.get(i);
            for (int j = 0; j < m; j++) {
                ma[row][j] = 0;
            }
        }

        // Zero columns
        for (int i = 0; i < js; i++) {
            int col = jid.get(i);
            for (int j = 0; j < n; j++) {
                ma[j][col] = 0;
            }
        }
    }
}