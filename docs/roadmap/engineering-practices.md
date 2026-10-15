---
description: Version control, testing, SDLC and Agile, and REST APIs — the engineering practices section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/roadmap/engineering-practices
---
# Engineering Practices

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

## Version Control (Git)
The basic commit/push/pull workflow, then collaborating through branches and merges.

*Coverage: thin*

**Resources** · [Learn Git Branching](https://learngitbranching.js.org/) — interactive, the fastest way to build a mental model · [Pro Git](https://git-scm.com/book/en/v2) — the free official book

### Git Fundamentals
- Repositories, commits, and the staging area
- Working directory, index, and HEAD
- Cloning and remotes

### Everyday Workflow
- Staging and committing
- Push and pull
- Fetch vs. pull
- History and diffs

**Practice**
- [`git fetch` vs. `git pull`](/companies/therap/sys#q-git-fetch-vs-pull) — Therap, with answer
- [Getting in sync with a collaborator](/companies/bs23#q-git-sync-changes) — Brain Station 23

### Branching & Collaboration
- Creating and switching branches
- Merging and merge conflicts
- Rebasing vs. merging
- Pull requests and code review

### Undoing Changes
- Revert and reset
- Stashing
- Cherry-picking

## Testing & Code Quality
What unit testing is and who's responsible for writing it, then what makes code maintainable.

*Coverage: thin*

**Resources** · [Refactoring.Guru — code smells](https://refactoring.guru/refactoring/smells)

### Testing Fundamentals
- Purpose of automated testing
- Unit, integration, and end-to-end tests
- Ownership of each test type
- Coverage and its limits

**Practice**
- [Who writes unit tests](/companies/bs23#q-test-who-writes-unit-tests) — Brain Station 23, with answer

### Writing Good Tests
- Arrange-act-assert structure
- Mocks, stubs, and fakes
- Test-driven development
- Edge and boundary cases

### Code Quality
- Readability and naming
- Code smells and refactoring
- DRY, KISS, and YAGNI
- Code review practices

## SDLC, Agile & Process
The software development lifecycle, then Agile and where sprints fit into it.

*Coverage: thin*

**Resources** · [The Agile Manifesto](https://agilemanifesto.org/) — four principles, one page

### Software Development Lifecycle
- Phases from requirements through maintenance
- Waterfall model
- Iterative and incremental models

**Practice**
- [The phases of the SDLC](/companies/gub#q-sdlc-phases) — Green University
- [Which model iterates development and testing](/companies/bs23#q-sdlc-iterative-model) — Brain Station 23, with answer
- [SDLC models, and the waterfall model](/companies/revesystems#q-sdlc-models) — REVE Systems

### Agile
- Agile principles
- Scrum: sprints, standups, retrospectives, roles
- Kanban
- Agile vs. waterfall trade-offs

**Practice**
- [Explain the Agile model](/companies/revesystems#q-sdlc-agile-model) — REVE Systems
- [The purpose of a sprint](/companies/bs23#q-sdlc-sprint-purpose) — Brain Station 23, with answer
- [Agile vs. waterfall](/companies/wub#q-sdlc-agile-vs-waterfall) — World University

### Delivery Practices
- Continuous integration and continuous delivery
- Release and deployment strategies
- Estimation and planning

**Practice**
- [How CI/CD pipelines work](/companies/aastha#q-sdlc-cicd) — Astha IT

## REST APIs & Microservices
RESTful API design basics, then splitting a system into services.

*Coverage: thin*

**Resources** · [REST API Tutorial](https://restfulapi.net/) · [Microservices — martinfowler.com](https://martinfowler.com/articles/microservices.html)

### API Fundamentals
- Client-server model
- HTTP methods and status codes
- Request and response structure
- Idempotency

**Practice**
- [REST APIs, HTTP verbs, PUT vs. POST](/companies/revesystems#q-api-rest-verbs) — REVE Systems
- [Idempotent vs. non-idempotent requests](/companies/shellbeehaken#q-api-idempotency) — ShellBeeHaken
- [Write a health-check API call](/companies/welldev#q-api-health-check) — WellDev

### REST Design
- Resource modeling and URI design
- Statelessness
- Versioning
- Pagination, filtering, and sorting
- REST vs. GraphQL vs. RPC

**Practice**
- [How many APIs a booking flow needs](/companies/welldev#q-api-count-for-booking) — WellDev

### Microservices
- Monolith vs. microservices
- Service boundaries
- Inter-service communication
- Service discovery and API gateways
- Distributed data and eventual consistency
