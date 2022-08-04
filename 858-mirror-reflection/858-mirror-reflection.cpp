class Solution {
public:
    int mirrorReflection(int p, int q) {
        int gap = lcm(p,q);
        return ((gap/p) & 1) + (1-((gap/q) & 1)); 
    }
};