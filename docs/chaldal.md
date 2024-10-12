# Chaldal

## Introduction

Chaldal.com, founded in 2013, is a grocery e-commerce platform in Bangladesh. They maintain the whole system by themselves. So, they are a tech company too and arguably one the most prestigious tech company in bangaldesh

## Interview Stages

Chaldal interview process has 3 stage

1. **Apltitude Test:** Basic reasoning, vocabulary, maths etc
2. **First round Interview:** There will be 2 seperate interview. The questions asked depend on the interviewer. They may be coding or technical or both. Two yes will lead to next round. 1 yes and 1 no gives you a third chance.
3. **CTO round:** It is kind of a behavioural round. But the questions can be coding or technical.

## Questions

<details>
<summary>
Tell me about yourself? Why do you want to join chaldal
</summary>
<hr>
Answer varies from person to person

</details>

<details>
<summary>
You have been provided a spiral matrix of size NXN along with a coordinate (x, y) as follows. Find the element at the position (x, y) of the matrix.
N = 4, x = 2, y =1

<table >
  <tr><td>1</td><td>2</td><td>3</td><td>4</td></tr>
  <tr><td>12</td><td>13</td><td>14</td> <td>5</td></tr>
  <tr> <td>11</td> <td>16</td><td>15</td><td>6</td></tr>
  <tr><td>10</td> <td>9</td><td>8</td><td>7</td></tr>
</table>

</summary>
<hr>

```C++
The element at position (2, 1) is **12** [*indexed at (1, 0)*]
```

</details>

<details>
<summary>
Given a number in roman format. Convert it to arabic numeral.
</summary>
<hr>

```C++
map<char,int>RtoA;
void preprocess(){
    // Map of romans to Arabic
    RtoA['I'] = 1;      RtoA['V'] = 5;
    RtoA['X'] = 10;     RtoA['L'] = 50;
    RtoA['C'] = 100;    RtoA['D'] = 500;
    RtoA['M'] = 1000;
}

// Roman numerals to Arabic
int RomanToArabic(string R){
    int value = 0;
    int n = R.size();
    for(int i=0;i<n;i++){
        if( R[i+1] && RtoA[ R[i] ] < RtoA[ R[i+1] ] ){
            value+= RtoA[ R[i+1] ] - RtoA[ R[i] ];
            i++;
        } else{
            value+=RtoA[ R[i] ];
        }
    }
    return value;
}
```

</details>

<details>
<summary>
Given a string of characters. Reverse the string without using any library function.
</summary>

```C++
void solve(string &s){

    int n = s.size();

    for(int i=0;i<n/2;i++){

        char temp = s[i];
        s[i] = s[n-i-1];
        s[n-i-1] = temp;
    }
}
```

</details>

<details>
<summary>
Given a string of characters. Check if the given string is a palindrome.
</summary>
<hr>

```C++
bool solve(string s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        if(s[i] != s[n-i-1]) return false;
    }
    return true;
}
```

</details>

<details>
<summary>
Given an positive integer n. Find the sum of even fibonacchi number upto nth term.
</summary>
<hr>

[**💻 Submit Code**](https://supecoder.dev/questions/Sum%20of%20Even%20Fibonacci%20Numbers?questionId=66a6015c5cbe5326054ebf70)

```C++
long long solve(int n){
    if(n == 1 or n == 2) return 0;
    long long sum = 0, first = 1, second = 1;
    for(int fib=2;fib<n;fib++){
        long long temp = first;
        first = second;
        second = temp + second;
        if(second % 2 == 0) sum += second;
    }
    return sum;
}
```

</details>

<details>
<summary>
Given a string of characters [0-9]. Convert it to integer.
</summary>
<hr>

[**💻 Submit Code**](https://supecoder.dev/questions/Convert%20String%20to%20Integer?questionId=66a8cba05cbe532605568a68)

```C++
long long stringToInteger(string &s) {
    int n = s.size();
    long long res = 0;
    for(int i=0;i<n;i++){
        res = (res*10) + (s[i] - '0');
    }
    return res;
}
```

</details>

<details>
<summary>
Given an array of integers. Generate all possible permutation of the given array.
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/permutations/)

```C++
class Solution {
public:
    vector<vector<int>> perms;
    
    void backtrack(vector<int>& nums, vector<int> &perm, int rem){
        if( rem == 0 ){
            perms.push_back(perm);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if( nums[i] == 69 ) continue;
            perm.push_back(nums[i]);
            nums[i] = 69;
            backtrack(nums,perm,rem-1);
            nums[i] = perm.back();
            perm.pop_back();
        }
    }

    vector<vector<int>> permute(vector<int>& nums){
        vector<int> perm;
        backtrack(nums,perm,nums.size());
        return perms;
    }
};
```

</details>

<details>
<summary>
Given an array of integers. Generate all possible subset of the given array.
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/subsets/)

