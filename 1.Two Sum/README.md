For problem, refer to the link below
https://leetcode.com/problems/two-sum/


Analysis:

1. Brutal force way to solve the problem: for each value in the vector(let say 'a'), traverse from the next value to the end till it find the value each value 'b' which equal (target-a)
the complexity of the solution is O(n^2)

2. The optimized way is use space to exchange the cpu computation
   a. Define a map M, the map is the <value, index> pair
   b. Traverse each value, current is nums[i], current index is i, the other value should be (target - nums[i]) if they add up to be target.
   b. Find the item in the map with key (target- nums[i])
      if
           the map does NOT has the item, add the pair<nums[i], i> in the map
      else
           M[target-nums[i]] is the index of the other value which equal target - nums[i]

      so the answer is 
         <M[target-nums[i]], i>

   Complexity: O(n) + O(log2(n))
      
