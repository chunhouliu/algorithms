func maxRotateFunction(nums []int) int {
	f, s, n := 0, 0, len(nums)
	for idx, v := range nums {
		f += idx * v
		s += v
	}
	maxf := f
	for i := 1; i < n; i++ {
		f += s - n*nums[n-i]
		if maxf < f {
			maxf = f
		}
	}
	return maxf
}