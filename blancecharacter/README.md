编译器检查程序的语法错误，比如括号是否成对出现。
基本思想：做一个空栈。读入字符直到文件结尾，如果字符是一个开放符号，将其入栈。
如果是一个封闭符号，则当栈空时报错，否则，将元素弹出，如果弹出的符号不是其对应的开放符号，则报错。
到了文件尾，如果栈非空则报错。