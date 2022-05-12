# Arduino-TM74HC595_DisplayDriver

整个驱动皆在Arduino Uno板上完成开发 并目前仅仅在Uno板上完成测试【因为我手头没有像Mega或者Nano等别的开发板】

The whole program is based on Arduino Uno Board, and was only tested on this type of Arduino Board, because sadly I don't have any other type of boards, such as Mega or Nano.

目前有计划去买一块Mega 2560开发板自用但……尚未确定 等真的入手了会第一时间在上面测试这个驱动【虽然我自己不觉得会出什么问题】

I have the plan to buy a Mega 2560 board on my own, but now it's just a plan. When I get it I'll test this Driver on the Mega board although I don't think it'll go wrong.

For users who don't speak chinese: I must say that my native language is chinese, that's why all the comments in the program are in my native language because it's much easier for me. In v1.1.1ev all comments are translated into English and later when possible, German too, but there may be wrong translations because as I said just now, neither English nor German is my native language, and I don't want to translate it with a translator because the translations are usually incorrect when I try to translate sth. from or to Chinese.

Und... (Für die die Deutsch sprechen)

Sowie ich oben gesagt habe, dass Deutsch nicht meine Muttersprache ist. Ich meine dass ich jetzt in einer Internat im Baden-Württemburg aber trozdem... Meine Deutsch ist nicht so gut um die alle ins Deutsch zu übersetzten. Wenn ich wirklich so viele Zeit und Lust habe, werde ich einmal probieren, dass die alle übersetzen, aber ich weiß nicht wann.

===============================

04.xx.2022: Project started

05.05.2022: v1.0 beta released

05.12.2022: v1.1.1 beta released

05.12.2022: v1.1.1ev (English Version) released and all comments are translated

===============================

请务必查看$/example下的example.ino文件 内有库和所有成员函数的使用实例

Please see the example.ino in {$/example} in order to know how to use this library

===============================

Future:

Idk:D

老实说这个设备是真的小众 这类四位数字显示器最常见的应该是TM1650吧 叫做结业项目时候手头只有这个TM74HC595才不得已用的（

然后GitHub上找到的几个完整的库都写的……有点乱 用起来是真的不习惯（尤其是那个最高星的private里就仨记录接口的int算什么啊什么函数都往public里塞就不怕不看头文件调用错嘛）

所以看了下几个现成的库的整体思路和显示模块的电路图随后自己写了一个出来（

GitHub号也是自己心血来潮去建的 纯粹就为了发出来（

整体的显示思路基本参考了GitHub上的一个实例：https://github.com/magiccow/_7seg-display-simple

其实那个已经写的很……好了 算是我看过的所有相关项目里最好的一个 所以就显示的底层架构是参考（zhao ban）了他项目里的那个.ino文件里的显示函数【并调整了一下格式】然后写完全成一个完整的库