```cpp
class Solution {
public:
    vector<vector<int>> subs;
    vector<int> sub;

    void backtrack(vector<int>& nums, int index){
        if( index == nums.size() ){
            subs.push_back(sub);
            return;
        }
        // take the current value
        sub.push_back(nums[index]);
        backtrack(nums,index+1);
        sub.pop_back();
        // don't take the current value
        backtrack(nums,index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums){
        backtrack(nums,0);
        return subs;
    }
};
```

</details>

<details>
<summary>
Given a regex expression and a string. Check if the regex expression matches with the string.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Each student is assigned to an assignment at a particular location at a specific time. Are there any inconsistencies in the assignments ? Find at least one of them by looking into the input. Then write a code to print all inconsistencies in the assignments. 
</summary>
<hr>

```C++
#include <bits/stdc++.h>
using namespace std;

struct Assignment {
    string Area, Time;
    vector<int> StudentIds;
};

vector<Assignment> getInput() {
    vector<Assignment> res = {
        {"Garden", "A", {2, 9, 1}},
        {"Pond", "M", {2, 8, 5}},
        {"FoodCourt", "A", {4, 8, 7}},
        {"Playground", "M", {1, 7, 2}},
        {"PicnicArea", "M", {7, 3, 9}},
        {"Zoo", "A", {6, 3, 2}},
    };
    return res;
}

int main() {
    vector<Assignment> inputs = getInput();

    map< pair<int, string>, vector<string> > mapping;
    for (Assignment a : inputs) {
        for (auto studentId : a.StudentIds)
            mapping[{studentId, a.Time}].push_back(a.Area);
    }

    for (auto k: mapping) {
        if (k.second.size() > 1) {
            cout << "Student " << k.first.first << " has conflicts at time " << k.first.second << " at : " << endl;

            for (string area : k.second) {
                cout << area << " ";
            }
            cout << endl;
        }
    }
}

```

</details>

<details>
<summary>
Implement Game of Life
</summary>
<hr>

    __________________

|██ 
|  ██ ██
|██ ██ 
|
|
|
|
|

In the game of life, you have a 2D matrix of small squares that can be either alive or dead. The matrix goes through iterations, and on every iteration the squares can die or be revived. This is based on the previous iteration and the below rules
A living square with 1 or less neighbors in the previous iteration will die, as if from loneliness
A living square with 2 or 3 neighbors in the previous iteration will survive, as if from contentment
A living square with 4 or more neighbors in the previous iteration will die, as if from overpopulation
A dead square with exactly 3 neighbors in the previous iteration will be revived, as if by unfulfilled desires
Implement a square matrix of size 20 and set up the initial five (given) living squares. Then run 10 iterations on it, then print the final matrix. 0,0 should be the top left of the matrix, where the first is the row and the second is the column.
matrix size = 20
iterations = 10
initial squares =
[0][0]
[1][1]

```cpp
#include <bits/stdc++.h>

using namespace std;

vector<vector<bool>> matrix(msz, vector<bool>(msz, false));

vector<int> dx = {-1, -1, -1, 0, 0, 1, 1, 1};
vector<int> dy = {-1, 0, 1, -1, 1, -1, 0, 1};


signed main() {
    matrix[0][0] = true;
    matrix[1][1] = true;
    matrix[1][2] = true;
    matrix[2][0] = true;
    matrix[2][1] = true;

    for (int gen = 1; gen <= max_iters; gen++) {
        vector<vector<bool>> next_gen_mat(msz, vector<bool>(msz, false));

        for (int i=0; i<msz; i++) {
            for (int j=0; j<msz; j++) {
                int alive_neighbors = 0;

                for (int k=0; k<8; k++)  {
                    int ni = i + dx[k], nj = j + dy[k];
                    if (ni >= 0 and ni < msz and nj >=0 and nj < msz) {
                        if (matrix[ni][nj]) alive_neighbors++;
                    }
                }

                if (matrix[i][j]) {
                    if (alive_neighbors <= 1) next_gen_mat[i][j] = false;
                    else if (alive_neighbors <= 3) next_gen_mat[i][j] = true;
                    else next_gen_mat[i][j] = false;
                } else {
                    if (alive_neighbors == 3) next_gen_mat[i][j] = true;
                }

            }
        }

        matrix = next_gen_mat;

        cout << "Gen : " << gen << endl;
        for (int i=0; i<msz; i++) {
            for (int j=0; j<msz; j++) {
                if (matrix[i][j]) cout << "██";
                else cout << "  ";
            }
            cout << endl;
        }
        cout << endl;

    }
}
```

