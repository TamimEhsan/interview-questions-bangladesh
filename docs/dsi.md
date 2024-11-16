# DSI

## Introduction
[Dynamic Solution Innovators Ltd](https://www.dsinnovators.com/) is an international software company based in Dhaka, Bangladesh. They have been successfully providing software services since 2001 in both the local and global market.
## Interview Stages
DSI takes a on campus written test first. The questions contain some coding problem, Database, writting sql, OOP etc
The second stage is face to face interview

## Questions
<details>
<summary>
There is an array initially containing n numbers. then each of the numbers of the array is multiplied by 2. Now the array is 2 * n size and each element of the array gets shuffled. You are given the shuffled array of size 2 * n. You have to restore the original array.
</summary>
<hr>

[**💻 Submit Code**](https://supecoder.dev/questions/Find%20Original%20Array%20From%20Doubled%20Array?questionId=66ae10189e71a163cdd2011b)

```C++
bool restoreDouble(vector<int> input,vector<int>& output){
    int n = input.size();
    map<int,int> marked;
    sort(input.begin(),input.end());
    for(int i=0;i<n;i++){
        if( marked[ input[i] ] == 0 ) {
            output.push_back( input[i] );
            marked[ 2*input[i] ] ++;
        }else{
            marked[ input[i] ]--;
        }
    }
    for( auto entry:marked ){
        if( entry.second != 0 ) return false;
    }
    return true;
}
```
</details>

<details>
<summary>
Given n inputs each with n bits, output a number which was not in the given inputs and has n bits too.
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
What are the 7 layers in OSI networking model? 
</summary>
<hr>

![](https://cf-assets.www.cloudflare.com/slt3lc6tev37/6ZH2Etm3LlFHTgmkjLmkxp/59ff240fb3ebdc7794ffaa6e1d69b7c2/osi_model_7_layers.png)

</details>

<details>
<summary>
Given a string s, find the longest substring between two identical character.ex: afgksia -> ans: fgksi
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given a number n.return true if you find a middle element k such that sum of 1 to k and sum from k to n are equal.if there no one return false.
    ex: 49.
	output: true.
	explanation: 1 + 2 + ... + 35 = 35 + 36 + ... + 49
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Apply database normalization technique to the following table

student table:
|student_id | name    | course_name | course_fee |
| :-: | :- | :- | :-: |
| 1 	   | shakib  | DSA         | 400	  |
| 2 	   | rakib   | Algorithms  | 100	  |
| 3 	   | showrov | Networking  | 300	  |
| 4 	   | kalam   | Algorithms  | 100	  |
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Explain ACID properties
</summary>
<hr>
[Answer]
</details>


<details>
<summary>
Explain static keyword
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
What is significance of this below operation?

```
a=a^b;
b=a^b;
a=a^b;
```
   
</summary>
<hr>
Swaps the value of a and b without a third variable using bit manipulation
</details>

<details>
<summary>
Difference between authentication and authorization
</summary>
<hr>
[Answer]
</details>

<details>
<summary>
Given three value a,b,c, write a program to determine if they can made a traingle
</summary>
<hr>
[Answer]
</details>



