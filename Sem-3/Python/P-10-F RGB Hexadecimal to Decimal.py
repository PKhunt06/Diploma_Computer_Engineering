# P-10-F Write a program that allows users to enter six-digit RGB color codes and converts them into base 10. In this format, the first two hexadecimal digits 
#  represent the amount of red, the second two the amount of green, and the last two the amount of blue. For example: If a user enters FF6347, 
#  then the output should be Red (255), Green (99) and Blue (71).

def hex_to_rgb(hex_code):
    r = int(hex_code[:2], 16)
    g = int(hex_code[2:4], 16)
    b = int(hex_code[4:], 16)
    return r, g, b

if __name__ == "__main__":
    hex_code = input("Enter a six-digit RGB color code (e.g., FF6347): ")
    r, g, b = hex_to_rgb(hex_code)
    print(f"Red ({r}), Green ({g}), Blue ({b})")