</details>

<details>
<summary>
Find digits from a string( Leading zeroes doesn't get counted)
</summary>
<hr>

```

```

</details>

<details>
<summary>
Given a string s containing lowercase lattin letters and another string p containing lowercase lattin letters and * and ?. * means any substring possibly empty. ? means any character but single.

Print yes or no if both strings matches. [RegEx Matching]

</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/regular-expression-matching/)
```C++
int dp[25][25];
    bool Down(string &p,string &s, int i,int j){
    if( p[j] == '*' and p[j-1] == s[i] and dp[i-1][j] == 1 ) return true;
    if( p[j] == '*' and p[j-1] == '.' and dp[i-1][j] == 1 ) return true;
    return false;
}
bool Corner(string &p,string &s, int i,int j){
    if( p[j] == '.' and dp[i-1][j-1] == 1 ) return true;
    if( p[j] == s[i] and dp[i-1][j-1] == 1 ) return true;
    return false;
}
bool Right(string &p,string &s, int i,int j){
    if( p[j] == '*' and dp[i-1][j-2] == 1 ) {
        dp[i-1][j] = 1;
    }
    if( p[j] == '*' and dp[i][j-2] == 1 ) {
        return true;
    }
    return false;
}
bool isMatch(string s, string p) {
    for(int i=0;i<25;i++) for(int j=0;j<25;j++) dp[i][j] = 0;
    dp[0][0] = 1;
    s = "#"+s;
    p = "#"+p;
    int n = s.size(); int m = p.size();

    dp[0][0] = 1;
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            Right(p,s,i,j);
            if( Down(p,s,i,j) or Corner(p,s,i,j) or Right(p,s,i,j)  ) dp[i][j] = 1;
        }
    }
   
    return dp[n-1][m-1];
}
```

</details>

<details>
<summary>
About project: What have you done in the authentication part in your project? Also how did you specify roles for different users.
</summary>
<hr>

```

```

</details>

<details>
<summary>
Write a function which converts decimal number to hexadecimal
</summary>
<hr>

[**💻 Submit Code**](https://supecoder.dev/questions/Convert%20a%20Number%20to%20Hexadecimal?questionId=66acbdc29e71a163cdcece36)

```C++
string decimalToHexa(int decimal){
    string hexa = "";
    while(decimal > 0){
        int remainder = decimal % 16;
        if(remainder < 10){
            hexa = to_string(remainder) + hexa;
        }else{
            hexa = char(remainder + 55) + hexa;
        }
        decimal /= 16;
    }
    return hexa;
}
```

</details>

<details>
<summary>
Write a function which finds all the subset of a given set.
</summary>
<hr>

[**💻 Submit Code**](https://leetcode.com/problems/subsets/description/)
Similar to the question for finding all subset of an array
```C++
vector<vector<int>> ans;
void allsubset(vector<int>&nums,int i,vector<int>&subset){
    if(i>=nums.size()){
        ans.push_back(subset);
        return;
    }
    subset.push_back(nums[i]);
    allsubset(nums,i+1,subset);
    subset.pop_back();
    allsubset(nums,i+1,subset);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<int>subset;
    allsubset(nums,0,subset);
    return ans;
}
```

</details>

<details>
<summary>
Given a set of orderings of letters, determine their topological sorting order. The orderings are provided as strings. 
For example, given the input ["A>B", "B>C", "C>D"], the expected output is "ABCD".
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
<hr>

[**💻 Submit Code**](https://supecoder.dev/questions/Add%20Two%20Numbers%20Represented%20as%20Character%20Arrays?questionId=66acc37d9e71a163cdcee583)
Given two numbers represented as arrays of characters in decimal format, add them and return the result in the same format.
For example, Input: ['1', '2', '3'] and ['4', '5', '6']
Output: Output: ['5', '7', '9']
</summary>
<hr>

```C++
vector<char> sum(vector<char> &A, vector<char> &B){
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    vector<char> sum;
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
