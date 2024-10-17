# C Pubcrypt

C Pubcrypt is an implementation of the RSA cryptosystem in C. As for pubcrypt, I have the intention of implementing every algorithms like arithmetic (ie : gcd, mille-rabin). For now the only depencies I'm using is the openssl Bignum structure.

# Installation

1) Install openSSL :
```bash
sudo apt install libssl-dev
```

2) Install the source code : 
```bash
git clone https://github.com/Bl4omArchie/CPubcrypt
```

3) Build and execute the project : 
```bash
cd CPubcrypt
make
./rsa
```