# Therap

## Introduction
[Therap (BD) Ltd.](https://therapbd.com/) is a US-based Software Company registered in Bangladesh, operating since 2004. They have their office in Dhaka, Bangladesh, and affiliate offices in the USA and Canada.
Therap has multiple roles. 
1. Software Engineer
2. Database Engineer
3. Quality Assurance Engineer
4. Embedded System Engineer

> [!TIP]
> Therap BD organizes a Java fest every year. The prize money is very handsome. Apart from that, if you advance to final that means you get a direct ticket to interview skipping the initial screening

## Interview Stages
The selection process has x number of steps
1. Initial screening
2. ?


## Database Questions
<details>
<summary>
Design an ERD of online restaurant management system
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
What is Database Transaction
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Briefly explain ACID properties
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
What is normalization and denormalization
</summary>
<hr>
[Answer] 
</details>

<details>
<summary>
Briefly explain BCNF
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Explain data warehousing
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Explain data redundancy
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Briefly mention the differences between stored procedure, function and trigger
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Briefly mention the differences between delete, drop and truncate
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Briefly mention the differences between where and having clause
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Briefly mention the differences between candidate key and super key
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
A schema has entities like CUSTOMERS, ORDERS, ORDER_ITEMS, PRODUCTS, PRODUCT_DETAILS, WAREHOUSES, INVENTORIES. Data fields of entities and cardinality relationships were given in the figure. Questions included from <>
1. Group by, Order by, Join <>
2. Extracting month and year from oracle dates <>
3. Find ranks based on some criterion. The extremely hard question was - find top 10 customers based on their total amount spent in 2023. This one involved the following topics: aggregation, join of multiple tables, nested sub-query, year extraction from date. The book of Sukarna sir contains one/two such exercises. Practise them properly

</summary>
<hr>
[Answer]
</details>

## Software Engineering Questions
<details>
<summary>
Given an array of numbers indicating stock price of n consecutive days. If you buy stock at one day and sell at any later day what is the maximum profit that you can get
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)
```C++
int maxProfit(vector<int>& prices) {
    int buy = prices[0];
    int profit = 0;
    for(int i=1;i<prices.size();i++){
        if( prices[i]-buy > profit ) profit = prices[i] - buy;
        if( prices[i] < buy ) buy = prices[i];
    }
    return profit;
}
```
</details>

<details>
<summary>
Given an array of n integers. You need to take all zeroes in array to the end without changing the relative order of remaining element.
eg: [2,0,0,3,1,0,5] => [2,3,1,5,0,0,0]
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/move-zeroes/description/)
```C++
void moveZeroes(vector<int>& nums) {
    int i = 0;
    for(int j=0;j<nums.size();j++){
        swap(nums[i], nums[j]);
        if( nums[i] != 0 ) i++;
    }
}
```
</details>

<details>
<summary>
Given an array of n integers. Reorder the elements such that all odd numbers occur after even numbers.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given an array of strings. Print the sets of strings which are anagram.
eg: ["cat","tab","act","bat","taco"] => [{"cat","act"},{"tab","bat"},{"taco"}] 
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/group-anagrams/)
```C++
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string,int> index;
    vector<vector<string>> vs;
    for(auto str:strs){
        string str2 = str;
        if( str2.size()>1 ) sort(str2.begin(),str2.end());
        if( index.find(str2) == index.end() ){
            vs.push_back(vector<string>());
            index[str2] = vs.size()-1;
        }
        vs[ index[str2] ].push_back(str);
    } 
    return vs;
}
```
</details>

<details>
<summary>
Given an array of n integers. Find the kth largest element in the array.
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/kth-largest-element-in-an-array/)
```C++
int findKthLargest(vector<int>& nums, int k) {
    partial_sort(nums.begin(), nums.begin() + k, nums.end(), greater<int>());
    return nums[k-1];
}
```
</details>

<details>
<summary>
Given two very large number in string format. Find the sum of the two number
</summary>
<hr>

```C++
string sum(string &A, string &B){
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    string sum;
    int c = 0;
    int i=0,j=0;
    while(true){
        int a=0,b=0;
        if( i<A.size() ) a = A[i++]-'0';
        if( j<B.size() ) b = B[j++]-'0';

        int s = (a+b+c)%10;
        c = (a+b+c)/10;
        sum.push_back(s+'0');
        if( i>=A.size() and j>=B.size() and c == 0 ) break;
    }
    reverse(sum.begin(),sum.end());
    return sum;
}
```
</details>

<details>
<summary>
Given two binary tree. Check if they are identical [not isomorphism]
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/same-tree/)
::: code-group
```C++ [Normal Solution]
bool isSameTree(TreeNode* p, TreeNode* q) {
    if( p == nullptr and q != nullptr ) return false;
    if( p != nullptr and q == nullptr ) return false;
    if( p == nullptr and q == nullptr ) return true;

    if( p->val != q->val ) return false;

    return isSameTree(p->left,q->left) && 
            isSameTree(p->right,q->right);
}
```
```go [Weird Solution]
// ref: https://go.dev/tour/concurrency/7
package main

import (
	"fmt"

	"golang.org/x/tour/tree"
)

// Walk walks the tree t sending all values
// from the tree to the channel ch.
func WalkRecursive(t *tree.Tree, ch chan int) {
	if t.Left != nil {
		WalkRecursive(t.Left, ch)
	}
	ch <- t.Value
	if t.Right != nil {
		WalkRecursive(t.Right, ch)
	}
}

func Walk(t *tree.Tree, ch chan int) {
    WalkRecursive(t, ch)
    close(ch)
}

// Same determines whether the trees
// t1 and t2 contain the same values.
func Same(t1, t2 *tree.Tree) bool {
	ch1 := make(chan int)
	ch2 := make(chan int)
	go Walk(t1, ch1)
	go Walk(t2, ch2)
	for {
		x, ok1 := <-ch1
		y, ok2 := <-ch2

		if ok1 != ok2 || x != y {
			return false
		}
		if !ok1 {
			break
		}
	}
	return true
}

func main() {
	fmt.Println(Same(tree.New(1), tree.New(2)))
}
```
:::
</details>

<details>
<summary>
Given two array of integers. Find the common elements between them.
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/intersection-of-two-arrays/)  Unique  
[**💻 Submit Code**](https://leetcode.com/problems/intersection-of-two-arrays-ii/) Repeats
::: code-group
```C++ [Return uniques]
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> st;
    for(auto num:nums1) st.insert(num);
    set<int> res;
    for(auto num:nums2) if( st.count(num) == 1 ) res.insert(num);
    vector<int> ret;
    for(auto num:res) ret.push_back(num);
    return ret;
}
```

```C++ [With repeatation]
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());

    vector<int> merged;
    int i=0,j=0;
    while(i<nums1.size() and j<nums2.size()){
        if( nums1[i] == nums2[j] ){
            merged.push_back(nums1[i]);
            i++;j++;
        }else if( nums1[i]<nums2[j] ) i++;
        else j++;
    }
    return merged;
}
```
:::
</details>
