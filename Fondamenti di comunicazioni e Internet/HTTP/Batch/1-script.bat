@echo off

echo Tempo di download - Velocita' download - Dimensione del download polimi
echo -------------------

for %%i IN (1 2 3 4 5) DO (
    echo Test %%i
    curl.exe -o /dev/null -s -w "T = %%{time_total} \ts\nD = %%{size_download} \tB\nV = %%{speed_download} \tB/s\n" "https://www.polimi.it"
    echo -------------------
)

pause>nul