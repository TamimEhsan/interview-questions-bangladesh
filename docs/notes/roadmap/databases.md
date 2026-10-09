---
description: SQL querying and database design and theory — the databases section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/notes/roadmap/databases
---
# Databases

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

## SQL Querying
`SELECT`, `WHERE`, and filtering basics, then `JOIN`s, aggregates, subqueries, and window functions.

*Coverage: rich*

### Query Basics
- `SELECT`, `FROM`, and `WHERE`
- Comparison and logical operators
- `ORDER BY` and `LIMIT`
- `DISTINCT`
- Pattern matching with `LIKE` and wildcards
- `NULL` handling

### Aggregation
- `COUNT`, `SUM`, `AVG`, `MIN`, `MAX`
- `GROUP BY`
- `HAVING` vs. `WHERE`
- Aggregate behavior with `NULL`s

### Joins
- `INNER JOIN`
- `LEFT`, `RIGHT`, and `FULL OUTER JOIN`
- Cross joins and self joins
- Join conditions and cardinality

### Subqueries & Set Operations
- Scalar and correlated subqueries
- `IN`, `EXISTS`, `ANY`, `ALL`
- `UNION`, `INTERSECT`, `EXCEPT`
- Common table expressions

### Advanced Querying
- Window functions (`ROW_NUMBER`, `RANK`, `LAG`, `LEAD`)
- Logical order of query execution
- Query optimization basics

### Data Modification
- `INSERT`, `UPDATE`, `DELETE`
- Transactions and rollback

## Database Design & Theory
Keys and schema design, then normalization, indexing, ACID properties, views, and choosing a database model for the shape of the data.

*Coverage: rich*

### Relational Model Fundamentals
- Tables, rows, and columns
- Primary, foreign, candidate, and composite keys
- Relationship cardinality: one-to-one, one-to-many, many-to-many
- Entity-relationship diagrams

### Normalization
- Functional dependencies
- 1NF, 2NF, 3NF, BCNF
- Insertion, update, and deletion anomalies
- Denormalization and its justification

### Indexing
- Clustered vs. non-clustered indexes
- B-tree and hash indexes
- Composite indexes
- Read and write trade-offs

### Transactions & Concurrency
- ACID properties
- Isolation levels
- Locking and deadlocks
- Dirty reads, non-repeatable reads, and phantom reads

### Database Objects
- Views and materialized views
- Stored procedures and triggers
- Constraints

### Database Selection
- Relational, document, key-value, and graph models
- SQL vs. NoSQL trade-offs
- Matching a model to the shape of the data
