## Symmetric cipher

The cipher designed here is a stream cipher. For a given message, it will consider it character by character or bit by bit
or byte by byte or digit by digit while encrypting. Same will follow while decrypting.

### Terms:
* Let `PT` be the plain text, say a message.
* Let `CT` be the cipher text.
* Let `OT` be the output text. (OT must be same as PT in the end)
* Let `k` be the key.

### Operations:
* Encryption:

    ```C++
        CT[i] = (PT[i] + k) % 26
    ```
* Decryption: 

    ```C++
        OT[i] = (CT[i] - k) % 26
    ```

### Given:
* Message (Plain text)
* Key k