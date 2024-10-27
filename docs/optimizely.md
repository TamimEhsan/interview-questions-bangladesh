# Optimizely Bangladesh

## Introduction

[Optimizely](https://www.optimizely.com/get-started/) has recently expanded its global operations with the establishment of a new office in Bangladesh. Optimizely is a leading software company specializing in digital experience platforms (DXP) that empower businesses to enhance their marketing and product strategies. Optimizely offers a comprehensive suite of tools, including a robust Content Management System (CMS) and an integrated Content Marketing Platform (CMP).

## Interview Stages

#### Software Engineer Intern

For the Software Engineer Intern position, the interview process consists of the following stages:

1. **Phone Screening**: The first stage of the interview process is a phone screening with a recruiter. The recruiter will ask you about your background, experience, and interest in the company. This is also an opportunity for you to ask questions about the role and the company.

2. **Take-Home Assignment**: If you pass the phone screening, you will be given a take-home assignment to complete. It's more of a practical problem-solving task that evaluates your coding skills and problem-solving abilities. You will need to come up with the solution, write a clean code, testcases(edge cases are important), and submit it in a google form. It will be judged based on correctness, efficiency, and code quality.

3. **On-Site Interview**: If you successfully complete the take-home assignment, you will be invited for an on-site interview. This will be a system design interview where you will be asked to design and code a system in 1 hour. Then you will be asked about your code, database design, sql queries, basic networking and OS, OOP concepts, design patterns and project related knowledge. There may be some in depth questions about the technologies in the projects that you have worked on. The whole interview may take around 2.5 hours. If you pass this stage, there may be a final interview with the hiring manager or a behavioral interview.

## Take-Home Assignment Questions

<details>
<summary> Imagine you're working at a T-shirt factory and you manage orders by packing a bulk amount of shirts into a certain number of bags. For every order, you have a specification of how many bags you have to fill and a fixed number of shirts to fill them with. The requirement is to distribute the shirts in the bags as evenly as possible.

For example, if there are 100 shirts and 10 bags, then each bag will get 10 shirts. However, sometimes the shirt factory will have production errors, and it might produce the wrong number of shirts. It's not going to be 200 shirts instead of 100, but there will be some minor deviation from the original number.

Write a function to solve this problem. Define the function name, input parameters, and output type as you wish. The goal is to minimize the deviation of the number of shirts in each bag, i.e., distribute as evenly as possible, with the important aspect that only a single bag can have a different number of shirts. For example, if you have 10 bags and 103 shirts, then 9 bags can have 10 shirts, and the last bag can have 13 shirts. Here the deviation is 13 - 10 = 3, which is the minimum deviation.
</summary>
[Ans]
</details>

<details>
<summary>Task Management Software Reviewer Assignment
    
Let's say you are building a task management software (get familiar with JIRA, Trello, or Asana). Each task in the system has a few properties:
- `taskId`: An integer identifier.
- `assigneeName`: The person who is assigned to or responsible for the task.
- `reviewerName`: The person responsible for reviewing the task (think code review) - this can be null.
- `status`: The current state of the task, which could be "todo", "in-progress", "in-review", or "done".
- `estimateInHours`: The number of hours estimated to complete this task for the assignee.
<hr>
Assume that you are given the list of tasks for a single team. We want to build a function that would do a simple recommendation for reviewers for each task. Given the list of tasks with the basic properties, our function should return a modified list where each task has a non-null `reviewerName` property, given that the task does not already have an assigned reviewer. The function should ensure that the reviewers are distributed as evenly as possible across all tasks and that the total effort for each team member is minimized.
<hr>
Constraints / Assumptions:
- Some tasks in the list will already have a reviewer assigned to them.
- You can assume all the tasks have one person assigned.
- You can assume that everyone on the team has at least one task assigned to them.
- You should only suggest reviewers for tasks that are in the "in-review" status.
- You should try to distribute reviewers as evenly as possible across all the tasks, 
  so that one person does not review too many tasks.
- You should try to minimize the total effort in terms of the number of hours
  for each team member. 
Assume that reviewing a task takes 1/3 of the `estimateInHours` for that task.

</summary>
[Answer]
</details>

## On-Site Interview Questions

<details>
<summary>Design a Backend for a Simplified Version of Internet Banking 

###### Acceptance Criteria:

- **View Account Balance**: Users can view their current account balance.
- **Transfer Money**: Users can transfer money to another registered user by providing the recipient's phone number and amount.
- **Pay Utility Bill**: Users can pay their utility bill to utility providers. They can choose the provider from a list of providers in the system.
- **Top N Users by Transactions**: Given a list of transactions, write a function that would return the top N users based on the number of transactions, in descending order of transaction volume. The result should include the user name, phone number, and number of transactions.
- **View Transaction History**: Users can view their transaction history, ordered by most recent. The history should include all kinds of transactions. For user transactions, it should include the recipient’s phone number and the amount. For bill payments, it should include the utility provider name. All transactions should also have the payment date.

###### Bonus Problem:

- **Promo Codes Management**: Admin users can create promo codes in the system, which users can use while paying bills. Each promo code can be used a certain number of times per user, and each promo code has a certain amount of cashback.
- **Promo Codes Analytics**: Admin users can see a list of all promo codes, including the total number of uses, the average number of times utilized per user, and the total amount of cashback disbursed for each promo code. This list should be ordered by the most recent promo code first.
</summary>
[Ans]
</details>
