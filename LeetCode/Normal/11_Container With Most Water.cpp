int maxArea(vector<int>& height) {
        int maxa= 0;
        for (int i = 0, j = height.size() - 1;i != j;height[i] > height[j] ? j-- : i++)
            maxa = max(maxa, (j - i)*min(height[i], height[j]));
        return maxa;
    }