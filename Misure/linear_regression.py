import csv
import matplotlib.pyplot as plt
import tkinter as tk

def linear_regression():
    fileIN = open(path.get("1.0","end-1c"), "r")
    reader = csv.DictReader(fileIN)
    
    points_list = []

    for point in reader:
        points_list.append(point)
    
    fileIN.close()

    n = len(points_list)

    x = []
    y = []
    s_xi = 0
    s_yi = 0
    s_xiyi = 0
    s_xi2 = 0

    for i in range(0, n):
        s_xi += float(points_list[i]["x"])
        x.append(float(points_list[i]["x"]))

    for i in range(0, n):
        s_yi += float(points_list[i]["y"])
        y.append(float(points_list[i]["y"]))

    for i in range(0, n):
        s_xiyi += float(points_list[i]["x"]) * float(points_list[i]["y"])
    
    for i in range(0, n):
        s_xi2 += float(points_list[i]["x"]) * float(points_list[i]["x"])

    m = ((n * s_xiyi) - (s_xi * s_yi)) / ((n * s_xi2) - (s_xi * s_xi))

    q = (s_yi - (m * s_xi)) / n

    x1 = float(points_list[0]["x"]) - 1
    x2 = float(points_list[n - 1]["x"]) + 1
    y1 = m * x1 + q
    y2 = m * x2 + q

    regression_function = "Linear regression to the least squares \n Regression line → y = " + str(round(m, 2)) + "x + " + str(round(q, 2))

    plt.plot([x1,x2], [y1,y2], color="red")

    for i in range (0, n):
        plt.plot(x[i], y[i], color="blue", marker="o")

    plt.title(label=regression_function)

    plt.xlim(min(x) - 1, max(x) + 1)
    plt.ylim(min(y) - 1, max(y) + 1)

    plt.grid()
    plt.show()

window = tk.Tk()
window.geometry("400x80")
window.resizable(False, False)

label = tk.Label(text = "Write the absolute path (eg starting from C:\) of the CSV file")
label.grid(row = 0, column = 0)

path = tk.Text(height = 1, width = 50)
path.grid(row = 1, column = 0)

button = tk.Button(text = "Make regression", command = linear_regression)
button.grid(row = 2, column = 0)

if __name__ == "__main__":
    window.mainloop()