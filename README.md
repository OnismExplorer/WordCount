# 现代软件工程实践作业
&emsp;&emsp;本仓库提供了一个由`C 语言`代码编写的程序，用于统计文本文件(纯英文)中的字符数或单词数。其中空格，水平制表符，换行符均算字符。由空格或逗号分割开的都视为单词，且不做单词的有效性校验，例如：thi#,that视为用逗号隔开的2个单词。
## 输入输出说明
输入： [parameter] [input_file_name]<br>
&emsp;注： [parameter]为控制参数，取”-c”和”-w”之一；[input_file_name]为要被处理的文本文件名，默认存放在执行文件目录下。<br>
&emsp;输出：根据[parameter]为以下形式之一<br>
&emsp;&emsp;字符数：n<br>
&emsp;&emsp;单词数：n<br>
&emsp;&emsp;其中n为统计的字符数或单词数<br><br>
&emsp;运行结果如下图：
![image](https://github.com/OnismExplorer/WordCount/assets/119412587/c9008a97-9c58-45b7-8258-05649f815d72)<br>
注意，如果输出中文为乱码，解决办法是通过在该cmd(命令提示符)窗口中先输入以下代码将其编码格式调为UTF-8
``` cmd
chcp 65001
```
&emsp;出现这种情况的原因是命令提示符使用的是系统默认的编码，这通常是GBK或ANSI（在中文版Windows中通常是GBK）。<br><br>
&emsp;**可以直接将cmake-build-debug文件夹下的 WordCount.exe 下载到本地，与文本文件在同一个目录下(或输入时给出文本文件所在绝对路径)，使用命令控制台打开**，cmake-build-debug目录下提供了一个input.txt文本文件示例。<br>
代码在main.c文件中，相应位置带有注释。
