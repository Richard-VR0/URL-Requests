import requests

sito1 = "http://www.youtube.com"
sito2 = "http://www.google.com"
sito3 = "http://www.polimi.it"

print("Tempi di risposta")
print("-------------------------------------------------------------")
print("| \t\t\t|\tyoutube.com\t|\tgoogle.com\t|\tpolimi.it\t|")
print("-------------------------------------------------------------")

for i in range(0, 5):
    r1 = requests.get(sito1)
    r2 = requests.get(sito2)
    r3 = requests.get(sito3)

    print("| Test" , i+1 ,"\t|\t" + str(r1.elapsed.microseconds / 1000) + "\t\t|\t" + str(r2.elapsed.microseconds / 1000) + "\t\t|\t" + str(r3.elapsed.microseconds / 1000) + "\t\t|")

print("-------------------------------------------------------------")