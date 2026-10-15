---
description: SQL querying and database design and theory — the databases section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/roadmap/databases
---
# Databases

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

## SQL Querying
`SELECT`, `WHERE`, and filtering basics, then `JOIN`s, aggregates, subqueries, and window functions.

*Coverage: rich*

**Resources** · [SQLBolt](https://sqlbolt.com/) — interactive lessons from `SELECT` upward · [SQL — LeetCode](https://leetcode.com/studyplan/top-sql-50/) — the Top SQL 50 study plan

### Query Basics
- `SELECT`, `FROM`, and `WHERE`
- Comparison and logical operators
- `ORDER BY` and `LIMIT`
- `DISTINCT`
- Pattern matching with `LIKE` and wildcards
- `NULL` handling

**Practice**
- [What `SELECT 5/6` returns](/companies/bs23#q-sql-integer-division) — Brain Station 23
- [`LIKE` with a literal underscore](/companies/bs23#q-sql-like-wildcard) — Brain Station 23
- [Which is not a valid SQL data type](/companies/bs23#q-sql-data-types) — Brain Station 23
- [Find the unique column of a table](/companies/welldev#q-sql-unique-column) — WellDev

### Aggregation
- `COUNT`, `SUM`, `AVG`, `MIN`, `MAX`
- `GROUP BY`
- `HAVING` vs. `WHERE`
- Aggregate behavior with `NULL`s

**Practice**
- [Company with the lowest total employee count](/companies/relisource#q-sql-group-by-lowest-total) — Relisource
- [Student name and course count](/companies/relisource#q-sql-count-per-student) — Relisource
- [Show all duplicate rows in a table](/companies/welldev#q-sql-duplicate-rows) — WellDev

### Joins
- `INNER JOIN`
- `LEFT`, `RIGHT`, and `FULL OUTER JOIN`
- Cross joins and self joins
- Join conditions and cardinality

**Practice**
- [Left join vs. full join, and when to use each](/companies/exabyting#q-sql-left-vs-full-join) — Exabyting, with answer
- [Joins and composite keys](/companies/exabyting#q-sql-join-composite-keys) — Exabyting, with answer
- [Maximum salary per department](/companies/relisource#q-sql-max-salary-per-dept) — Relisource
- [Join across employee, supervisor and branch tables](/companies/shopup#q-sql-join-supervisor-branch) — ShopUp
- [Join two or more tables from a schema](/companies/su#q-sql-join-basics) — Sonargaon University

### Subqueries & Set Operations
- Scalar and correlated subqueries
- `IN`, `EXISTS`, `ANY`, `ALL`
- `UNION`, `INTERSECT`, `EXCEPT`
- Common table expressions

**Practice**
- [Second highest salary](/companies/welldev#q-sql-second-highest-salary) — WellDev
- [A subquery combined with a join](/companies/shellbeehaken#q-sql-subquery-with-join) — ShellBeeHaken
- [Products matching a price condition](/companies/welldev#q-sql-products-by-price) — WellDev

### Advanced Querying
- Window functions (`ROW_NUMBER`, `RANK`, `LAG`, `LEAD`)
- Logical order of query execution
- Query optimization basics

**Practice**
- [Order of SQL query execution](/companies/welldev#q-sql-execution-order) — WellDev
- [Reorder a scrambled query so it runs](/companies/bs23#q-sql-clause-order) — Brain Station 23

### Data Modification
- `INSERT`, `UPDATE`, `DELETE`
- Transactions and rollback

**Practice**
- [`DELETE` vs. `TRUNCATE` vs. `DROP`](/companies/welldev#q-sql-delete-truncate-drop) — WellDev
- [Select and update across a schema](/companies/nu#q-sql-select-and-update) — National University

## Database Design & Theory
Keys and schema design, then normalization, indexing, ACID properties, views, and choosing a database model for the shape of the data.

*Coverage: rich*

**Resources** · [Database Design — freeCodeCamp](https://www.freecodecamp.org/news/database-design-course-for-beginners/) · [Use The Index, Luke](https://use-the-index-luke.com/) — how indexes actually work · [Notes: Database resources](/notes/database)

### Relational Model Fundamentals
- Tables, rows, and columns
- Primary, foreign, candidate, and composite keys
- Relationship cardinality: one-to-one, one-to-many, many-to-many
- Entity-relationship diagrams

**Practice**
- [How many types of relationships exist](/companies/wedevs#q-db-relationship-types) — weDevs
- [Modelling a many-to-many relationship](/companies/bs23#q-db-many-to-many) — Brain Station 23, with answer
- [Which statement about keys is incorrect](/companies/bs23#q-db-keys) — Brain Station 23
- [Design an ERD for a restaurant system](/companies/therap/dbe#q-db-erd-restaurant) — Therap
- [Why a DBMS instead of a file system](/companies/sub#q-db-vs-file-system) — Stamford University

### Normalization
- Functional dependencies
- 1NF, 2NF, 3NF, BCNF
- Insertion, update, and deletion anomalies
- Denormalization and its justification

**Practice**
- [Normalization, its benefits and normal forms](/companies/bkash#q-db-normalization-forms) — bKash
- [Normalize a student table](/companies/dsi#q-db-normalize-student-table) — DSI
- [Normalize to 1NF, 2NF and 3NF](/companies/therap/swe#q-db-normalize-1nf-2nf-3nf) — Therap
- [Normalize and identify primary/foreign keys](/companies/therap/swe#q-db-normalize-keys) — Therap
- [Normalization vs. denormalization](/companies/therap/dbe#q-db-denormalization) — Therap

### Indexing
- Clustered vs. non-clustered indexes
- B-tree and hash indexes
- Composite indexes
- Read and write trade-offs

**Practice**
- [What indexing is and why we need it](/companies/exabyting#q-db-indexing-why) — Exabyting, with answer
- [Can a column with duplicates be indexed](/companies/exabyting#q-db-index-duplicates) — Exabyting, with answer
- [Indexing a user_email column](/companies/exabyting#q-db-index-on-email) — Exabyting, with answer
- [What is indexing](/companies/bs23#q-db-indexing-basics) — Brain Station 23
- [Which is *not* a way to improve performance](/companies/bs23#q-db-performance-methods) — Brain Station 23

### Transactions & Concurrency
- ACID properties
- Isolation levels
- Locking and deadlocks
- Dirty reads, non-repeatable reads, and phantom reads

**Practice**
- [What a database transaction is](/companies/therap/dbe#q-db-transaction) — Therap
- [The ACID properties](/companies/exabyting#q-db-acid) — Exabyting, with answer
- [Concurrency control and why it matters](/companies/bkash#q-db-concurrency-control) — bKash, with answer
- [Deadlocks and how to prevent them](/companies/bkash#q-db-deadlock) — bKash
- [A read-then-update race on a field](/companies/priyo#q-db-read-update-race) — Priyo, with answer
- [Which expansion of ACID is correct](/companies/bs23#q-db-acid-mcq) — Brain Station 23

### Database Objects
- Views and materialized views
- Stored procedures and triggers
- Constraints

**Practice**
- [Purpose of a view](/companies/bs23#q-db-view-purpose) — Brain Station 23
- [Triggers and cascading](/companies/welldev#q-db-trigger-cascade) — WellDev
- [Stored procedure vs. function vs. trigger](/companies/therap/dbe#q-db-procedure-function-trigger) — Therap

### Database Selection
- Relational, document, key-value, and graph models
- SQL vs. NoSQL trade-offs
- Matching a model to the shape of the data

**Practice**
- [SQL vs. NoSQL](/companies/exabyting#q-db-sql-vs-nosql) — Exabyting, with answer
- [SQL or NoSQL for cache-to-RAM storage](/companies/welldev#q-db-cache-storage-choice) — WellDev
- [Best model for unstructured data](/companies/bs23#q-db-unstructured-model) — Brain Station 23
- [Which statement about RDBMS is false](/companies/bs23#q-db-rdbms-false) — Brain Station 23, with answer
