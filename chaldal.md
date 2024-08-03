# Chaldal

## Introduction
Chaldal.com, founded in 2013, is a grocery e-commerce platform in Bangladesh. They maintain the whole system by themselves. So, they are a tech company too and arguably one the most prestigious tech company in bangaldesh
## Interview Stages
Chaldal interview process has 3 stage

1. Apltitude Test: Basic reasoning, vocabulary, maths etc
2. First round Interview :  There will be 2 seperate interview. The questions asked depend on the interviewer. They may be coding or technical or both. Two yes will lead to next round. 1 yes and 1 no gives you a third chance.
3. CTO round: It is kind of a behavioural round. But the questions can be coding or technical.

## Questions

<details>
<summary>
Tell me about yourself? Why do you want to join chaldal
</summary>
<br>
Answer varies from person to person
<br>
</details>

<details>
<summary>
You have been provided a spiral matrix of size NXN along with a coordinate (x, y) as follows. Find the element at the position (x, y) of the matrix.
N = 4, x = 2, y =1 

```math
$$\begin{bmatrix}
1 & 2 & 3 & 4 \\
12 & 13 & 14 & 5 \\
11 & 16 & 15 & 6 \\
10 & 9 & 8 & 7
\end{bmatrix}$$
```
</summary>
<br>

```C++
The element at position (2, 1) is **12** [*indexed at (1, 0)*]
```
<br>
</details>

<details>
<summary>
Given a number in roman format. Convert it to arabic numeral.
</summary>
<br>

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

<br>
</details>


<details>
<summary>
Given a string of characters. Reverse the string without using any library function.
</summary>
<br>
[Answer]
<br>
</details>


<details>
<summary>
Given a string of characters. Check if the given string is a palindrome.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given an positive integer n. Find the sum of even fibonacchi number upto nth term.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given a string of characters [0-9]. Convert it to integer.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given an array of integers. Generate all possible permutation of the given array.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given an array of integers. Generate all possible subset of the given array.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given a regex expression and a string. Check if the regex expression matches with the string.
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Each student is assigned to an assignment at a particular location at a specific time. Are there any inconsistencies in the assignments ? Find at least one of them by looking into the input. Then write a code to print all inconsistencies in the assignments. 
</summary>

<br>

```C++

/*
class Assignment {
	String Area
	String Time
	List<Integer> StudentIds
}

getInput() {
	return
    	[
        	Assignment { Area = "Garden", 	Time = "A", StudentIds = [2,9,1] }
        	Assignment { Area = "Pond",   	Time = "M", StudentIds = [2,8,5] }
        	Assignment { Area = "FoodCourt",  Time = "A", StudentIds = [4,8,7] }
        	Assignment { Area = "Playground", Time = "M", StudentIds = [1,7,2] }
        	Assignment { Area = "PicnicArea", Time = "M", StudentIds = [7,3,9] }
        	Assignment { Area = "Zoo",    	Time = "A", StudentIds = [6,3,2] }
    	]
}

main() {
	assignments = getInput()
    
	// Do something with the assignments list here ...
}
*/
// Solution :

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
    
<br>
</details>

<details>
<summary>
Implement Game of Life
</summary>

<br>

	__________________
|██                                	 
|   ██ ██                           	 
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
    
<br>
</details>




<details>
<summary>
Find digits from a string( Leading zeroes doesn't get counted)
</summary>
<br>

```
```

<br>
</details>

<details>
<summary>
Given a string s containing lowercase lattin letters and another string p containing lowercase lattin letters and * and ?. * means any substring possibly empty. ? means any character but single.

Print yes or no if both strings matches. [RegEx Matching]
</summary>
<br>

```
```

<br>
</details>

<details>
<summary>
About project: What have you done in the authentication part in your project? Also how did you specify roles for different users.
</summary>
<br>

```
```

<br>
</details>

<details>
<summary>
Write a function which converts decimal number to hexadecimal
</summary>
<br>

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

<br>
</details>

<details>
<summary>
Write a function which finds all the subset of a given set.
</summary>
<br>

```
```

<br>
</details>

<details>
<summary>
Given a set of orderings of letters, determine their topological sorting order. The orderings are provided as strings. 
For example, given the input ["A>B", "B>C", "C>D"], the expected output is "ABCD".
</summary>
<br>
[Answer]
<br>
</details>

<details>
<summary>
Given two numbers represented as arrays of characters in decimal format, add them and return the result in the same format.
For example, Input: ['1', '2', '3'] and ['4', '5', '6']
Output: Output: ['5', '7', '9']
</summary>
<br>
[Answer]
<br>
</details>
