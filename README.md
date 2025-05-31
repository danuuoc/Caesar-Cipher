# Caesar Cipher Using Circular Queue

This project implements a simple Caesar Cipher encryption and decryption system using a **circular queue** data structure in **C programming**. It allows the user to enter a message, choose to encrypt or decrypt, and apply a shift key to rotate the alphabet characters accordingly.

---

## 🔐 What is Caesar Cipher?
The Caesar Cipher is a substitution cipher where each letter in the plaintext is replaced by a letter some fixed number of positions down the alphabet. For example, with a shift of 3: `A` becomes `D`, `B` becomes `E`, and so on.

This project uses a **circular queue** to wrap around the alphabet and implement this shifting easily and efficiently.

---

## 🛠️ Features
- Menu-driven program
- Encryption and decryption support
- Handles both uppercase and lowercase letters
- Ignores spaces, punctuation, and non-alphabetic characters
- Allows positive and negative shift keys
- Looping interface (encrypt/decrypt multiple times)

---

## 📂 Project Structure
```bash
.
├── main.c          # Main program (menu, input/output)
├── queue.c         # Circular queue implementation and cipher logic
├── queue.h         # Queue structure and function declarations
├── README.md       # Project documentation
```

---

## 🚀 How to Run
1. Clone the repo:
```bash
git clone https://github.com/cipher-team/caesar-cipher-circular.git
cd caesar-cipher-circular
```
2. Compile the program:
```bash
gcc main.c queue.c -o cipher
```
3. Run the executable:
```bash
./cipher
```

---

## 🧪 Sample Test Cases
**Encryption Example:**
```
Encryption (E) or Decryption (D)?: E
Enter your message: HELLO WORLD
Enter shift key : 3
Encrypted Message: KHOOR ZRUOG
```

**Decryption Example:**
```
Encryption (E) or Decryption (D)?: D
Enter the encrypted message: KHOOR ZRUOG
Enter shift key : 3
Original Message: HELLO WORLD
```

**Negative Shift Test:**
```
Message: PROJECT DONE
Shift: -2
Encrypted: NLPBYARB BMLC
Decrypted: PROJECT DONE
```

---

## 👨‍💻 Contributors
- John Silva (S1234567)
- Aruni Perera (S7654321)
- Nimal De Alwis (S2345678)

---

## 🌐 GitHub Collaboration
We used GitHub for version control, branching, and collaboration. Each member worked on different modules and regularly committed changes to maintain a clean development workflow.

- **Repo URL:** https://github.com/cipher-team/caesar-cipher-circular
- Branches: `main`, `feature/encryption`, `feature/decryption`
- Used Pull Requests and Merge Reviews

---

## 📜 License
This project is for academic and educational purposes only.

---

Thank you for visiting our project repository!
