func toLowerRune(r rune) rune {
	if r >= 'a' && r <= 'z' {
		return r
	}
	if r >= 'A' && r <= 'z' {
		return r + 'a' - 'A'
	}
	return r
}

func toLowerString(x string) string {
	var s []rune
	for _, r := range x {
		s = append(s, toLowerRune(r))
	}
	return string(s)
}

func isDigit(b byte) bool {
	return rune(b) >= 'a' && rune(b) <= 'z' || rune(b) >= 'A' && rune(b) <= 'Z'
}

func mostCommonWord(paragraph string, banned []string) string {
	m := make(map[string]int)
	index := 0
	maxCount := 0
	for index < len(paragraph) {
		for index < len(paragraph) && !isDigit(paragraph[index]) {
			index++
		}
		start := index
		for index < len(paragraph) && isDigit(paragraph[index]) {
			index++
		}
		end := index
		flag := false
		s := toLowerString(paragraph[start:end])
		for _, x := range banned {
			if s == x {
				flag = true
				break
			}
		}
		if !flag {
			m[s]++
			if m[s] > maxCount {
				maxCount = m[s]
			}
		}
	}
	for k, v := range m {
		if v == maxCount {
			return k
		}
	}
	return ""
}