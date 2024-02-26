import sys
from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QLineEdit, QPushButton, QVBoxLayout

import requests
import matplotlib

import matplotlib.pyplot as plt

class SimpleWindow(QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle('URL Requests tester')
        self.initUI()

    def initUI(self):
        self.resize(400, 100)  #Dimensione finestra

        self.label = QLabel('Enter the URL to send the requests:')      #Etichetta
        self.entry = QLineEdit()                                        #Casella di inserimento
        self.entry.setText("https://")
        self.button = QPushButton('Send requests')                      #Pulsante di invio

        self.button.clicked.connect(self.on_button_click)               #Chiama della funzione del pulsante

        #Layout
        layout = QVBoxLayout()
        layout.addWidget(self.label)
        layout.addWidget(self.entry)
        layout.addWidget(self.button)

        self.setLayout(layout)                                          #Impostazione del layout principale

    def on_button_click(self):
        url = self.entry.text()

        tempi = []

        for i in range(10):
            r = requests.get(url)
            tempi.append(r.elapsed.microseconds / 1000)

        plt.figure()
        plt.plot(tempi)
        plt.ylim([0, 1.1*max(tempi)])
        plt.xlabel("ID richiesta")
        plt.ylabel("[ms]")
        plt.title("Test per www.google.com")
        plt.grid()
        plt.show()

if __name__ == '__main__':
    app = QApplication(sys.argv)
    window = SimpleWindow()
    window.show()
    sys.exit(app.exec_())
