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
Given n inputs each with n bits. Output a number not given which has n bits too.
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
