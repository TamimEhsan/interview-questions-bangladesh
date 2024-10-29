# Therap Database Engineer

## Interview Stages

The selection process has 4 stages,

1. **Initial screening:** This round is taken in written format
1. **1st technical round** The first round is taken by the BD team
1. **2nd technical round:** This round is typically taken by both USA and BD team. However, the final selection is done by the US team.
1. **HR Round:** This is the final stage before onboarding and typically deals with salary negotiation. 

# Database Questions

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
ACID is a set of properties of database transactions intended to guarantee data validity despite errors, power failures, and other mishaps. Databases that support this are called ACID compliance. The properties are

- **Atomicity:** Each statement in a transaction (to read, write, update or delete data) is treated as a single unit. Either the entire statement is executed, or none of it is executed.
- **Consistency:** Ensures the databases remain consistent following some predefined business logic both before and after the transaction
- **Isolation:** Each transaction executes in such a way that one is not affected by other s though they were occurring only one.
- **Durability:** The data changes by a successfull transaction is saved even in the event of system failure

> [!IMPORTANT]
> Atomicity, isolation and durability are properties of the database, whereas consistency is a property of the application. The C in ACID was tossed in to make the acronym work. [ref: Martin Kleppmann, Designing Data Intensive Applications]

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
