import requests

# Creazione della richiesta HTTP e salvataggio del risultato della richiesta nella variabile r
r = requests.get("http://www.google.com")

# Status code della richiesta
print("Status code:", r.status_code)

print("\n")

# Contenuto della richiesta
print(r.content)