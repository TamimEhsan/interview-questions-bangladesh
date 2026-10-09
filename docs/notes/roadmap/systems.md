---
description: Operating systems, concurrency, networking, system design, and security fundamentals.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/notes/roadmap/systems
---
# Systems

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

## Operating Systems
Processes vs. threads, scheduling, memory management, and deadlocks.

*Coverage: rich*

### OS Fundamentals
- Role of the operating system
- Kernel space vs. user space
- System calls

### Processes & Threads
- Process lifecycle and states
- Process vs. thread
- Context switching
- Inter-process communication

### CPU Scheduling
- Scheduling objectives
- FCFS, SJF, round robin, and priority scheduling
- Preemptive vs. non-preemptive scheduling
- Starvation and aging

### Memory Management
- Physical vs. virtual memory
- Paging and segmentation
- Page replacement algorithms
- Thrashing and locality

### Synchronization & Deadlocks
- Critical sections
- Mutexes and semaphores
- Deadlock conditions
- Prevention, avoidance, and detection

### File Systems & I/O
- File system structure
- Inodes and directories
- Disk scheduling

## Concurrency & Multithreading
Thread safety, race conditions, and synchronization — what can go wrong when multiple threads touch the same state.

*Coverage: thin*

### Concurrency Fundamentals
- Concurrency vs. parallelism
- Thread lifecycle
- Shared mutable state

### Race Conditions & Synchronization
- Race conditions
- Mutual exclusion
- Locks, monitors, and atomic operations
- Designing a thread-safe class

### Coordination Patterns
- Producer-consumer
- Reader-writer
- Thread pools
- Asynchronous and non-blocking patterns

### Pitfalls
- Deadlock, livelock, and starvation
- Double-checked locking
- Performance cost of synchronization

## Computer Networking
The OSI/TCP-IP stack as the foundation, then TCP vs. UDP, DNS, HTTP, and picking the right protocol for a scenario.

*Coverage: rich*

### Network Models
- OSI model layers
- TCP/IP model
- Encapsulation across layers

### Transport Layer
- TCP: connection setup, reliability, ordering, flow control
- UDP: connectionless delivery and trade-offs
- Ports and sockets
- Choosing TCP vs. UDP for a workload

### Network Layer & Addressing
- IPv4 and IPv6 addressing
- Public vs. private IP ranges
- Subnetting and CIDR
- Routing basics
- NAT

### Application Layer Protocols
- HTTP and HTTPS
- DNS resolution
- SMTP and FTP
- WebSockets

### Security & Performance
- TLS and certificates
- Firewalls and proxies
- Latency, bandwidth, and throughput

## System Design
Core principles — scalability, load balancing, caching, trade-offs — applied to concrete systems like URL shorteners, delivery platforms, and social feeds.

*Coverage: moderate*

### Design Fundamentals
- Functional and non-functional requirements
- Capacity estimation
- CAP theorem and consistency vs. availability

### Scalability
- Vertical vs. horizontal scaling
- Load balancing strategies
- Statelessness and session handling

### Data Layer
- Database selection for scale
- Replication and sharding
- Caching strategies and eviction policies
- Content delivery networks

### Communication Patterns
- Synchronous vs. asynchronous communication
- Message queues and event-driven design
- Rate limiting

### Reliability & Observability
- Redundancy and failover
- Monitoring, logging, and alerting
- Graceful degradation

### Classic Design Problems
- URL shortener
- Social media feed
- E-commerce product listing
- Delivery and logistics platforms

## Security Fundamentals
Authentication and authorization basics, then common vulnerabilities and how to defend against them.

*Coverage: thin*

### Authentication & Authorization
- Authentication vs. authorization
- Sessions, cookies, and tokens
- OAuth and single sign-on
- Password storage: hashing and salting

### Common Vulnerabilities
- SQL injection
- Cross-site scripting
- Cross-site request forgery
- Insecure direct object references

### Secure Communication
- Symmetric vs. asymmetric encryption
- TLS/SSL and certificates
- Hashing vs. encryption

### Defensive Practices
- Input validation and sanitization
- Principle of least privilege
- Secret management
