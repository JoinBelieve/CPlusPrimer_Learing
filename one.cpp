//
//  one.cpp
//  pratice
//
//  Created by DAN on 2024/10/4.
//

#include "one.hpp"

void printHelloWorld() {
    std::cout << "Hello World" << std::endl;
}

void printTwoNumberX() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0 , v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2
    << " is " << (v1 * v2) << std::endl;
}

void printTwoNumberX2() {
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0 , v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
    std::cout << " and " << v2;
    std::cout << " is " << (v1 * v2) << std::endl;
}

void printTwoNumberX3() {
    std::cout << "/*";
    std::cout << "*/";
    std::cout << "*/";
    std::cout << " /* ";
}

void whileFunction() {
    int sum = 0 , val = 50;
    // 只要val的值小于等于50，while循环就会持续执行
    while (val <= 100) {
        std::cout << " " << val;
        sum += val;
        ++val;
    }
    std::cout << "\nSome of 5 to 100 inclusive is " << sum << std::endl;
}

void whileFunction2() {
    int val = 10;
    while (val > 0) {
        std::cout << " " << val;
        --val;
    }
    std::cout << std::endl;
}


void twoNumber() {
    int start = 0 , end = 0;
    std::cout << "Please input start number :" << std::endl;
    std::cin >> start;
    std::cout << "Please input end number : " << std::endl;
    std::cin >> end;
    std::cout << "start = " << start << ", start = " << end << std::endl;
    if (start > end) {
        std::cout << "第一个数不能大于第二个数" << std::endl;
        return;
    }
    while (start <= end) {
        std::cout << " " << start;
        start++;
    }
    std::cout << " " << std::endl;
}

void forTest() {
    //    int sum = 0;
    //    for (int val = -100; val <= 100; ++val) {
    //        sum += val;
    //    }
    //    std::cout << "\nSome of 1 to 10 inclusive is " << sum << std::endl;
    
    // 练习1.9
    //    int sum = 0;
    //    for (int val = 50; val <= 100; val++) {
    //        sum += val;
    //    }
    //    std::cout << "\nSome of 50 to 100 inclusive is " << sum << std::endl;
    
    // 练习1.10
//    for (int val = 10; val >= 0; val--) {
//        std::cout << "  " << val << std::endl;
//    }
    
    // 练习1.11
    int start = 0 , end = 0;
    std::cout << "Please input start number :" << std::endl;
    std::cin >> start;
    std::cout << "Please input end number : " << std::endl;
    std::cin >> end;
    std::cout << "start = " << start << ", start = " << end << std::endl;
    if (start > end) {
        std::cout << "第一个数不能大于第二个数" << std::endl;
        return;
    }
//    while (start <= end) {
//        std::cout << " " << start;
//        start++;
//    }
    for (; start <= end; start++) {
        std::cout << " " << start;
    }
    std::cout << " " << std::endl;
}

void inputTest() {
//    int sum = 0, value = 0;
//    // 读取数据直到遇到文件尾，计算所有输入的值的和
//    while (std::cin >> value) {
//        sum += value;
//    }
//    std::cout << "Sum is: " << sum << std::endl;
    
    // 练习： 编写程序，从cin读取一组数，输出其和。
    int sum = 0 , value = 0;
    while (std::cin >> value) {
        sum += value;
    }
    std::cout << "Sum is: " << sum << std::endl;
}

void ifTest() {
//    // currVal 是我们正在统计的数；我们将读入的新值存入val.
//    int currVal = 0 , val = 0;
//    // 读取第一个数，并确保确实有数据可以处理
//    if (std::cin >> currVal) {
//        int cnt = 1; // 保存我们正在处理的当前值的个数
//        while (std::cin >> val) {  // 读取剩余的数
//            if (val == currVal) {  // 如果值相同
//                ++cnt;             // cnt加1
//            }
//            else {
//                std::cout << currVal << " occurs " << cnt << " times" << std::endl;
//                currVal = val;   // 记住新值
//                cnt = 1;        // 重置计数器
//            }
//        }
//        // 记住打印文件中最后一个值的个数
//        std::cout << currVal << " occurs " << cnt << " times" << std::endl;
//    } // 最外层if语句在这里结束
    
    
    // 练习1.11
    int start = 0 , end = 0;
    std::cout << "Please input start number :" << std::endl;
    std::cin >> start;
    std::cout << "Please input end number : " << std::endl;
    std::cin >> end;
    std::cout << "start = " << start << ", start = " << end << std::endl;
    if (start > end) {
        for (; start >= end; start--) {
            std::cout << " " << start;
        }
        std::cout << " " << std::endl;
    } else {
        for (; start <= end; start++) {
            std::cout << " " << start;
        }
        std::cout << " " << std::endl;
    }
}

void countSalesItem() {
//    Sales_item item1 , item2;
//    std::cin >> item1 >> item2;
//    // 首先检查item1 和 item2 是否表示相同的书
//    if (item1.isbn() == item2.isbn()) {
//        std::cout << item1 + item2 << std::endl;
//    } else {
//        std::cerr << "Data must refer to same ISBN" << std::endl;
//    }
}
