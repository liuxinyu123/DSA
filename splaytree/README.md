SplayTree是一种二叉排序树，它能在O(log n)内完成插入、查找和删除操作。
(01) 伸展树属于二叉查找树，即它具有和二叉查找树一样的性质
(02)除了拥有二叉查找树的性质之外，伸展树还具有的一个特点是：当某个节点被访问时，
伸展树会通过旋转使该节点成为树根。这样做的好处是，下次要访问该节点时，能够迅速的访问到该节点
它是一种自调整形式的二叉查找树，它会沿着从某个节点到树根之间的路径，通过一系列的旋转把这个节点搬移到树根去。
未完成
