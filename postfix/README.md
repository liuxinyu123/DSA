栈的应用之二：后缀表达式求值

基本思想：先建立空栈，当遇到数字时，将其压栈，遇到算符时，将最近压栈的两个元素出栈，并将他们做相应的运算。
知道最后到达结束，栈顶元素就是结果