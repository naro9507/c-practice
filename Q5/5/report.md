下記キャプチャは、
`struct input{short_num: 32767（short intの最大値）, int_num: 2147483647（intの最大値）, text[6]: "text_6"}` をバイナリファイルに書き込んだ後、そのファイルをxxdコマンドでバイナリファイルの中身を出力した結果である。

![xxd output](https://github.com/naro9507/c-practice/blob/main/Q5/5/xxd_output.png?raw=true)
short_numは、short int型で符号付き２バイト以内の整数値、つまり、2^(8*2)で数値を表現しているので、下記赤枠がshort_numの値を格納している。ただ、C言語ではshort intは２バイト分しか値を取れないが、値の格納領域としては４バイト分確保していることがわかる。


![xxd short_num output](https://github.com/naro9507/c-practice/blob/main/Q5/5/xxd_output1.png?raw=true)

int_numは、int型で符号付き４バイト以内の整数値、つまり、2^(8*4)で数値を表現しているので、下記赤枠がint_numの値を格納している。そのため、値の格納領域としては４バイト分確保していることがわかる。

![xxd int_num output](https://github.com/naro9507/c-practice/blob/main/Q5/5/xxd_output2.png?raw=true)

text[6]は、charの6バイト分をデータ保持できるので、
2^(8*6)のデータ領域を確保している。
つまり、下記赤枠がtext[6]のデータを格納している領域である。

![xxd text output](https://github.com/naro9507/c-practice/blob/main/Q5/5/xxd_output3.png?raw=true)
