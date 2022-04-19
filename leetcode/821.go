func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}

func min(x, y int) int {
	if x < y {
		return x
	}
	return y
}

func shortestToChar(s string, c byte) []int {
	var res []int
	cindex := -1
	for idx, x := range s {
		if x == rune(c) {
			cindex = idx
			break
		}
	}
	for idx, x := range s {
		if x == rune(c) {
			cindex = idx
		}
		res = append(res, abs(idx-cindex))
	}
	for idx := len(s) - 1; idx >= 0; idx-- {
		x := abs(idx - cindex)
		if res[idx] > x {
			res[idx] = x
		}
		if s[idx] == c {
			cindex = idx
		}
	}
	return res
}