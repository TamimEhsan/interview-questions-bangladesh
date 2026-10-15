---
description: Scalability, caching, data layers, communication patterns, and classic design problems — the system design section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/notes/roadmap/system-design
---
# System Design

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

Core principles — scalability, load balancing, caching, trade-offs — applied to concrete systems like URL shorteners, delivery platforms, and social feeds.

*Coverage: moderate*

**Resources** · [System Design Primer](https://github.com/donnemartin/system-design-primer) — work through it end to end · [ByteByteGo system design newsletter](https://bytebytego.com/)

## Design Fundamentals
- Functional and non-functional requirements
- Capacity estimation
- CAP theorem and consistency vs. availability

**Practice**
- [Architect for massive unstructured data](/companies/wub#q-sd-unstructured-architecture) — World University
- [Design an API for a music streaming service](/companies/appscode#q-sd-music-api) — AppsCode

## Scalability
- Vertical vs. horizontal scaling
- Load balancing strategies
- Statelessness and session handling

**Practice**
- [1000 requests per second through a load balancer](/companies/shopup#q-sd-load-balancer) — ShopUp

## Data Layer
- Database selection for scale
- Replication and sharding
- Caching strategies and eviction policies
- Content delivery networks

**Practice**
- [Schema for a warehouse inventory system](/companies/chaldal#q-sd-inventory-schema) — Chaldal

## Communication Patterns
- Synchronous vs. asynchronous communication
- Message queues and event-driven design
- Rate limiting

**Practice**
- [Authentication across microservices](/companies/priyo#q-sd-microservice-auth) — Priyo

## Reliability & Observability
- Redundancy and failover
- Monitoring, logging, and alerting
- Graceful degradation

## Classic Design Problems
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
