Name - ARYAN SRIVASTAVA
Roll no -241210025
CSE1

List of Lab experiments
1. Installation of Logisim
2. Draw 4 bit adder Half and Full adder
3. Draw 4 bit ripple carry adder with delay
4. Draw 8*1 multiplexer
5. Draw 8*3 encoder
6. Draw a 4 bit common bus

Lab experiment-1
Aim: Installation of Logisim
Software Used: Windows OS
Theory:
Logisim Evolution is an open-source digital logic design and simulation software used for creating and testing digital circuits. It provides a graphical user interface that allows users to design circuits using basic and advanced components such as logic gates, multiplexers, encoders, decoders, flip-flops, registers, and memory units.

In Computer Organization and Architecture (COA), Logisim is widely used to understand the working of digital systems without the need for physical hardware. It helps in visualizing circuit behavior, analyzing outputs, and debugging logical errors in real time.

Logisim Evolution supports hierarchical circuit design, enabling complex systems to be built from smaller sub-circuits. It also includes features like simulation control, data propagation, and timing analysis, which make it a powerful educational tool.

The installation of Logisim Evolution allows students to perform experiments such as designing combinational and sequential circuits, verifying truth tables, and implementing digital logic systems efficiently. Since it is platform-independent (via Java or native installers), it can run on Windows, macOS, and Linux systems.

Result:
Logisim Evolution was successfully installed and its interface was studied. Basic components and tools for designing digital circuits were observed.

Conclusion:
The installation of Logisim Evolution was completed successfully. It provides an efficient platform for designing and simulating digital circuits, which helps in better understanding of COA concepts.


Lab experiment-2
Aim:Draw 4bit adder and half and full adder
Software Used: Logisim Evolution
Theory:
Half Adder

A Half Adder is a combinational circuit used to add two single-bit binary numbers. It produces two outputs: Sum (S) and Carry (C).

Sum is obtained using an XOR gate
Carry is obtained using an AND gate
Equations:

S=A⊕B
C=A⋅B

A Full Adder adds three bits: two input bits and one carry input (Cin). It produces Sum (S) and Carry (Cout).

It can be implemented using two half adders and one OR gate.

Equations:

S=A⊕B⊕Cin
Cout=AB+BCin+ACin

4-Bit Adder (Ripple Carry Adder)

A 4-bit adder is a combinational circuit used to add two 4-bit binary numbers. It is constructed by connecting four full adders in series.

Each full adder adds corresponding bits
Carry from one stage is passed to the next stage
This propagation of carry is called ripple carry
Working:
First stage takes external carry (Cin)
Each stage passes carry to next
Final stage produces final carry (Cout)

Result:
Half Adder, Full Adder, and 4-bit Adder circuits were successfully designed and verified. The outputs obtained matched the expected truth tables.
Conclusion:
The experiment demonstrated the working of basic binary addition circuits. It helped in understanding how complex adders like a 4-bit adder are built using full adders and how carry propagates between stages.

Lab Experiment -3:
Aim : Draw 4 bit ripple carry adder with delay
Software used: Logisim
Theory: 
A 4-bit Ripple Carry Adder (RCA) is a combinational circuit used to add two 4-bit binary numbers. It is constructed by connecting four full adders in series, where the carry output of one stage is connected to the carry input of the next stage.

Result:
4 bit ripple carry adder was implemented successfully on logisim 

Conclusion:
In this way we can design 4bit ripple carry adder in logisim

Lab experiment-4
Aim:Design 8*1 MUX using gates 
Software Used: Logisim
Theory:
An 8×1 Multiplexer (MUX) is a combinational circuit that selects one of eight input lines and forwards it to a single output. It uses three select lines (S2, S1, S0) to determine which input is transmitted.
Based on the binary value of the select lines, the corresponding input is connected to the output. It is widely used in digital systems for data selection and routing.

Result:
The 8*1 mux was successfully implemented 
Conclusion:
In this way we can implement 8*1 mux

Lab experiment-5
Aim: Design 8*3 encoder
Software used: logisim
Theory:
An 8×3 Encoder is a combinational circuit that converts 8 input lines into a 3-bit binary output. At any time, only one input is assumed to be active, and the output represents the binary equivalent of the active input line.
It reduces multiple input lines into a smaller number of output bits and is used in digital systems for efficient data encoding.
Result:
The 8×3 encoder circuit was successfully designed and verified. The output matched the expected binary values for each active input.

Conclusion:
The experiment demonstrated how an encoder converts multiple inputs into a smaller binary output. It helped in understanding data encoding and reduction in digital systems.

Lab experiment-6 
Aim: Design 4bit common bus using registers and gates
Software used: logisim
Theory:
A 4-bit common bus is a set of four parallel lines used to transfer 4-bit data between different registers or components in a digital system. It allows multiple devices to share a single communication path, reducing the number of connections.
The selection of a particular register for data transfer is controlled using multiplexers or control signals. At a time, only one source is allowed to place data on the bus to avoid conflicts.

Results:
The 4bit common bus was implemented successfully 
Conclusion:
In this way the 4bit common bus can be implemented 
