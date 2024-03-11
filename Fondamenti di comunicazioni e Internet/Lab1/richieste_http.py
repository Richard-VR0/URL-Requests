import requests

sito = "http://www.youtube.com"
print("Tempi di risposta")

for i in range(0, 5):
    r = requests.get(sito)

    print("Test" , i+1 , "->\t" + str(r.elapsed.microseconds / 1000) + " ms")