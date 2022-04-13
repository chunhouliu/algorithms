type RandomizedSet struct {
	nums    []int
	indices map[int]int
}

func Constructor() RandomizedSet {
	return RandomizedSet{
		indices: make(map[int]int),
	}
}

func (this *RandomizedSet) Insert(val int) bool {
	if _, ok := this.indices[val]; ok {
		return false
	}
	this.nums = append(this.nums, val)
	this.indices[val] = len(this.nums) - 1
	return true
}

func (this *RandomizedSet) Remove(val int) bool {
	idx, ok := this.indices[val]
	if !ok {
		return false
	}
	last := len(this.nums) - 1
	this.nums[idx] = this.nums[last]
	this.indices[this.nums[idx]] = idx
	delete(this.indices, val)
	this.nums = this.nums[:last]
	return true
}

func (this *RandomizedSet) GetRandom() int {
	return this.nums[rand.Intn(len(this.nums))]
}

/**
* Your RandomizedSet object will be instantiated and called as such:
* obj := Constructor();
* param_1 := obj.Insert(val);
* param_2 := obj.Remove(val);
* param_3 := obj.GetRandom();
 */