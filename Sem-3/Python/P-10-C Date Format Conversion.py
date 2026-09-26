# P-10-C Write a program to read a date in the format DD/MM/YYYY and print the same date in MM-DD-YYYY format.

def convert_date_format(date_str):
    day, month, year = date_str.split('/')
    return f"{month}-{day}-{year}"

if __name__ == "__main__":
    input_date = input("Enter date (DD/MM/YYYY): ")
    result = convert_date_format(input_date)
    print("Converted date:", result)
