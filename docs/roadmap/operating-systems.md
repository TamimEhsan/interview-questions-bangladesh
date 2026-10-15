---
description: Processes, threads, scheduling, memory, file systems, Linux, and concurrency — the operating systems section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/roadmap/operating-systems
---
# Operating Systems & Concurrency

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
