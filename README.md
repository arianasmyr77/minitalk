# Minitalk

**Minitalk** is a 42 project that implements a simple communication system between two programs: a **server** and a **client**, using only **Unix signals** (`SIGUSR1` and `SIGUSR2`).

The client sends a string to the server, one bit at a time, by converting each character to binary and sending the corresponding signals. The server listens for signals, rebuilds each character from the bits, and prints the message.

---

## 📁 Project Contents

- `server.c` – Receives and decodes messages.
- `client.c` – Encodes and sends messages.
- `minitalk.h` – Shared header file.
- `Makefile` – Compiles the executables.

---

## 🛠️ Compilation

To compile the project, simply run:

```bash
make
1.Run the server->
./server
output will give you the PID of server something like this
Server PID: 43210

then
2. Run the Client->
Open a second terminal and run the client with the following syntax:
./client <SERVER_PID> "Your message here"
Example:
./client 43210 "42 is amazing"
The client will send the message bit-by-bit to the server using signals. The server will print the received message.

💡 How It Works
Signal-Based Communication
SIGUSR1 = Bit 0
SIGUSR2 = Bit 1

The client sends each character of the message as 8 bits, starting from the least significant bit (LSB). After sending all characters, it sends a null byte ('\0') to signal the end.
The server builds each character from incoming signals and prints the message to the screen.

-------------------------------------------------
🔍 Example Walkthrough
Step-by-step:
1-Compile the project

make

2-Run the server
./server
Output:
Server PID: 43210

3-Run the client in a separate terminal
./client 43210 "42 is awesome!"
Server output:
42 is awesome!
