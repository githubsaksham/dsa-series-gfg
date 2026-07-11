class Solution {
  public:
  int lcm(int a, int b) {
    
    // larger value
    int g = max(a, b);
    
    // Smaller value
    int s = min(a, b);
    
    for (int i = g; i <= a * b; i += g) {
        if (i % s == 0)
            return i;
    }
}
};