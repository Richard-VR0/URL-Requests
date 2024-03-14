def tempo_minimo():
    min = 0
    for i in range(1, len(siti)):
        if media[min] > media[i]:
            min = i
            
    return siti[min]

import requests

siti = ["http://www.youtube.com", "http://www.facebook.com", "http://www.github.com", "http://www.wikipedia.org", "http://www.amazon.com", "http://www.twitter.com"]
media = []

for sito in siti:
    tempi = []

    for i in range(0, 5):
        r = requests.get(sito)
        tempi.append(r.elapsed.microseconds / 1000)

    media.append(sum(tempi) / len(tempi))

print(media)
print("Sito con tempo medio minore: " , tempo_minimo())