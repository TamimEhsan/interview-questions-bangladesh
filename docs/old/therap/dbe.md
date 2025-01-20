---
description: Therap Database Engineer interview questions, Therap Database Engineer interview stages, Therap Database Engineer interview details, Therap Database Engineer interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/therap/dbe
  - - meta
    - http-equiv: refresh
      content: "0; url=/interview-questions-bangladesh/companies/therap/dbe"
---
# Therap Database Engineer

## Interview Stages

The selection process has 4 stages,

1. **Initial screening:** This round is taken in written format
1. **1st technical round** The first round is taken by the BD team
1. **2nd technical round:** This round is typically taken by both USA and BD team. However, the final selection is done by the US team.
1. **HR Round:** This is the final stage before onboarding and typically deals with salary negotiation. 

## Database Questions

<article>

Design an ERD of online restaurant management system
</article>

<article>

What is Database Transaction
</article>

<article>

Briefly explain ACID properties
<details><summary>Show Answer</summary>

ACID is a set of properties of database transactions intended to guarantee data validity despite errors, power failures, and other mishaps. Databases that support this are called ACID compliance. The properties are

- **Atomicity:** Each statement in a transaction (to read, write, update or delete data) is treated as a single unit. Either the entire statement is executed, or none of it is executed.
- **Consistency:** Ensures the databases remain consistent following some predefined business logic both before and after the transaction
- **Isolation:** Each transaction executes in such a way that one is not affected by other s though they were occurring only one.
- **Durability:** The data changes by a successfull transaction is saved even in the event of system failure

> [!IMPORTANT]
> Atomicity, isolation and durability are properties of the database, whereas consistency is a property of the application. The C in ACID was tossed in to make the acronym work. [ref: Martin Kleppmann, Designing Data Intensive Applications]

</details>
</article>

<article>

What is normalization and denormalization
</article>

<article>

Briefly explain BCNF
</article>

<article>

Explain data warehousing
</article>

<article>

Explain data redundancy
</article>

<article>

Briefly mention the differences between stored procedure, function and trigger
</article>

<article>

Briefly mention the differences between delete, drop and truncate
</article>

<article>

Briefly mention the differences between where and having clause
</article>

<article>

Briefly mention the differences between candidate key and super key
</article>

<article>

A schema has entities like CUSTOMERS, ORDERS, ORDER_ITEMS, PRODUCTS, PRODUCT_DETAILS, WAREHOUSES, INVENTORIES. Data fields of entities and cardinality relationships were given in the figure. Questions included from <>
1. Group by, Order by, Join <>
2. Extracting month and year from oracle dates <>
3. Find ranks based on some criterion. The extremely hard question was - find top 10 customers based on their total amount spent in 2023. This one involved the following topics: aggregation, join of multiple tables, nested sub-query, year extraction from date. The book of Sukarna sir contains one/two such exercises. Practise them properly
</article>

