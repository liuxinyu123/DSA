栈的应用之一：平衡符号
编译器用来检查语法错误，保证括号成对出现

基本思想：建立一个空栈，当遇到左符号（如(,[,{,）时，入栈，
当遇到右括号时，如果栈为空，则匹配失败，否则出栈，看右括号是否和出栈的匹配
如果不匹配，则匹配失败。
如果检查到最后，栈不为空，则匹配失败，否则匹配成功
