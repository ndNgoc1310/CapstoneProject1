# Capstone Project 1 — RV32I Pipelined Processor Design

## 👤 Author
**Nguyễn Duy Ngọc**  
- Vietnam National University - Ho Chi Minh City (VNU-HCM) - University of Technology (HCMUT)
- Faculty of Electrical and Electronics Engineering - Department of Electronics Engineering

## 📄 Project Summary
This project focuses on the design, implementation, simulation, and synthesis of a 5-stage pipelined processor conforming to the base RV32I Instruction Set Architecture (ISA). The design is verified using a comprehensive set of test programs, including hazard handling (forwarding, stall, and flush), and synthesized using Quartus Prime.

## 📚 References
- D. Harris and S. Harris, *Digital Design and Computer Architecture*, Morgan Kaufmann, 2012.
- D. A. Patterson and J. L. Hennessy, *Computer Organization and Design RISC-V Edition: The Hardware Software Interface*, Morgan Kaufmann, 2017.
- RISC-V Foundation, *The RISC-V Instruction Set Manual, Volume I: Unprivileged Architecture*, Version 20250508.

## 📁 Project Structure
```
CapstoneProject1/
│
├── 00_src/                  # RTL modules (Verilog)
├── 01_bench/                # Testbenches
├── 10_sim/                  # Simulation results
├── 20_syn/                  # Synthesis files (Quartus Prime)
│   └── quartus              # Quartus Prime│
├── 90_docs/                 # Documentation
├── 91_scripts/              # Automated scripts
├── 92_report/               # Final report
├── 99_ref/                  # References
└── README.md                # This file
```

## 🧪 Verification and Simulation
- 156 test instructions executed to verify all 39 RV32I instruction types.
- Simulated using Verilator, logs captured in `sim_rslt.sv`.
- Testbench: `processor_tb.sv` (cycle-accurate analysis).
- Functional coverage includes:
  - Data hazards (RAW) with stall and forwarding
  - Control hazards with flushing
  - Load-use hazard with stall insertion

## 🧮 Synthesis
- Synthesized using Intel Quartus Prime.
- Netlist views and utilization reports provided for top-level and submodules.

## 🔮 Conclusion and Future Work
This processor implementation successfully achieves functional correctness and synthesizability for the RV32I ISA. Future enhancements may include:
- Support for RV32IC (compressed instructions)
- Integration of branch prediction and dual-issue pipeline
- Extension toward full SoC integration with peripheral I/O

## 🌐 Repository Link
- GitLab: https://gitlab.com/duyngoc131004/CapstoneProject1
- GitHub: https://github.com/ndNgoc1310/CapstoneProject1
