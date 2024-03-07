@echo off

echo Tempo di download - Velocita' download - Dimensione del download stanford
echo -------------------
echo PoliMi
echo -------------------

curl.exe -o /dev/null -s -w "\nT = %%{time_total} \ts\nD = %%{size_download} \tB\nV = %%{speed_download} \tB/s\n\n\n" "https://www.polimi.it"

echo -------------------
echo Stanford
echo -------------------

curl.exe -o /dev/null -s -w "\nT = %%{time_total} \ts\nD = %%{size_download} \tB\nV = %%{speed_download} \tB/s\n\n\n" "https://www.stanford.edu"

echo -------------------
echo MIT
echo -------------------

curl.exe -o /dev/null -s -w "\nT = %%{time_total} \ts\nD = %%{size_download} \tB\nV = %%{speed_download} \tB/s\n\n" "https://web.mit.edu"

pause>nul