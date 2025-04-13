# include<stdio.h>

// 字符函数的学习

// 一.typedef关键字

// 定义：typedef是用来给类型重命名的，可以将复杂的类型简单化。

// 1.整型变量
// 若定义一个无符号的整型变量，一般情况下可能会这么写：
// int main(int argc, char const *argv[])
// {
//     unsigned int num_1 = 100;

//     return 0;
// }

// 但这样写很麻烦，需要简化一下，所以可以用typedef重命名并这么写：

// typedef unsigned int uint; // 这里将unsigned int重命名为uint
// int main()
// {
//     uint num_2 = 100; // 重命名后，可以这样定义unsigned类型，且num_1和num_2的类型一样

//     return 0;
// }


// 2.指针变量
// 对于指针类型也可以重命名，方法如下：

// 正常情况定义一个整型指针类型是这样的：

// int main()
// {
//     int* p_1;

//     return 0;
// }

// 可以使用typedef进行重命名，写法如下：

// typedef int* ptr_t;

// int main()
// {
//     ptr_t p_2; // p_2与p_1的数据类型一样，都是整数指针类型

//     return 0;
// }


// 使用typedef重命名的好处：
// 如以下代码所示，假如我要连续创建两个指针变量

// typedef int* ptr_t;

// int main()
// {
//     int* p1, p2; // 正常情况下是这么写的

//     // 但是这种情况下，其实p1是整型指针，p2是整型变量

//     // 这种情况下就相当于以下这种写法：
//     int* p1;
//     int p2;
//     // 这里的“*”相当于给p1用了，而后面的p2未受其影响，所以，这种写法不能连续定义两个指针变量

//     // 正确的写法如下：
//     int *p1, *p2;
//     // 这里的p1和p2都是整型指针变量

//     // 这时候还可以使用以下写法：
//     ptr_t p3, p4;
//     // p3和p4都是整型指针变量

//     return 0;
// }

// 但是，对于数组指针和函数指针稍微有点区别

// 数组指针
// int main()
// {
//     int arr[5] = {};
//     int (*p)[5] = &arr; // 这里的p是数组指针变量

//     // int(*)[]是整型指针数组类型

//     return 0;
// }

// 但是，如果像定义整型指针那样定义整型数组指针是错误的
// typedef int(*)[5] parr_t; // 这样写是不行的

// 正确写法是：
typedef int(*parr_t)[]; // 这里的parr_t是指针数组类型

int main()
{
    

    return 0;
}





