/*
 #描述
 
 请根据自己的理解编写冒泡排序算法，数组大小1000以内
 
 #输入
 
 第一行是n，表示数组的大小
 
 接着n行是数组的n个元素
 
 #输出
 
 排序之后的结果
 
 一个元素一行
 
 
 
 */
#include <iostream>
using namespace std;

int main() {
    
    int n, a[1000];
    
    cin >> n;
    //输入n个数存放与数组a中
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    

    //冒泡程序，比较数，大数会逐渐放到最后，故称为冒泡排序
    //第一个for是指一个数比较过程，第二个for是指轮到第几个数进行冒泡
    for (int i = 0 ; i < n-1; i++) {
        for (int j = 1; j < n-i; j++) {    //n-i的原因是减少和之前已经比较过的数继续比较了
            if (a[j-1] > a[j]) {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    
    /*
     两个for要进行的循环
     横向为 第二个for控制的循环【n-i则倒三角减少】，竖向为第一个for控制的循环
     00000000000000000
     0000000000000000
     000000000000000
     00000000000000
     0000000000000
     000000000000
     00000000000
     0000000000
     000000000
     00000000
     0000000
     000000
     00000
     0000
     000
     00
     0
     */
    
    //输出
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
       
    }
    
    
    
    
    
    return 0;
}
