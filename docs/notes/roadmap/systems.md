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

**Resources** · [OSTEP — Operating Systems: Three Easy Pieces](https://pages.cs.wisc.edu/~remzi/OSTEP/) — free textbook, the standard recommendation · [Linux Journey](https://linuxjourney.com/)

### OS Fundamentals
- Role of the operating system
- Kernel space vs. user space
- System calls

**Practice**
- [What an operating system is and does](/companies/su#q-os-definition) — Sonargaon University
- [Kernels: monolithic vs. microkernel](/companies/therap/sys#q-os-kernel) — Therap
- [Virtualization vs. containers](/companies/therap/sys#q-os-virtualization-containers) — Therap
- [From source file to executable](/companies/shanghaibdcom#q-os-compilation-steps) — Shanghai BD, with answer
- [The major parts of a CPU](/companies/shanghaibdcom#q-os-cpu-parts) — Shanghai BD, with answer
- [DMA, byte order, coroutine, RISC, PCB](/companies/shanghaibdcom#q-os-cs-terms) — Shanghai BD, with answer

### Processes & Threads
- Process lifecycle and states
- Process vs. thread
- Context switching
- Inter-process communication

**Practice**
- [What a process is](/companies/therap/sys#q-os-process) — Therap
- [Context switching](/companies/therap/sys#q-os-context-switch) — Therap
- [Monitoring a running process](/companies/therap/sys#q-os-monitor-process) — Therap

### CPU Scheduling
- Scheduling objectives
- FCFS, SJF, round robin, and priority scheduling
- Preemptive vs. non-preemptive scheduling
- Starvation and aging

**Practice**
- [Why process scheduling exists](/companies/shanghaibdcom#q-os-scheduling-need) — Shanghai BD
- [Structure for round-robin CPU time-sharing](/companies/bs23#q-os-time-sharing) — Brain Station 23

### Memory Management
- Physical vs. virtual memory
- Paging and segmentation
- Page replacement algorithms
- Thrashing and locality

**Practice**
- [Internal fragmentation](/companies/iubat#q-os-internal-fragmentation) — IUBAT
- [The memory hierarchy](/companies/iubat#q-os-memory-hierarchy) — IUBAT
- [How cache memory reduces misses](/companies/wub#q-os-cache-memory) — World University

### Synchronization & Deadlocks
- Critical sections
- Mutexes and semaphores
- Deadlock conditions
- Prevention, avoidance, and detection

**Practice**
- [Deadlocks, and how to prevent them](/companies/bkash#q-db-deadlock) — bKash
- [A read-then-update race](/companies/priyo#q-db-read-update-race) — Priyo, with answer

### File Systems & I/O
- File system structure
- Inodes and directories
- Disk scheduling

**Practice**
- [Hard links vs. soft links](/companies/therap/sys#q-os-hard-soft-links) — Therap
- [The Linux filesystem hierarchy](/companies/therap/sys#q-os-fs-hierarchy) — Therap
- [File permissions](/companies/therap/sys#q-os-file-permissions) — Therap
- [chmod 777 but still cannot modify](/companies/therap/sys#q-os-chmod-puzzle) — Therap

### Linux & the Shell
- Shells and common commands
- File permissions and ownership
- Users and processes
- Shell scripting

**Practice**
- [What a shell is, and common shells](/companies/therap/sys#q-os-shell) — Therap
- [cd, cp, ls, grep, mv](/companies/therap/sys#q-os-basic-commands) — Therap
- [Finding help on the command line](/companies/therap/sys#q-os-cli-help) — Therap
- [Creating a user](/companies/therap/sys#q-os-create-user) — Therap
- [Creating a file](/companies/therap/sys#q-os-create-file) — Therap
- [Write a Bash script to find a directory](/companies/therap/sys#q-os-bash-script) — Therap, with answer
- [Automate config updates across servers](/companies/therap/sys#q-os-config-automation) — Therap, with answer

## Concurrency & Multithreading
Thread safety, race conditions, and synchronization — what can go wrong when multiple threads touch the same state.

*Coverage: thin*

**Resources** · [Java Concurrency basics — Baeldung](https://www.baeldung.com/java-concurrency)

### Concurrency Fundamentals
- Concurrency vs. parallelism
- Thread lifecycle
- Shared mutable state

**Practice**
- [When multithreading beats multiprocessing](/companies/therap/sys#q-os-threads-vs-processes) — Therap
- [How single-threaded JavaScript stays async](/companies/exabyting#q-conc-js-async) — Exabyting
- [The event loop, and libuv underneath](/companies/exabyting#q-conc-event-loop) — Exabyting

### Race Conditions & Synchronization
- Race conditions
- Mutual exclusion
- Locks, monitors, and atomic operations
- Designing a thread-safe class

**Practice**
- [A read-then-update race on a field](/companies/priyo#q-db-read-update-race) — Priyo, with answer
- [Why naive Singleton is not thread-safe](/companies/kite#q-dp-singleton-implement) — Kite Games, with answer

### Coordination Patterns
- Producer-consumer
- Reader-writer
- Thread pools
- Asynchronous and non-blocking patterns

### Pitfalls
- Deadlock, livelock, and starvation
- Double-checked locking
- Performance cost of synchronization

**Practice**
- [Deadlock, and how it is resolved](/companies/bkash#q-db-deadlock) — bKash

## Computer Networking
The OSI/TCP-IP stack as the foundation, then TCP vs. UDP, DNS, HTTP, and picking the right protocol for a scenario.

*Coverage: rich*

**Resources** · [Computer Networks — Cloudflare Learning](https://www.cloudflare.com/learning/) · [High Performance Browser Networking](https://hpbn.co/) — free online book

### Network Models
- OSI model layers
- TCP/IP model
- Encapsulation across layers

**Practice**
- [The seven OSI layers](/companies/dsi#q-net-osi-layers) — DSI, with answer
- [Application layer vs. transport layer](/companies/iubat#q-net-app-vs-transport) — IUBAT
- [Multiplexing and demultiplexing](/companies/iubat#q-net-multiplexing) — IUBAT

### Transport Layer
- TCP: connection setup, reliability, ordering, flow control
- UDP: connectionless delivery and trade-offs
- Ports and sockets
- Choosing TCP vs. UDP for a workload

**Practice**
- [TCP vs. UDP](/companies/exabyting#q-net-tcp-vs-udp) — Exabyting, with answer
- [Compare TCP and UDP](/companies/therap/sys#q-net-tcp-udp-compare) — Therap
- [Differences between TCP and UDP](/companies/revesystems#q-net-tcp-udp-differences) — REVE Systems
- [Which TCP/UDP statement is true](/companies/bs23#q-net-tcp-udp-mcq) — Brain Station 23
- [Protocol for video streaming](/companies/bs23#q-net-streaming-protocol) — Brain Station 23
- [Ports, and common service ports](/companies/therap/sys#q-net-ports) — Therap
- [Java socket programming](/companies/revesystems#q-net-socket-programming) — REVE Systems

### Network Layer & Addressing
- IPv4 and IPv6 addressing
- Public vs. private IP ranges
- Subnetting and CIDR
- Routing basics
- NAT

**Practice**
- [What an IP address is and why it is needed](/companies/therap/sys#q-net-ip-address) — Therap
- [CIDR, gateway and NAT](/companies/therap/sys#q-net-cidr-nat) — Therap
- [IPv4 vs. IPv6](/companies/iubat#q-net-ipv4-vs-ipv6) — IUBAT
- [Logical vs. physical addressing](/companies/iubat#q-net-logical-physical) — IUBAT
- [Subnet a /24 network](/companies/gub#q-net-subnet-calc) — Green University
- [Network ID and broadcast from a mask](/companies/su#q-net-subnet-mask) — Sonargaon University
- [Which address is private](/companies/bs23#q-net-private-ip) — Brain Station 23
- [Can a device hold several IPs](/companies/therap/sys#q-net-multiple-ips) — Therap, with answer

### Application Layer Protocols
- HTTP and HTTPS
- DNS resolution
- SMTP and FTP
- WebSockets

**Practice**
- [What happens when you type a URL and hit enter](/companies/exabyting#q-net-url-journey) — Exabyting, with answer
- [HTTP vs. HTTPS](/companies/therap/sys#q-net-http-vs-https) — Therap
- [How HTTPS transfers data](/companies/exabyting#q-net-https-internals) — Exabyting, with answer
- [Is HTTPS stateful or stateless](/companies/exabyting#q-net-https-stateless) — Exabyting, with answer
- [What DNS is](/companies/nu#q-net-dns) — National University
- [Which protocol resolves an address to an IP](/companies/bs23#q-net-dns-mcq) — Brain Station 23
- [Protocol for sending mail with attachments](/companies/bs23#q-net-email-protocol) — Brain Station 23
- [ping, traceroute and nslookup](/companies/therap/sys#q-net-diagnostic-tools) — Therap

### Security & Performance
- TLS and certificates
- Firewalls and proxies
- Latency, bandwidth, and throughput

**Practice**
- [What a firewall is](/companies/therap/sys#q-net-firewall) — Therap
- [What a VPN is](/companies/nu#q-net-vpn) — National University
- [Traffic shaping and QoS](/companies/wub#q-net-qos) — World University
- [Can ping 8.8.8.8 but not google.com](/companies/therap/sys#q-net-dns-troubleshoot) — Therap
- [Packet loss appears only on the internet link](/companies/therap/sys#q-net-packet-loss) — Therap

## System Design
Core principles — scalability, load balancing, caching, trade-offs — applied to concrete systems like URL shorteners, delivery platforms, and social feeds.

*Coverage: moderate*

**Resources** · [System Design Primer](https://github.com/donnemartin/system-design-primer) — work through it end to end · [ByteByteGo system design newsletter](https://bytebytego.com/)

### Design Fundamentals
- Functional and non-functional requirements
- Capacity estimation
- CAP theorem and consistency vs. availability

**Practice**
- [Architect for massive unstructured data](/companies/wub#q-sd-unstructured-architecture) — World University
- [Design an API for a music streaming service](/companies/appscode#q-sd-music-api) — AppsCode

### Scalability
- Vertical vs. horizontal scaling
- Load balancing strategies
- Statelessness and session handling

**Practice**
- [1000 requests per second through a load balancer](/companies/shopup#q-sd-load-balancer) — ShopUp

### Data Layer
- Database selection for scale
- Replication and sharding
- Caching strategies and eviction policies
- Content delivery networks

**Practice**
- [Schema for a warehouse inventory system](/companies/chaldal#q-sd-inventory-schema) — Chaldal

### Communication Patterns
- Synchronous vs. asynchronous communication
- Message queues and event-driven design
- Rate limiting

**Practice**
- [Authentication across microservices](/companies/priyo#q-sd-microservice-auth) — Priyo

### Reliability & Observability
- Redundancy and failover
- Monitoring, logging, and alerting
- Graceful degradation

### Classic Design Problems
- URL shortener
- Social media feed
- E-commerce product listing
- Delivery and logistics platforms

**Practice**
- [Design a URL shortener](/companies/spectrum#q-sd-url-shortener) — Spectrum
- [Design a social media system](/companies/aastha#q-sd-social-media) — Astha IT
- [Real-time electricity meter monitoring](/companies/robendevs#q-sd-electricity-monitoring) — RoBenDevs, with answer
- [Nationwide restaurant delivery](/companies/robendevs#q-sd-delivery-platform) — RoBenDevs, with answer
- [Backend for internet banking](/companies/optimizely#q-sd-banking-backend) — Optimizely, with answer
- [A file/text compression system](/companies/chaldal#q-sd-compression-system) — Chaldal

## Security Fundamentals
Authentication and authorization basics, then common vulnerabilities and how to defend against them.

*Coverage: thin*

**Resources** · [OWASP Top Ten](https://owasp.org/www-project-top-ten/) — the canonical vulnerability list

### Authentication & Authorization
- Authentication vs. authorization
- Sessions, cookies, and tokens
- OAuth and single sign-on
- Password storage: hashing and salting

**Practice**
- [Authentication vs. authorization](/companies/dsi#q-sec-authn-vs-authz) — DSI
- [Cookie-based auth, and blacklisting a cookie](/companies/exabyting#q-sec-cookie-auth) — Exabyting, with answer
- [The structure of a JWT](/companies/exabyting#q-sec-jwt-structure) — Exabyting, with answer
- [Parts of a JWT token](/companies/wsd#q-sec-jwt-parts) — WSD
- [Auth across microservices](/companies/priyo#q-sd-microservice-auth) — Priyo
- [Walk through auth in your own project](/companies/chaldal#q-sec-project-auth) — Chaldal

### Common Vulnerabilities
- SQL injection
- Cross-site scripting
- Cross-site request forgery
- Insecure direct object references

### Secure Communication
- Symmetric vs. asymmetric encryption
- TLS/SSL and certificates
- Hashing vs. encryption

**Practice**
- [Symmetric vs. asymmetric encryption](/companies/nu#q-sec-symmetric-asymmetric) — National University
- [Encrypting large volumes of data](/companies/gub#q-sec-large-data-encryption) — Green University
- [What a digital signature is](/companies/nu#q-sec-digital-signature) — National University
- [What runs under the hood in HTTPS](/companies/exabyting#q-net-https-internals) — Exabyting, with answer

### Defensive Practices
- Input validation and sanitization
- Principle of least privilege
- Secret management

**Practice**
- [Storing passwords so even an admin cannot read them](/companies/welldev#q-sec-password-storage) — WellDev
