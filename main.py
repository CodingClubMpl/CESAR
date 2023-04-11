def crypt_letter(letter, key):
    if letter.isalpha():
        if letter.islower():
            return chr((ord(letter) - ord('a') + key) % 26 + ord('a'))
        else:
            return chr((ord(letter) - ord('A') + key) % 26 + ord('A'))
    else:
        return letter

def cesar_encrypt(text, key):
    result = ""
    for i in range(len(text)):
        result += crypt_letter(text[i], key)
    return result

def cesar_decrypt(text):
    possibilities = []
    for key in range(26):
        possibilities.append(cesar_encrypt(text, key))
    return possibilities

def main():
    text = input("Enter text: ")
    key = int(input("Enter key: "))
    encrypted_text = cesar_encrypt(text, key)
    print("Encrypted text: " + encrypted_text)
    print("Decrypted text: " + str(cesar_decrypt(encrypted_text)))
    for i in range(26):
        print(f"{i} - {cesar_encrypt(encrypted_text, -i)}")

if __name__ == "__main__":
    main()
