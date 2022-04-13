func sum(vals ...int) int {
	res := 0
	for _, v := range vals {
		res += v
	}
	return res
}

func max(a, b int) int {
	if a < b {
		return b
	}
	return a
}

func maximumWealth(accounts [][]int) int {
	max_ := 0
	for _, v := range accounts {
		max_ = max(max_, sum(v...))
	}
	return max_
}