# Network security algorithms
### A repository containing some useful and well-known network security algorithms



## Symmetric Key Cryptography
_Symmetric encryption is a type of encryption where only one key (a secret key) is used to both encrypt and decrypt electronic information. The entities communicating via symmetric encryption must exchange the key so that it can be used in the decryption process._ 

### There are two types of symmetric encryption algorithms:

* `Block algorithms`: Set lengths of bits are encrypted in blocks of electronic data with the use of a specific secret key. As the data is being encrypted, the system holds the data in its memory as it waits for complete blocks.

* `Stream algorithms`: Data is encrypted as it streams instead of being retained in the system’s memory.

### Some examples of symmetric encryption algorithms include:

* AES (Advanced Encryption Standard)
* DES (Data Encryption Standard)
* Blowfish (Drop-in replacement for DES or IDEA)

### What is Symmetric Encryption Used For?
Due to the better performance and faster speed of symmetric encryption (compared to asymmetric), symmetric cryptography is typically used for bulk encryption / encrypting large amounts of data, e.g. for database encryption. In the case of a database, the secret key might only be available to the database itself to encrypt or decrypt.

### Key management for symmetric encryption - what we need to consider
* Key Exhaustion
* Attribution data
* Key Management at large scale

## Asymmetric Key Cryptography
_Public-key cryptography, or asymmetric cryptography, is a cryptographic system that uses pairs of keys: public keys, which may be disseminated widely, and private keys, which are known only to the owner. The generation of such keys depends on cryptographic algorithms based on mathematical problems to produce one-way functions. Effective security only requires keeping the private key private; the public key can be openly distributed without compromising security._

### Some examples of asymmetric encryption algorithms include:
* DSS (Digital Signature Standard)
* RSA encryption algorithm

### What is Asymmetric Encryption Used For?
* The most obvious application of a public key encryption system is in encrypting communication to provide confidentiality – a message that a sender encrypts using the recipient's public key can be decrypted only by the recipient's paired private key.

* Another application in public key cryptography is the digital signature. Digital signature schemes can be used for sender authentication.

### Key management for symmetric encryption - what we need to consider
* Algorithms
* Alteration of public keys
* Public Key infrastructure

## Structure of this repository
* Symmetric
  * Documentation (preferably in markdown format)
  * Code
* Asymmetric
  * Documentation (preferably in markdown format)
  * Code

## Steps to contribute

  * fork this repository
  * create a new issue in this repository in case they do not find it open.
  * Once an issue is created, it will be assigned to the contributor or closed based on its significance.
  * If the issue is assigned, go ahead with its implementation in your forked repository.
  * After completing the assigned task, create a pull request to this repository. Remove merge conflicts if any.
  * Pull request will be merged after a review. If it needs some corrections, it will be informed via comments.
