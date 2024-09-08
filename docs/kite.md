# Kite Games Studio

## Introduction
[Kite Games Studio (KGS)](https://www.kitegamesstudio.com/), founded in 2014, is a leading mobile application development firm in Bangladesh. Based in Mohakhali DOHS, Dhaka, KGS specializes in developing software for both iOS and Android platforms, along with building websites. The company is known for its emphasis on competitive programming skills, making it an excellent choice for talented **competitive programmers** looking to join a dynamic and innovative team.


## Interview Stages

1. **Online Contest**: Candidates participate in an online programming contest that typically consists of 5-6 problems to be solved within 3-4 hours. The contest may be hosted on platforms like Toph, Hackerrank, or other online judges. Candidates are shortlisted for the next round based on their ranking in this contest.

2. **Technical Round**: This round primarily focuses on coding problems and some basic Java concepts. The interviewers assess the candidate's problem-solving approach and how they think through the problems.

## Technical Round Questions

<details>
<summary>
A permutation P is good if P[i] % i == 0 or i % P[i] == 0 for 1 ≤ i ≤ N. Given N ≤ 20, count the number of good permutations.
</summary>
<hr>

**Solution:** The final solution uses Bitmask DP to efficiently count the number of good permutations that satisfy the given condition.

```cpp
#include <iostream>
#include <vector>

using namespace std;

int N; // Global variable for the size of the permutation
vector<int> dp; // DP array to store results of subproblems

// Recursive function to count the number of good permutations using Bitmask DP
int solve(int mask) {
    if (mask == (1 << N) - 1) return 1; // Base case: all elements are placed
    if (dp[mask] != -1) return dp[mask]; // Return already computed result

    int pos = __builtin_popcount(mask) + 1; // Position to place the next element (1-based)
    dp[mask] = 0; // Initialize current DP state

    for (int i = 0; i < N; i++) {
        // Check if the i-th element is not used and it satisfies the condition
        if (!(mask & (1 << i)) && (pos % (i + 1) == 0 || (i + 1) % pos == 0)) {
            dp[mask] += solve(mask | (1 << i)); // Recur with updated mask
        }
    }
    return dp[mask];
}

int main() {
    cout << "Enter the value of N (N <= 20): ";
    cin >> N;

    dp.assign(1 << N, -1); // Initialize DP array with -1 for all masks
    int result = solve(0); // Start with an empty mask
    cout << "Number of good permutations for N = " << N << " is: " << result << endl;

    return 0;
}
```
</details>


<details>
<summary>
Design a data structure to add integers and remove the most frequent element, with ties broken by recency.
</summary>
<hr>

Design a data structure that supports the following two operations:

1. **add(val)**: Add an integer `val` to the data structure.
2. **remove()**: Remove the most frequent element in the data structure. If there are multiple elements with the same highest frequency, print the element that was added last.

The constraints for the operations are:

* Total number of operations ≤ 10<sup>5</sup>
* 0 ≤ val ≤ 10<sup>9</sup>

**Solution:**

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class FreqStack {
    unordered_map<int, int> freq;                    // Map to store frequency of elements
    unordered_map<int, vector<int>> group;             // Map to store groups of elements by frequency
    int maxFreq = 0;                                 // Variable to track the maximum frequency

public:
    // Function to add an integer
    void push(int x) {
        freq[x]++;                                   // Increase the frequency of the element
        maxFreq = max(maxFreq, freq[x]);             // Update the max frequency
        group[freq[x]].push_back(x);                 // Add the element to the appropriate group
    }

    // Function to remove and return the most frequent element (with ties broken by recency)
    int pop() {
        int x = group[maxFreq].back();               // Get the most recent element with the highest frequency
        group[maxFreq].pop_back();                   // Remove it from the group
        if (group[maxFreq].empty()) {                // If no more elements in the group, reduce max frequency
            maxFreq--;
        }
        freq[x]--;                                   // Decrease the frequency of the element
        return x;                                    // Return the most frequent element
    }
};

int main() {
    FreqStack fs;
    fs.push(5);
    fs.push(7);
    fs.push(5);
    fs.push(7);
    fs.push(4);
    fs.push(5);
    
    cout << fs.pop() << endl;  // Should print 5
    cout << fs.pop() << endl;  // Should print 7
    cout << fs.pop() << endl;  // Should print 5
    cout << fs.pop() << endl;  // Should print 4
    
    return 0;
}
```
</details>

<details> 
<summary>
What are the main concepts of OOP? 
</summary> 
<hr>
The main concepts of Object-Oriented Programming (OOP) are:
Abstraction, Inheritance, Encapsulation, Polymorphism.
</details> 


<details>
<summary>
Implement the Singleton pattern.
</summary>
<hr>

To provide better understanding, here’s how the discussion typically goes. The questions aren't directly asked; instead, they are discussed in the context of a coding problem or a concept. (I am sharing real experience of mine):

**Interviewer:** Here's a scenario: you need to create a class for database connections, and as every developer of your team needs to use the same database connection, you should only allow one instance of this class.  How would you implement this in Java?  
**Candidate:** I would include a static variable within the class, initially set to null. I'd also create a static method called "connection." This method would first check if the static variable is null. If it is, it would create a new object, assign it to the variable, and then return it. If the variable is not null, it would simply return the existing object.  
**Interviewer:** But if someone creates an object of this class, wouldn't they get a different object?  
**Candidate:** To prevent that, I would make the constructor private.  
**Interviewer:** Is this approach feasible? Would you need to do anything else?  
**Candidate:** Yes, it's feasible, and no further changes are necessary.  
**Interviewer:** The process you described has a specific name in design patterns. Do you recall what it's called?  
**Candidate:** Sorry, I don't know the name.  
**Interviewer:** It's called the Singleton pattern.

**Solution:** Below is the implementation of the Singleton pattern in Java:

::: code-group
```java [Single Threaded]
// Singleton class to manage database connections
public class DatabaseConnection {
    // Static variable to hold the single instance of the class
    private static DatabaseConnection instance = null;

    // Private constructor to prevent instantiation
    private DatabaseConnection() {
        // Initialization code, e.g., establish database connection
    }

    // Public method to provide access to the single instance
    public static DatabaseConnection getInstance() {
        // Check if instance is null, create new one if needed
        if (instance == null) {
            instance = new DatabaseConnection();
        }
        // Return the existing instance
        return instance;
    }
}
```
```go [Thread Safe]
var lock = &sync.Mutex{}

type single struct {
}

var singleInstance *single

func getInstance() *single {
    if singleInstance == nil {
        lock.Lock()
        defer lock.Unlock()
        if singleInstance == nil {
            fmt.Println("Creating single instance now.")
            singleInstance = &single{}
        } else {
            fmt.Println("Single instance already created.")
        }
    } else {
        fmt.Println("Single instance already created.")
    }

    return singleInstance
}
```
:::

> [!WARNING] 
> The given single threaded implementation of the singleton pattern though widely popular, is not thread-safe. If a multithreaded application were to get the connection, there is a chance that the connection is initialized multiple times. Ask the interviewer to make sure if they want it to be thread-safe. You can check this [wikipedia section](https://en.wikipedia.org/wiki/Double-checked_locking#Usage_in_Java) if you want to learn more.
</details>

## Online Round Questions

<details>
<summary>
You're at a buffet with various food items. Each food item has a deliciousness factor and nutrient values. You need to maximize the total deliciousness of the foods you eat. Additionally, for health reasons, each nutrient value must occur in an odd number of food items.
</summary>
<hr>

[A. Time for a Treat](https://toph.co/c/recruitment-contest-by-kite-games-studio)

**Solution:** 

```cpp
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
#define MAX 1003

typedef long long ll;

#define bitToggle(n, i) ((1LL << i) ^ n)

int deliciousness[MAX], nutrientMask[MAX], numItems, numNutrients;
ll dp[MAX][1035];

ll maximizeDeliciousness(int itemIndex, int nutrientState) {
    if (itemIndex == numItems) {
        if (nutrientState == ((1 << numNutrients) - 1)) return 0LL;
        return -1e15;
    }
    if (~dp[itemIndex][nutrientState]) return dp[itemIndex][nutrientState];
    return dp[itemIndex][nutrientState] = max(
        maximizeDeliciousness(itemIndex + 1, nutrientState),
        deliciousness[itemIndex] + maximizeDeliciousness(itemIndex + 1, nutrientState ^ nutrientMask[itemIndex])
    );
}

void solve() {
    cin >> numItems >> numNutrients;
    for (int i = 0; i < numItems; i++) {
        int numNutrientsInItem; cin >> deliciousness[i] >> numNutrientsInItem;
        nutrientMask[i] = 0;
        for (int j = 0; j < numNutrientsInItem; j++) {
            int nutrient; cin >> nutrient;
            nutrientMask[i] = bitToggle(nutrientMask[i], nutrient - 1);
        }
    }
    memset(dp, -1, sizeof dp);
    cout << max(0LL, maximizeDeliciousness(0, 0)) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int testCases = 1;
    cin >> testCases;

    for (int caseNum = 1; caseNum <= testCases; caseNum++) {
        cout << "Case #" << caseNum << ": ";
        solve();
    }

    return 0;
}

```
</details>


<details>
<summary>
You have a 2D grid representing a village. 'X' denotes farmer-owned land, and '.' denotes government-owned land. Connected 'X' areas belong to the same farmer. If two connected 'X' areas match under any 90° rotation, they also belong to the same farmer. Count the number of unique farmers in the village.
</summary>
<hr>

[B. Farmers](https://toph.co/c/recruitment-contest-by-kite-games-studio)

**Solution:** 
```cpp
#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
#define MAX 200005

typedef long long ll;
typedef vector<string> Grid; 

string grid[55];
map<Grid, int> farmerMap;
int numRows, numCols, farmerCount, visited[55][55];

int rowOffsets[] = {+1, -1, +0, +0};
int colOffsets[] = {+0, +0, +1, -1};

#define isValid(nx, ny) (nx >= 0 && nx < numRows && ny >= 0 && ny < numCols)

struct Region {
    int xMin, xMax, yMin, yMax;
    Region() {
        xMin = 100;
        xMax = -100;
        yMin = 100;
        yMax = -100;
    }
    Region(int a, int b, int c, int d) {
        xMin = a;
        xMax = b;
        yMin = c;
        yMax = d;
    }
};

Region mergeRegions(Region a, Region b) {
    Region result;
    result.xMin = min(a.xMin, b.xMin);
    result.xMax = max(a.xMax, b.xMax);
    result.yMin = min(a.yMin, b.yMin);
    result.yMax = max(a.yMax, b.yMax);
    return result;
}

Region exploreRegion(int x, int y) {
    visited[x][y] = 1;
    Region result(x, x, y, y);
    for (int i = 0; i < 4; i++) {
        int newX = x + rowOffsets[i];
        int newY = y + colOffsets[i];
        if (isValid(newX, newY) && !visited[newX][newY] && grid[newX][newY] == 'X') {
            result = mergeRegions(result, exploreRegion(newX, newY));
        }
    }
    return result;
}

Grid rotateGrid(Grid v) {
    int curRows = v.size(), curCols = v[0].size();
    Grid rotated;
    for (int j = 0; j < curCols; j++) {
        string row(curRows, '?');
        rotated.push_back(row);
    }

    for (int i = 0; i < curRows; i++) {
        for (int j = 0; j < curCols; j++) {
            rotated[j][curRows - i - 1] = v[i][j];
        }
    }

    return rotated;
}

int checkRegion(Region region) {
    Grid subgrid;
    for (int i = region.xMin; i <= region.xMax; i++) {
        string row = "";
        for (int j = region.yMin; j <= region.yMax; j++) {
            row += grid[i][j];
        }
        subgrid.push_back(row);
    }
    
    if (farmerMap[subgrid]) return 0;
    
    Grid rotated = rotateGrid(subgrid);
    if (farmerMap[rotated]) return 0;
    
    rotated = rotateGrid(rotated);
    if (farmerMap[rotated]) return 0;
    
    rotated = rotateGrid(rotated);
    if (farmerMap[rotated]) return 0;
    
    farmerMap[subgrid] = 1;
    return 1;
}

void solve() {
    string line;
    while (getline(cin, line)) {
        grid[numRows++] = line;
    }
    numCols = grid[0].size();

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (grid[i][j] == 'X' && !visited[i][j]) {
                Region region = exploreRegion(i, j);
                farmerCount += checkRegion(region);
            }
        }
    }

    cout << farmerCount << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int testCases = 1;
    cin >> testCases;
    cin.ignore(); // Ignore the newline after the number of test cases

    for (int caseNum = 1; caseNum <= testCases; caseNum++) {
        cout << "Case #" << caseNum << ": ";
        solve();
    }

    return 0;
}

