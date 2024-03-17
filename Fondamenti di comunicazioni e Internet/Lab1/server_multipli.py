import requests
import matplotlib.pyplot as plt

siti = ["http://www.google.com", "http://www.polimi.it", "http://www.twitch.tv"]

plt.figure()

for sito in siti:
    print("Analizzando il sito: " + sito)

    tempi = []

    for i in range (0, 10):
        r = requests.get(sito)
        tempi.append(r.elapsed.microseconds / 1000)

    print("Valore minimo: " + str(min(tempi)) + " ms")
    print("Valore massimo: " + str(max(tempi)) + " ms")
    print("Valore medio: " + str(sum(tempi) / len(tempi)) + " ms\n")

    plt.plot(tempi, label=sito)

plt.legend()
plt.title("Tempi di risposta")
plt.xlabel("ID richiesta")
plt.ylabel("millisecondi (ms)")
plt.grid()
plt.show()
