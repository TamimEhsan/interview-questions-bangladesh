---
description: Authentication, authorization, vulnerabilities, encryption, and defensive practices — the security section of the interview prep roadmap.
head:
  - - link
    - rel: canonical
      href: https://tamimehsan.github.io/interview-questions-bangladesh/notes/roadmap/security
---
# Security

*Part of the [Interview Prep Roadmap](./). Coverage ratings are explained there.*

Authentication and authorization basics, then common vulnerabilities and how to defend against them.

*Coverage: thin*

**Resources** · [OWASP Top Ten](https://owasp.org/www-project-top-ten/) — the canonical vulnerability list

## Authentication & Authorization
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

## Common Vulnerabilities
- SQL injection
- Cross-site scripting
- Cross-site request forgery
- Insecure direct object references

## Secure Communication
- Symmetric vs. asymmetric encryption
- TLS/SSL and certificates
- Hashing vs. encryption

**Practice**
- [Symmetric vs. asymmetric encryption](/companies/nu#q-sec-symmetric-asymmetric) — National University
- [Encrypting large volumes of data](/companies/gub#q-sec-large-data-encryption) — Green University
- [What a digital signature is](/companies/nu#q-sec-digital-signature) — National University
- [What runs under the hood in HTTPS](/companies/exabyting#q-net-https-internals) — Exabyting, with answer

## Defensive Practices
- Input validation and sanitization
- Principle of least privilege
- Secret management

**Practice**
- [Storing passwords so even an admin cannot read them](/companies/welldev#q-sec-password-storage) — WellDev
