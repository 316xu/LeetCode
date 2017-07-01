import java.util.HashMap;
import java.util.Map;

/**
 * Created by xujifa on 17-7-1.
 * 1
 */
public class TwoSum {

    public int[] twoSum(int[] nums, int target) {


        Map<Integer, Integer> indexToValue = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            indexToValue.put(nums[i], i);
        }


        for (int i = 0; i < nums.length; i++) {
            int remain = target - nums[i];
            Integer index = indexToValue.get(remain);
            if (index != null && index != i) {
                return new int[]{i, index};
            }
        }

        return new int[]{-1, -1};
    }
}
