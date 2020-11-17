cal_kg = 7700

print("Inserisci il tuo peso in KG: ")
current_weight=float(input())

print("Inserisci il tuo peso target in KG: ")
target_weight=float(input())

print("Inserisci la durata in mesi: ")
months=float(input())

difference = current_weight - target_weight;
if(difference > 0):
    total_calories = cal_kg * difference
    monthly_calories = total_calories / months
    weekly_calories = monthly_calories / 4

    deficit = weekly_calories / 7

    print("Il tuo deficit calorico per perdere " + str(difference) + " kg in " + str(months) +" mesi e' di: " + str(deficit) + " calorie")
else:
    print("Inserimento Errato!")