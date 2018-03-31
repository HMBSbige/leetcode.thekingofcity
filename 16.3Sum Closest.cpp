class Solution {
public:
    int threeSumClosest(vector<int>& num, int target_) {
		int ans = 0, gap = INT_MAX, gap_; // gap stands for min gap, gap_ stands for the current gap

		std::sort(num.begin(), num.end());

		int target, front, back, back_ = num.size() - 1; // back_ stands for the last one, back stands for the current back pointer
        int sum, triplet[3], tmp;

        for (int i = 0; i <= back_; i++) {

            target = target_ - num[i];
            front = i + 1;
            back = back_;

            while (front < back) {

                triplet[0] = num[i];
                triplet[1] = num[front];
                triplet[2] = num[back];
                sum = triplet[1] + triplet[2];
                tmp = triplet[0] + sum;

                // Finding answer which start from number num[i]
                if (sum < target) {
                    gap_ = target - triplet[1] - triplet[2];
                    if (gap_ < 0) gap_ = -gap_;
                    if (gap_ < gap) {
                        gap = gap_;
                        ans = tmp;
                    }

                    front++;
                }

                else if (sum > target) {
                    gap_ = target - triplet[1] - triplet[2];
                    if (gap_ < 0) gap_ = -gap_;
                    if (gap_ < gap) {
                        gap = gap_;
                        ans = tmp;
                    }

                    back--;
                }
                else {
                    return target_;
                }

            }


        }

        return ans;
    }
};