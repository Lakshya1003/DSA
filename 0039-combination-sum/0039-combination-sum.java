class Solution {

    void recu(int[] c, int n, int i, List<List<Integer>> ans, int target, List<Integer> temp) {
        if (target == 0) {
            ans.add(new ArrayList<>(temp));
            return;
        }
        if (i == n || target < 0 ) {
            return;
        }
        // sbse phele add krdo
        temp.add(c[i]);
        // recursion call with same element
        recu(c, n, i, ans, target - c[i], temp);
        // now pop 
        temp.remove(temp.size() - 1);
        // now move forward
        recu(c, n, i + 1, ans, target, temp);

    }

    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans = new ArrayList<>();
        List<Integer> temp = new ArrayList<>();
        int n = candidates.length;
        recu(candidates, n, 0, ans, target, temp);
        return ans;
    }
}