# Rokomari

|                 |                          |
| :-------------- | :----------------------- |
| Founding year   | 2012                     |
| Company Website | https://www.rokomari.com |

## Introduction
[Rokomari](https://www.rokomari.com) is Bangladesh’s leading online bookstore platform, offering millions of books from local and international publishers along with gadgets, stationery, and more. With fast delivery, secure payment, and exclusive deals, Rokomari has become the go-to destination for book readers.

In this article, the questions of recruitment test for Backend Developer role at Rokomari is presented. The test was taken on 13th September, 2025 at their Motijheel Office.

## Interview Stages
- **Written test**: The total time is 2 hours.
- **On site Interview**

## Written Test Questions

### Backend Technology (40 Marks)

- Basic scenario based questions from backend technology
- Complex SQL query (15 marks)

### Problem Solving (60 Marks)


<article>

You are given a tree with n nodes and e edges. Each node has a value. Then you are given Q queries. In each query, you are given a node number, and you need to return the XOR of all nodes in the subtree rooted at that node (including the node itself).
<details><summary>Show Answer</summary>

```C++
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
vector<int> adj[MAXN];
int subXor[MAXN];

void dfs(int u, int p) {
    subXor[u] = u;
    for (int v : adj[u]) {
        if (v == p) continue;
        dfs(v, u);
        subXor[u] ^= subXor[v];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, e;
    cin >> n >> e;

    while(e--) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    dfs(1, -1);

    int Q; cin >> Q;
    while (Q--) {
        int node; cin >> node;
        cout << subXor[node] << "\n";
    }
}
```
</details>
</article>


<article>

A very large number (length between 50 to 100 digits) in string format is given. You need to check if the number is divisible by 7. Solve this for t test cases.
<details><summary>Show Answer</summary>

```C++
#include <bits/stdc++.h>
using namespace std;

bool divisibleBy7(const string &num) {
    int rem = 0;
    for (char c : num) {
        rem = (rem * 10 + (c - '0')) % 7;
    }
    return rem == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string num; cin >> num;
        cout << (divisibleBy7(num) ? "YES" : "NO") << "\n";
    }
}
```
</details>
</article>


<article>

Implement Merge Sort for t test cases.
<details><summary>Show Answer</summary>

```C++
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int l, int m, int r) {
    vector<int> left(a.begin() + l, a.begin() + m + 1);
    vector<int> right(a.begin() + m + 1, a.begin() + r + 1);

    int i = 0, j = 0, k = l;
    while (i < left.size() && j < right.size()) {
        if (left[i] <= right[j]) a[k++] = left[i++];
        else a[k++] = right[j++];
    }
    while (i < left.size()) a[k++] = left[i++];
    while (j < right.size()) a[k++] = right[j++];
}

void mergeSort(vector<int> &a, int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        mergeSort(arr, 0, n - 1);
        for (int x : arr) cout << x << " ";
        cout << "\n";
    }
}
```
</details>
</article>


<article>

A non-decreasing array is given. A new group is formed whenever the difference between two consecutive numbers is greater than 1 (the later number starts a new group). You are allowed to remove any elements from the array to maximize the number of groups. Return the maximum number of groups you can form. Solve this for t test cases.

[**💻 Submit Code**](https://codeforces.com/problemset/problem/2114/C)
<details><summary>Show Answer</summary>

```C++
#include <bits/stdc++.h>
using namespace std;

int maxGroups(vector<int>& arr) {
    int n = arr.size();
    int groups = 0;
    for (int i = 0; i < n;) {
        groups++;
        int last = arr[i];
        while (i < n && arr[i] - last <= 1) i++;
    }
    return groups;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        sort(arr.begin(), arr.end());
        cout << maxGroups(arr) << "\n";
    }
}
```
</details>
</article>


<article>

For a given number, find and print all of its distinct prime divisors. Solve this for t test cases.
<details><summary>Show Answer</summary>

```C++
#include <bits/stdc++.h>
using namespace std;

vector<long long> primeDivisors(long long n) {
    vector<long long> primes;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            primes.push_back(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) primes.push_back(n);
    return primes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        vector<long long> primes = primeDivisors(n);
        for (long long p : primes) cout << p << " ";
        cout << "\n";
    }
}
```
</details>
</article>

### Analytical (10 Marks)

<article>

There are 3 switches S1, S2, and S3 outside a server room. Inside the room, there are 3 cooling fans, and each fan is connected to exactly one switch. However, the switches are not labeled, so you don’t know which switch controls which fan. You are allowed to enter the server room only once. How can you figure out which switch controls which fan?
</article>
