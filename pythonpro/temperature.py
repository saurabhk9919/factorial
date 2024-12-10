temperature = float(input("Enter the temperature value: "))
unit = input("Enter the unit (K for Kelvin, F for Fahrenheit): ").strip().upper()
if unit == 'K':
    fahrenheit = (temperature - 273.15) * 9/5 + 32
    print(f"{temperature} Kelvin is equal to {fahrenheit} Fahrenheit")

elif unit == 'F':
    kelvin = (temperature - 32) * 5/9 + 273.15
    print(f"{temperature} Fahrenheit is equal to {kelvin} Kelvin")

else:
    print("Invalid unit. Please enter 'K' for Kelvin or 'F' for Fahrenheit.")