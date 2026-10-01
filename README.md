# Nexis
( UNDER PROCESS/CONSTRUCTION ) 
**A network visibility and reconnaissance tool written in C++.**

Nexis is a command-line networking project built from the ground up to explore how network discovery and port scanning actually work.

The goal isn't to wrap an existing tool and call it a project. Nexis is about implementing the underlying networking concepts ourselves and turning them into a usable tool.

---

## What is Nexis?

Nexis can discover hosts on a network, inspect reachable ports, and collect information about the services exposed by those hosts.

The project is being developed alongside my study of computer networking, Linux, and cybersecurity, so each feature is an opportunity to understand what is happening underneath the command rather than treating networking as a black box.

The initial focus is on:

- Host discovery
- TCP port scanning
- Service detection
- Network information
- Clean terminal output

More functionality will be added as the project develops.

---

## Why C++?

Nexis is intentionally written in C++.

Networking tools interact closely with the operating system, sockets, file descriptors, processes, and threads. C++ provides enough control over these areas while still giving access to modern language features and a strong standard library.

It also makes the project a useful way to learn systems programming alongside networking.

---

## Features

### Host Discovery

Find active hosts within a specified network or address range.

### Port Scanning

Check TCP ports on a target and identify which ones are accepting connections.

### Service Detection

Collect basic information about services running on discovered ports where possible.

### Structured Output

Present scan results in a readable terminal format rather than dumping raw socket operations onto the screen.

### Configurable Scans

Specify targets, ports, and scan parameters from the command line.

### Concurrent Scanning

Use concurrency to perform multiple network operations without unnecessarily waiting for each operation to finish before starting the next.

> Features marked here will be updated as they are implemented.

---

## Example

```text
$ nexis scan 192.168.1.10

Nexis
─────
Target: 192.168.1.10

PORT      STATE       SERVICE
22        OPEN        ssh
80        OPEN        http
443       OPEN        https

Scan completed in 1.84s
