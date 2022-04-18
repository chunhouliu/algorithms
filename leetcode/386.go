func lexicalOrder(n int) []int {
	var v []int
	for i := 1; i < 10; i++ {
		v = lexicalOrderHelper(i, n, v)
	}
	return v
}

func lexicalOrderHelper(x, n int, v []int) []int {
	if x > n {
		return v
	}
	v = append(v, x)
	for i := 0; i < 10; i++ {
		v = lexicalOrderHelper(x*10+i, n, v)
	}
	return v
}