class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr=nums[0], maxi=nums[0];
        for(int i=1;i<nums.size();i++){
            curr=max(curr+=nums[i], nums[i]);
            maxi=max(curr, maxi);
        }
        return maxi;
    }
};

// Studied and analyzed various communication protocols in ESP32 and interfaced various peripheral sensors to create a working prototype of ESP32 PCB Schematic.
// Analyzed the throughput of various communication protocols and interfaced these peripherals using appropriate communication protocols on a single PCB from scratch.
//  Created a working schematic using KiCad, designed the PCB using Eagle and simulated using Proteus 8 Simulation software.     