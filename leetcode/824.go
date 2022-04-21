func toGoatLatin(sentence string) string {
	words := split(sentence)
	var res []string
	for idx, w := range words {
		var x string
		if isVowel(w[0]) {
			x = w + "ma"
		} else {
			x = w[1:] + w[:1] + "ma"
		}
		x += strings.Repeat("a", idx+1)
		res = append(res, x)
	}
	return strings.Join(res, " ")
}

func isVowel(x byte) bool {
	return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
		x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'
}

func split(sentence string) []string {
	var res []string
	idx := 0
	for idx < len(sentence) {
		for idx < len(sentence) && sentence[idx] == ' ' {
			idx++
		}
		start := idx
		for idx < len(sentence) && sentence[idx] != ' ' {
			idx++
		}
		res = append(res, sentence[start:idx])
	}
	return res
}