```
</details>



<details>
<summary>
You need to write a program to simulate a Linux terminal on an old computer. You'll be given commands like "mkdir", "ls", "rm", "pwd", and "cd", and you need to simulate their behavior, printing the appropriate output or error messages.
</summary>
<hr>

[C. Directory Specialist](https://toph.co/c/recruitment-contest-by-kite-games-studio)

**Solution:** 
```cpp
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
#define MAX 200005

typedef long long ll;

set<string> folder[MAX];
map<string, int> get_idx;
map<int, string> get_name;
int par[MAX];

string get_sub(string &s) {
	string sub = "";
	for(int i = (int)s.size() - 1; i >= 0; i--) {
		if(s[i] == '/')
			break;
		sub = s[i] + sub;
	}
	return sub;
}

void dfs(int idx) {
	for(auto sub : folder[idx]) {
		int cur = get_idx[sub];
		dfs(cur);
	}
	folder[idx].clear();
}
void solve() {
    string s;
    int avail = 2;
    
    par[1] = 1;
    get_idx["KGS"] = 1;
    get_name[1] = "KGS";
    int idx = 1;

    while(getline(cin, s)) {
    	if(s.size() == 0)
    		continue;
    	if(s[0] == 'm') {
    		string sub = get_name[idx] + "/" + s.substr(6);

    		if(folder[idx].find(sub) != folder[idx].end()) {
    			cout << "Error: Already Exists\n";
    		} else {
    			folder[idx].insert(sub);
    			get_idx[sub] = avail;
    			get_name[avail] = sub;
    			par[avail] = idx;
    			avail++;
    		}
    	} else if(s[0] == 'l') {
    		for(auto sub : folder[idx]) {
    			cout << get_sub(sub) << "\n";
    		}
    	} else if(s[0] == 'r') {
    		string sub = get_name[idx] + "/" + s.substr(3);
    		if(folder[idx].find(sub) == folder[idx].end()) {
    			cout << "Error: No Such Directory\n";
    		} else {
    			folder[idx].erase(folder[idx].find(sub));
    			dfs(get_idx[sub]);
    		}
    	} else if(s[0] == 'p') {
    		cout << get_name[idx] << "\n";
    	} else if(s[0] == 'c' && s.back() != '.') {
    		string sub = get_name[idx] + "/" + s.substr(3);
    		if(folder[idx].find(sub) == folder[idx].end()) {
    			cout << "Error: No Such Directory\n";
    		} else {
    			idx = get_idx[sub];
    		}
    	} else if(s[0] == 'c' && s.back() == '.') {
    		idx = par[idx];
    	}
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int TC = 1;

    //cin >> TC;

    for(int cs = 1; cs <= TC; cs++) {
        //cout << "Case " << cs << ": ";
        solve();
    }

    return 0;
}

```
</details>


<details>
<summary>
You have a 2D grid representing a field with crop fields and godowns. Harvesters start at godowns and collect crops from fields, bringing them back to their godown. The first harvester must collect from a specific number of fields. You need to calculate the minimum total time for all harvesters to collect all crops.
</summary>
<hr>

[D. Crop Harvesting](https://toph.co/c/recruitment-contest-by-kite-games-studio)

**Solution:** 

```cpp


```
</details>

<details>
<summary>
You have a list of unique strings and an empty list. You'll be given queries to add strings to the empty list, delete strings from it, and count the number of strings between two given strings in the list after sorting it.
</summary>
<hr>

[E. A Simple String Problem](https://toph.co/c/recruitment-contest-by-kite-games-studio)

You are given a list <i>L</i> of <i>N</i> unique strings and an initially empty list <i>P</i>. You need to process <i>Q</i> queries of the following types:

* **add i f:** Add the string <i>L[i]</i> to the list <i>P</i> a total of <i>f</i> times.
* **delete i f:** Let <i>t</i> be the number of occurrences of string <i>L[i]</i> in list <i>P</i>. Delete min(<i>f</i>, <i>t</i>) occurrences of <i>L[i]</i> from list <i>P</i>.
* **count i j:** Sort the elements of list <i>P</i> in lexicographic order, then count the number of strings in <i>P</i> that are between <i>L[i]</i> and <i>L[j]</i> (inclusive).

**Constraints:**

* **1 ≤ N ≤ 10<sup>5</sup>** - Number of strings in list <i>L</i>.
* The total length of all strings in <i>L</i> is at most 2 × 10<sup>6</sup>, and each string length is between 1 and 10<sup>6</sup> characters.
* **1 ≤ Q ≤ 10<sup>5</sup>** - Number of queries.
* For **add i f** and **delete i f** queries: **1 ≤ i ≤ N** and **1 ≤ f ≤ 10<sup>5</sup>**.
* For **count i j** queries: **1 ≤ i ≤ N** and **1 ≤ j ≤ N**.

**Solution:** 

```cpp
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define MOD 1000000007
#define MAX 200005

typedef long long ll;

ll arr[MAX];
int N;

struct info{
    ll sum;
    info(){
        sum=0;
    }
    info(ll x){
        sum=x;
    }
    void show(){
        cout<<"Sum = "<<sum<<"\n";
    }
};
info tree[3*MAX];

info leaf(int i){
    return info(arr[i]);
}
info outOfRange(){
    return info(0);
}
info Set(ll x){
    return info(x);
}
info merge(info x, info y){
    info temp;
    temp.sum=x.sum+y.sum;
    return temp;
}


void build(int node, int l,int r)
{
    if(l==r)
    {
        tree[node]=leaf(l);
        return;
    }
    int mid=(l+r)/2;
    build(node*2,l,mid);
    build(node*2+1,mid+1,r);
    tree[node]=merge(tree[node*2],tree[2*node+1]);
}

info query(int node,int l,int r,int i,int j)
{
    if(i>r || j<l)
        return outOfRange();
    if(l>=i && r<=j)
        return tree[node];
    int mid=(l+r)/2;
    auto x=query(node*2,l,mid,i,j);
    auto y=query(node*2+1,mid+1,r,i,j);
    return merge(x,y);
}

void update(int node,int l,int r,int pos,ll val)
{
    if(pos>r || pos<l)
        return;
    if(l==r)
    {
        tree[node]=Set(val);
        return;
    }
    int mid=(l+r)/2;
    if(pos<=mid)
        update(node*2,l,mid,pos,val);
    else
        update(node*2+1,mid+1,r,pos,val);

    tree[node]=merge(tree[node*2],tree[2*node+1]);
}

void print(int node, int l,int r)
{
    cout<<"["<<l<<","<<r<<"]:--> ";
    tree[node].show();
    if(l==r)
        return;
    int mid=(l+r)/2;
    print(node*2,l,mid);
    print(node*2+1,mid+1,r);
}
void print(){
    print(1,0,N-1);
}
void build(int n){
    N=n;
    build(1,0,N-1);
}
void update(int pos, ll val){
    update(1,0,N-1,pos,val);
}
ll query(int x, int y){
    auto ans = query(1,0,N-1,x,y); 
    return ans.sum;
}

int mp[MAX];

void solve() {
    int n; cin >> n;
    vector<pair<string,int>> lst;
    for(int i = 0; i < n; i++) {
    	string s; cin >> s;
    	lst.push_back({s, i});
    }
    sort(lst.begin(), lst.end());
    int idx = 0;
    for(auto [s, pos] : lst) {
    	mp[pos] = idx++;
    }
    // for(int i = 0; i < n; i++) {
    // 	cout << i << " " << mp[i] << endl;
    // }

    build(n);

    int q; cin >> q;
    while(q--) {
    	string qr;
    	int a, b;
    	cin >> qr >> a >> b;
    	if(qr[0] == 'a') {
    		a = mp[a - 1];
    		ll cur = query(a, a);
    		update(a, cur + b);
    	} else if(qr[0] == 'd') {
    		a = mp[a - 1];
    		ll cur = query(a, a);
    		update(a, max(0LL, cur - b));
    	} else {
    		a = mp[a - 1];
    		b = mp[b - 1];
    		if(a > b) swap(a, b);
    		cout << query(a, b) << "\n";
    	}
    	// print();
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int TC = 1;

    //cin >> TC;

    for(int cs = 1; cs <= TC; cs++) {
        //cout << "Case " << cs << ": ";
        solve();
    }

    return 0;
}

```
</details>
