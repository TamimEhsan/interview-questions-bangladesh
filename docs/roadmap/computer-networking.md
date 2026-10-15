---
description: The OSI stack, TCP and UDP, addressing, application protocols, and network security — the networking section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/roadmap/computer-networking
---
# Computer Networking

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

The OSI/TCP-IP stack as the foundation, then TCP vs. UDP, DNS, HTTP, and picking the right protocol for a scenario.

*Coverage: rich*

**Resources** · [Computer Networks — Cloudflare Learning](https://www.cloudflare.com/learning/) · [High Performance Browser Networking](https://hpbn.co/) — free online book

## Network Models
- OSI model layers
- TCP/IP model
- Encapsulation across layers

**Practice**
- [The seven OSI layers](/companies/dsi#q-net-osi-layers) — DSI, with answer
- [Application layer vs. transport layer](/companies/iubat#q-net-app-vs-transport) — IUBAT
- [Multiplexing and demultiplexing](/companies/iubat#q-net-multiplexing) — IUBAT

## Transport Layer
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

## Network Layer & Addressing
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

## Application Layer Protocols
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

## Security & Performance
- TLS and certificates
- Firewalls and proxies
- Latency, bandwidth, and throughput

**Practice**
- [What a firewall is](/companies/therap/sys#q-net-firewall) — Therap
- [What a VPN is](/companies/nu#q-net-vpn) — National University
- [Traffic shaping and QoS](/companies/wub#q-net-qos) — World University
- [Can ping 8.8.8.8 but not google.com](/companies/therap/sys#q-net-dns-troubleshoot) — Therap
- [Packet loss appears only on the internet link](/companies/therap/sys#q-net-packet-loss) — Therap
