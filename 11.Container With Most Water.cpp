class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,i=0,j=height.size()-1,t;
        while(i<j){
            if(height[i]<height[j]){
                t=height[i]*(j-i);
                i++;
            }else{
                t=height[j]*(j-i);
                j--;
            }
            if(t>ans) ans=t;
        }
        return ans;
    }
};
//Runtime: 19 ms
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,i=0,j=height.size()-1;
        while(i<j){
            ans = max(ans,min(height[i],height[j])*(j-i));
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};
//Runtime: 28 ms