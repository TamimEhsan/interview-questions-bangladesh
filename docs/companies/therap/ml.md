---
description: Therap Machine Learning Engineer interview questions, Therap Software Engineer interview details, Therap Machine Learning Engineer interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/therap/ml
---
# Therap Machine Learning Engineer

## Software Engineering Questions

> all code related answers can be answered in any language but python is preferred

<article>

Given an integer N, find all the divisors of N.
</article>

<article>

Given two sorted arrays A and B, combine all the elements of A and B into a new sorted array C.
</article>

<article>

For a binary tree, you are given a table of two columns N and P, where N represents the id of a node in the tree and P represents the parent of that node in the tree. Write a SQL query to find which the `leaf`, `root` and `inner` nodes and output a table fo the following format

| N         | NodeType                                      |
|----------------|--------------------------------------------------|
| 5 | root |
| 2   | inner |
| 3   | leaf |
| 4   | leaf |
| 8   | inner |
| 6   | leaf |
</article>

<article>

You are given an array prices where `prices[i]` is the price of a given stock on the `i`th day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return `0`. @@2026@@

[**💻 Submit Code**](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/)

</article>

<article>

Given an array of size `n`, find the `k`th minimum item in the array. @@2026@@

Similar Problem: [**💻 Submit Code**](https://leetcode.com/problems/kth-largest-element-in-an-array/description/)
</article>

<article>

Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

- Starting with any positive integer, replace the number by the sum of the squares of its digits.
- Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
- Those numbers for which this process ends in 1 are happy.

Return true if n is a happy number, and false if not. @@2026@@

[**💻 Submit Code**](https://leetcode.com/problems/happy-number/description/)

</article>

<article>

You are given an `m x n` integer array grid. There is a robot initially located at the top-left corner (i.e., `grid[0][0]`). The robot tries to move to the bottom-right corner (i.e., `grid[m - 1][n - 1]`). The robot can only move either down or right at any point in time.

An obstacle and space are marked as `1` or `0` respectively in grid. A path that the robot takes cannot include any square that is an obstacle.

Return the number of possible unique paths that the robot can take to reach the bottom-right corner. @@2026@@
[**💻 Submit Code**](https://leetcode.com/problems/unique-paths-ii/description/)

</article>

## Machine Learning Questions

<article>

You are given realtime 120FPS CCTV footage of cars on a road. Assuming you have a model that can accurately identify cars and output an axis oriented bounding box for every detected car on a single frame. 

You have to detect how many distinct cars that camera has seen in a given timeframe, say within an hour. Given that after a car leaves the camera's field of view, it doesn't appear again. 

Describe how you would approach this problem.
</article>

<article>

You need to create a model that classified news articles into three categories, 
- sports
- politics
- entertainment

You have large amount of data but there is no labelled data.
The model has to handle very high throughput of hundreds of articles per second at inference time.

Describe how you would approach this problem.
</article>

<article>

Given model's training and validation accuracy/loss curve, describe what the graph tells about the model and explain your reasoning. Also describe how you can mitigate the issue the model is facing.
</article>

<article>

Explain in brief any one research paper you read recently about ML. briefly describe it's methodology, findings and show atleast one real world implication of the paper.
</article>

<article>

Softmax was used for a multi-label classification task. What are the implications of this choice, and what should have been used instead?  @@2026@@
</article>

<article>

Residual connections in Transformer models help prevent the vanishing gradient problem during training. Explain this mathematically.  @@2026@@
</article>

<article>

Consider two models trained with batch sizes of 8 and 64.

1. Which model is likely to produce a more jagged training curve, and which is likely to produce a smoother one?
2. If the model trained with the larger batch size achieves 5% lower validation accuracy, what could explain this outcome?  @@2026@@
</article>

<article>

What happens if a classifier is trained on a dataset containing three classes without shuffling, such that all samples from Class A are seen first, followed by Class B, and then Class C in every epoch?  @@2026@@
</article>

<article>

Consider an imbalanced dataset in which 99% of samples belong to the negative class and 1% belong to the positive class.

1. Is accuracy an appropriate evaluation metric for this problem? Why or why not?
2. Which metric(s) would be more suitable?
3. Express the chosen metric(s) in terms of TP, FP, TN, and FN.  @@2026@@
</article>

<article>

An LLM has a sequence length of 100, 12 attention heads, and a hidden dimension of 768.

Determine:
1. The shapes of the query (Q), key (K), and value (V) matrices for each attention head.
2. The shape of the attention matrix for each head.  @@2026@@
</article>

<article>

In a Mixture-of-Experts (MoE) model, the router uses an argmax operation to route each token to a single expert. However, the router parameters are not being trained.

Why does this occur, and how can the issue be addressed?  @@2026@@
</article>

<article>

Design a Retrieval-Augmented Generation (RAG) system with a small context window and a vector database.

Follow up questions:
1. How would you chunk documents before indexing them?
2. What would you do if the retrieved content exceeds the model's context window?  @@2026@@
</article>

<article>

You are designing a system prompt with few-shot examples and require the model to output valid JSON.

1. How does the temperature parameter affect the generated output?
2. Would a temperature setting of 0.9 be appropriate for this use case? Why or why not? @@2026@@
</article>
