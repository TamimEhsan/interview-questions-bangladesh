---
description: Therap Software Engineer interview questions, Therap System Adminstrator interview stages, Therap System Adminstrator interview details, Therap System Adminstrator interview question and answers
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/companies/therap/sys
---
# Associate System Adminstrator

## Interview Stages

The selection process has multiple stages,

1. **Initial screening:** This round is taken in written format
2. **1st technical round** The first round is taken by the BD team
3. **2nd technical round** The second round is taken by both the BD and USA teams
4. **HR Round:** This is the final stage before onboarding and typically deals with salary negotiation. 

## Written test Questions for Associate System Adminstrator

### Operating System (OS)
<article>

What is a kernel? What is the difference between a monolithic kernel and a microkernel?
</article>

<article>

What is a process?
</article>

<article>

What is the difference between virtualization and containers?
</article>

<article>

What are the advantages of cloud storage over local storage?
</article>

<article>

Provide an example where multithreading is a better approach than multiprocessing.
</article>

<article>

What is a context switch in Linux
</article>

<article>

What’s the Difference between Hard Links vs Soft Links in Linux? What will happen if soft link is broken?
</article>


### Networking
<article>

What is the difference between HTTP and HTTPS?
</article>

<article>

Define the following terms:

`CIDR` (Classless Inter-Domain Routing), `Gateway`, `NAT` (Network Address Translation)
</article>

<article>

What is an IP address? Why is it necessary?
</article>

<article>

What is a firewall?
</article>

<article>

What is a port? Name some commonly used service ports.
</article>

<article>

Define the following networking tools/commands:

`ping`, `traceroute`, `nslookup`
</article>

<article>

What is the difference between TCP and UDP?
</article>

<article>

A user says they can ping `8.8.8.8` but not `google.com`. What might be the problem? How can you resolve it?
</article>

<article>

In a local network, there is no packet loss in communication. However, after connecting it to the external network and accessing it from outside, there is packet loss. What could be the possible reasons? How can this be resolved?
</article>

<article>

Can a network device have multiple IP addresses? If so, which types of devices commonly use multiple IP addresses, and why are multiple addresses necessary? Explain with examples.

<details><summary>Show Answer</summary>

Yes. Common devices and reasons:

- **Routers:** One IP per connected network (e.g., `192.168.1.1` on LAN, public IP on WAN).
- **Multi-homed servers:** Connected to multiple networks (e.g., production + management VLAN), each interface gets its own IP.
- **IP aliasing:** A single NIC can carry multiple IPs (e.g., `eth0:0`, `eth0:1`) to host multiple virtual sites on one machine.
- **Load balancers:** Hold a virtual IP (VIP) for clients plus individual IPs to reach backend servers.

**Example:** A server with `192.168.10.5` on the internal LAN and `10.0.0.5` on the DMZ can serve both networks from the same physical machine — each IP routes traffic to the correct segment.

</details>
</article>



### Linux
<article>

How can you create a user in Linux? Provide a command-line example.
</article>

<article>

How can you create a file in Linux? Provide a command-line example.
</article>

<article>

What is a shell? Provide some examples of common shells.
</article>

<article>

What is the Linux file system hierarchy? Describe the purpose of the following directories:

`/`,  `/home`, `/var`, `/bin`, `/etc`, `/opt`, `/tmp`, `/usr`
</article>

<article>

How can you find help in the Linux command line? Provide example commands.
</article>

<article>

Provide example commands for the following:

`cd`, `cp`, `ls`, `grep`, `mv`
</article>

<article>

What are file permissions in Linux?
</article>

<article>

How can you monitor a process? Suppose you have a program and you need to check its status and restart it if it crashes. How can you do that?
</article>

<article>

You have a file where you applied `chmod 777`, but still cannot modify it. What could be the possible reason?
</article>

<article>

Write a Bash script that checks whether a directory named `backend` exists anywhere within the current directory tree. If it exists, print `Backend is ready`. If it does not exist, create a `backend` directory in the current location and print `Backend Created`.

<details><summary>Show Answer</summary>

```bash
#!/bin/bash

if find . -type d -name "backend" -print -quit | grep -q .; then
    echo "Backend is ready"
else
    mkdir backend
    echo "Backend Created"
fi
```

`find . -type d -name "backend" -print -quit` searches the entire tree and stops at the first match. If output is produced, the directory exists; otherwise it is created in the current location.

</details>
</article>



### Other
<article>

What is the biggest accomplishment in your educational life? Explain why.
</article>

<article>

What is the difference between `git fetch` and `git pull`? In which situations should you use `git pull` instead of `git fetch`?

<details><summary>Show Answer</summary>

| | `git fetch` | `git pull` |
|---|---|---|
| Downloads remote changes | Yes | Yes |
| Merges into working branch | No | Yes (fetch + merge/rebase) |
| Safe to review before integrating | Yes | No |

- Use `git fetch` when you want to inspect incoming changes before merging, or when working on shared/collaborative branches.
- Use `git pull` when you are on a personal branch and want to quickly sync without reviewing first.

</details>
</article>

<article>

A development team is creating automation scripts to update configuration files across multiple servers. Because these scripts may be executed multiple times, how does the concept of idempotency apply in this scenario? How can the team design the scripts to prevent duplicate entries and ensure that repeated executions produce the same consistent result?

<details><summary>Show Answer</summary>

An operation is **idempotent** if running it multiple times produces the same result as running it once. For config automation, this means the script can be re-executed safely without creating duplicates or inconsistent state.

**How to design idempotent scripts:**

- **Check before insert:** Only add a config entry if it is not already present.
  ```bash
  grep -qF "ServerName example.com" /etc/nginx/nginx.conf || \
      echo "ServerName example.com" >> /etc/nginx/nginx.conf
  ```
- **Use sentinel blocks:** Wrap managed sections with markers (e.g., `# BEGIN MANAGED BLOCK` / `# END MANAGED BLOCK`) and replace the entire block on each run instead of appending.
- **Template-based config:** Generate the full config file from a template every run — always produces the same output from the same inputs.
- **Use config management tools:** Ansible, Puppet, Chef, and Terraform are built on idempotency. For example, Ansible's `lineinfile` ensures a line exists exactly once regardless of how many times the playbook runs.

</details>
</article>

## 1st technical round

This interview was taken in therap office. Basic questions like what do you understand about system operations and why do want to join were asked. Some hands on tasks on ubuntu command line were also given

## 2nd technical round

This part was taken online. Both Bangladesh and USA team were presents. This round was also similar like the previous round.

## Contributors
- Collected and organized by [Gazi Maksudur Rahman](https://www.linkedin.com/in/gazimaksudur)