import requests
import matplotlib.pyplot as plt

tempi = []

for i in range(10):
    r = requests.get('http://www.google.com')
    tempi.append(r.elapsed.microseconds / 1000)

print("Lista dei tempi: ", tempi, "\n\n")

print("Tempo di risposta minore: ", min(tempi), "ms")
print("Tempo di risposta media: ", sum(tempi)/len(tempi), "ms")
print("Tempo di risposta massimo: ", max(tempi), "ms")

plt.figure()
plt.plot(tempi)
plt.ylim([0, 1.1*max(tempi)])
plt.xlabel("ID richiesta")
plt.ylabel("[ms]")
plt.title("Test per www.google.com")
plt.grid()
plt.show()