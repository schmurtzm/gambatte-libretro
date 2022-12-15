@FOR /F "tokens=1,2,3* delims=:, " %%i in ('echo %time%') do @set Mytime=%%ih%%jm%%ks
@set Mytime=%date:~-4,4%-%date:~-7,2%-%date:~-10,2%_%Mytime%
@echo %Mytime%

md File_Lists
md %Mytime%

copy /y NUL File_Lists\0_Essentials.txt >NUL
copy /y NUL File_Lists\1_Subtle.txt >NUL
copy /y NUL File_Lists\2_Single_Color.txt >NUL
copy /y NUL File_Lists\3_Multicolor.txt >NUL
copy /y NUL File_Lists\4_Hardware.txt >NUL
copy /y NUL File_Lists\5_Nintendo_Official.txt >NUL
copy /y NUL File_Lists\6_Extras.txt >NUL
copy /y NUL File_Lists\7_Others.txt >NUL


for /f "delims=" %%A in ('dir /b /s /a:-D ..\0_Essentials\') do @(echo "%%A">>File_Lists\0_Essentials.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\1_Subtle\') do @(echo "%%A">>File_Lists\1_Subtle.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\2_Single_Color\') do @(echo "%%A">>File_Lists\2_Single_Color.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\3_Multicolor\') do @(echo "%%A">>File_Lists\3_Multicolor.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\4_Hardware\') do @(echo "%%A">>File_Lists\4_Hardware.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\5_Nintendo_Official\') do @(echo "%%A">>File_Lists\5_Nintendo_Official.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\6_Extras\') do @(echo "%%A">>File_Lists\6_Extras.txt)
for /f "delims=" %%A in ('dir /b /s /a:-D ..\7_Others\') do @(echo "%%A">>File_Lists\7_Others.txt)




montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\0_Essentials.jpg < File_Lists\0_Essentials.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\1_Subtle.jpg < File_Lists\1_Subtle.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x5 @- %Mytime%\2_Single_Color.jpg < File_Lists\2_Single_Color.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\3_Multicolor.jpg < File_Lists\3_Multicolor.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x4 @- %Mytime%\4_Hardware.jpg < File_Lists\4_Hardware.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x8 @- %Mytime%\5_Nintendo_Official.jpg < File_Lists\5_Nintendo_Official.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x15 @- %Mytime%\6_Extras.jpg < File_Lists\6_Extras.txt
montage.exe -geometry 386x305+10+10 -background "#303030" -tile 6x19 @- %Mytime%\7_Others.jpg < File_Lists\7_Others.txt



pause