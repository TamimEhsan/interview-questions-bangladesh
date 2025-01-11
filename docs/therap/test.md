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

<article>

Given an array of numbers indicating stock price of `n` consecutive days. If you buy stock at one day and sell at any later day what is the maximum profit that you can get?

[**💻 Submit Code**](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

<details><summary>Show Hint</summary>
Think greedily.
</details>
<details><summary>Show Answer</summary>

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
</article>

<!-- <details>
<summary>
Given an array of numbers indicating stock price of n consecutive days. If you buy stock at one day and sell at any later day what is the maximum profit that you can get?
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

</details> -->