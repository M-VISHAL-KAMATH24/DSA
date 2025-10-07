def caesar_shift(text, shift):
    result = ""
    for char in text:
        if char.isalpha():
            base = ord('A') if char.isupper() else ord('a')
            result += chr((ord(char) - base + shift) % 26 + base)
        else:
            result += char
    return result

original_text = "rkjxphmexpb2@djXZlj"

# Try all 25 Caesar cipher shifts
for shift in range(1, 26):
    shifted = caesar_shift(original_text, 3)
    print(f"Shift {shift:2}: {shifted}")
