#include <iostream>
using namespace std;

int main()
{
        /* 程序开始
 *          * 提示输入
 *                   * 等价表达式：(std::cout << "Enter two numbers:") << std::endl;
 *                            * endl是立即刷新缓冲区，并输出换行，便于定位问题且美观
 *                                    */
        cout << "请输入两个整数:" << endl;

                        float  a = 0, b = 0;
                         // 程序会在这里等待两个整数的输入
                               cin >> a;
                               cin >> b;
                         // 拿到输入后，会计算并输出
                               cout << "The sum of " << a << " and " << b << " is " << a+b << endl;
                         // 报告老板，我把活正常干完了ma
          return 0;
                                                                                      
        
}
