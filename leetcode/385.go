/**
 * // This is the interface that allows for creating nested lists.
 * // You should not implement it, or speculate about its implementation
 * type NestedInteger struct {
 * }
 *
 * // Return true if this NestedInteger holds a single integer, rather than a nested list.
 * func (n NestedInteger) IsInteger() bool {}
 *
 * // Return the single integer that this NestedInteger holds, if it holds a single integer
 * // The result is undefined if this NestedInteger holds a nested list
 * // So before calling this method, you should have a check
 * func (n NestedInteger) GetInteger() int {}
 *
 * // Set this NestedInteger to hold a single integer.
 * func (n *NestedInteger) SetInteger(value int) {}
 *
 * // Set this NestedInteger to hold a nested list and adds a nested integer to it.
 * func (n *NestedInteger) Add(elem NestedInteger) {}
 *
 * // Return the nested list that this NestedInteger holds, if it holds a nested list
 * // The list length is zero if this NestedInteger holds a single integer
 * // You can access NestedInteger's List element directly if you want to modify it
 * func (n NestedInteger) GetList() []*NestedInteger {}
 */
func deserialize(s string) *NestedInteger {
	var stk []*NestedInteger
	idx := 0
	for idx < len(s) {
		r := s[idx]
		if r == '[' {
			stk = append(stk, &NestedInteger{})
			idx++
		} else if r == ']' {
			if stk[len(stk)-1].IsInteger() {
				stk[len(stk)-2].Add(*stk[len(stk)-1])
				stk = stk[:len(stk)-1]
			}
			if len(stk) > 1 {
				stk[len(stk)-2].Add(*stk[len(stk)-1])
				stk = stk[:len(stk)-1]
			}
			idx++
		} else if r == ',' {
			if stk[len(stk)-1].IsInteger() {
				stk[len(stk)-2].Add(*stk[len(stk)-1])
				stk = stk[:len(stk)-1]
			}
			idx++
		} else {
			val, sign := 0, 1
			if r == '-' {
				sign = -1
				idx++
			}
			for idx < len(s) && s[idx] >= '0' && s[idx] <= '9' {
				val = val*10 + int(s[idx]) - '0'
				idx++
			}
			x := &NestedInteger{}
			x.SetInteger(val * sign)
			stk = append(stk, x)
		}
	}
	return stk[0]
}