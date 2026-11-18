class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0,tank=0,start=0;
        for(int i=0;i<gas.size();i++){
            int diff=gas[i]-cost[i];
            total+=diff;
            tank+=diff;
            if(tank<0){  //yha tak hi phuch payega
                start=i+1;//agle pump se start kare
                tank=0;
            }
        }
        if (total < 0) {
          return -1;
    }
        else {
          return start;
        }
    }
};
