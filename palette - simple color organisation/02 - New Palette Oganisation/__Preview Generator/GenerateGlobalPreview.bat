@FOR /F "tokens=1,2,3* delims=:, " %%i in ('echo %time%') do @set Mytime=%%ih%%jm%%ks
@set Mytime=%date:~-4,4%-%date:~-7,2%-%date:~-10,2%_%Mytime%
@echo %Mytime%

md File_Lists
md %Mytime%

copy /y NUL File_Lists\realistic_gb.txt >NUL
copy /y NUL File_Lists\blue.txt >NUL
copy /y NUL File_Lists\brown.txt >NUL
copy /y NUL File_Lists\gray.txt >NUL
copy /y NUL File_Lists\green.txt >NUL
copy /y NUL File_Lists\inverted.txt >NUL
copy /y NUL File_Lists\multicolor.txt >NUL
copy /y NUL File_Lists\orange.txt >NUL
copy /y NUL File_Lists\pink.txt >NUL
copy /y NUL File_Lists\purple.txt >NUL
copy /y NUL File_Lists\red.txt >NUL
copy /y NUL File_Lists\yellow.txt >NUL
copy /y NUL File_Lists\others.txt >NUL


for /f "delims=" %%A in ('dir /b /s /a:-D ..\_realistic_GB\') do @(echo "%%A">>File_Lists\realistic_gb.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\blue\') do @(echo "%%A">>File_Lists\blue.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\brown\') do @(echo "%%A">>File_Lists\brown.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\gray\') do @(echo "%%A">>File_Lists\gray.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\green\') do @(echo "%%A">>File_Lists\green.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\inverted\') do @(echo "%%A">>File_Lists\inverted.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\multicolor\') do @(echo "%%A">>File_Lists\multicolor.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\orange\') do @(echo "%%A">>File_Lists\orange.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\pink\') do @(echo "%%A">>File_Lists\pink.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\purple\') do @(echo "%%A">>File_Lists\purple.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\red\') do @(echo "%%A">>File_Lists\red.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\yellow\') do @(echo "%%A">>File_Lists\yellow.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\_Others\') do @(echo "%%A">>File_Lists\others.txt)




montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\realistic_gb.jpg < File_Lists\realistic_gb.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\blue.jpg < File_Lists\blue.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\brown.jpg < File_Lists\brown.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\gray.jpg < File_Lists\gray.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\green.jpg < File_Lists\green.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\inverted.jpg < File_Lists\inverted.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\multicolor.jpg < File_Lists\multicolor.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\orange.jpg < File_Lists\orange.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\pink.jpg < File_Lists\pink.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\purple.jpg < File_Lists\purple.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\red.jpg < File_Lists\red.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\yellow.jpg < File_Lists\yellow.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x21 @- %Mytime%\others.jpg < File_Lists\others.txt




pause