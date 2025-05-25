# 🏧 ATM Simulator in C | Προσομοίωση ATM σε C

> **Description | Περιγραφή**  
> A command-line ATM simulation written in C that allows a user to check balance, deposit, withdraw, and transfer funds (with separate logic for domestic and international transfers).  
> Πρόγραμμα προσομοίωσης ATM στη γλώσσα C. Ο χρήστης μπορεί να ελέγξει υπόλοιπο, να κάνει ανάληψη, κατάθεση και μεταφορά χρημάτων σε εσωτερικό ή εξωτερικό λογαριασμό.

---

## ✅ Features | Χαρακτηριστικά

- ✔️ PIN verification with 3 attempts
- ✔️ Check balance, withdraw, deposit
- ✔️ Money transfers (domestic/international with 5€ fee)
- ✔️ Beep sounds and screen clearing (Windows only)
- ✔️ Greek-language messages and interaction

---

## ⚙️ Compilation | Μεταγλώττιση

> Windows only (uses `windows.h` and `system("cls")`)

### 🧱 Compile with:
```bash
gcc atm.c -o atm
