import requests
import matplotlib.pyplot as plt

sito = "http://www.google.com"

tempi = []

for i in range(0, 10):
    r = requests.get(sito)

    print("Test", i+1, "->\t" + str(r.elapsed.microseconds / 1000) + " ms")

    tempi.append(r.elapsed.microseconds / 1000)

print(tempi)

print("\nTempo minimo: " + str(min(tempi)) + " ms")
print("Tempo massimo: " + str(max(tempi)) + " ms")
print("Tempo medio: " + str(sum(tempi) / len(tempi)) + " ms")

plt.figure()
plt.plot(tempi, label="Tempi")
plt.title("Tempi di risposta per www.google.com")
plt.xlabel("ID richiesta")
plt.ylabel("millisecondi (ms)")
plt.axhline(sum(tempi) / len(tempi), label="Valore medio", color="red")
plt.ylim([0.9*min(tempi), 1.1*max(tempi)])
plt.legend()
plt.grid()
plt.show()