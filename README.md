# C Systems Programming — Path to FPGA/Hardware

Personal roadmap of systems-programming projects in C, built as a portfolio
towards specializing in FPGA design — with an eye on high-ceiling niches
such as FPGA for trading or VLSI/ASIC/SoC design.

Background: coming from a non-CS degree, currently doing an FPGA internship
at Gradiant while studying Industrial Electronics Engineering. This repo
tracks the progression from basic data structures to a RISC-V toolchain
component, each step building directly on the last.

## Roadmap

1. **Data structures library** — linked list, stack, queue, tree — `01-data-structures/`
2. **Custom malloc/free** — `02-malloc-free/`
3. **Simple shell in C** — `03-shell/`
4. **Assembler for a custom RISC-V core** (core designed in a separate project) — `04-riscv-assembler/`
5. **Instruction Set Simulator (ISS)** as a golden reference model for hardware verification — `05-iss/`

Status: in progress. Each folder gets its own README once that project is
finished, documenting design decisions, memory-safety verification
(valgrind/gdb), and what was learned.

## Environment

- WSL2 (Ubuntu 24.04) on Windows, VS Code with the WSL extension
- gcc, gdb, valgrind