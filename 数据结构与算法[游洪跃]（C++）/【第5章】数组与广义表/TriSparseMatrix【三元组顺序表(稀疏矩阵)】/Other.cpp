/********************************************************************************
CopyRight  : 2012-2013, HerBinUnversity, GatieMe
File Name  : SqList.h
Description: 顺序栈SqStack主函数外部函数文件
Author     : Gatie_Me
Version    : Copyright 2012
Data_Time  : 20112-8-29 10:28:43
Content    : 数据结构与算法（C++）版书上源码
********************************************************************************/

#include <iostream>
#include <ctime>
#include <conio.h>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <cstring>
#include <ctime>

using namespace std;


// 函数名称：template <class ElemType> void Write(const ElemType &e)
// 操作结果: 输入数据元素
template <class ElemType>
void Read(ElemType &elem)
{
    cin >>elem;    //输入元素的信息
}

// 函数名称：template <class ElemType> void Write(const ElemType &e)
// 操作结果: 显示数据元素
template <class ElemType>
void Write(ElemType &elem)
{
    cout <<elem <<"  ";     //输出元素的信息
}

void Welcome( )
{
    const char *inFor[11];
    inFor[0] = "                ****************************************************              ";
    inFor[1] = "                *           Welcome To The Array World!!           *              ";
    inFor[2] = "                *       You Will Fall In Love In This World!       *              ";
    inFor[3] = "                *       We All Hope That Which Is Said To Us       *              ";
    inFor[4] = "                *        List's Strory Is Only The Begining        *              ";
    inFor[5] = "                ****************************************************              ";

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; inFor[i][j] != '\0'; j++)
        {
            cout <<inFor[i][j];
        }
        cout <<endl;
    }

    cout <<"Please enter any key to continue" <<endl;
    getchar( );
    system("cls");
}



void Menu( )
{
    system("cls");
    const char *menu[10] = {
        "\t\t********************************************",
        "\t\t**           1 -=> 建立稀疏矩阵           **",
        "\t\t**        2 -=> 从文件读取稀疏矩阵        **",
        "\t\t**           3 -=> 输出稀疏矩阵           **",
        "\t\t**           4 -=> 更改矩阵数据           **",
        "\t\t**        5 -=> 将稀疏矩阵的数据存入文件  **",
        "\t\t**          6 -=> 将稀疏矩阵转置          **",
        "\t\t**            7 -=> 矩阵的运算            **",
        "\t\t**             0 -=> 退出程序             **",
        "\t\t********************************************",
        };

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; menu[i][j] != '\0'; j++)
        {
            cout <<menu[i][j];
        }
        cout <<endl;
    }
    cout <<"请输入您的选择" <<endl;
}


// 延时函数
void Delay( )
{
    for(int i = 0; i < 1000000; i++);
}

// 载入函数
void Lording( )
{
    system("cls");

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10000000; j++);
        cout <<"□";
    }
    cout <<endl;

    system("cls");
}

void Version( )
{
    cout <<"\t\t**************************************************" <<endl;
    cout <<"\t\t**  Wacky Window (c) 2012 Wacky SoftWare. Inc.  **"<<endl;
    cout <<"\t\t**     Complied on " <<__DATE__ <<" at " <<__TIME__ <<"      **"<<endl;
    cout <<"\t\t**************************************************" <<endl;
    system("pause");
}


void Stop( )        // 停止函数
{
    char answer;

    do
    {	// 循环直到用户输入恰当的回答为止
        cout << "(y, n)?";
        cout << "用y或n回答:";
        while ((answer = getchar( )) == '\n');	// 跳过空格,制表符及换行符获取一字符

    }while (answer != 'y' && answer != 'Y' && answer != 'n' && answer != 'N');

    //#if (VERSION)     // 程序编译信息输出
    Version( );         // 显示程序的编译信息
  //  #endif

    if(answer == 'y' || answer == 'Y')
    {
        cout <<"用户选择退出";
        exit(0);
    }
    else
    {
        cout <<"用户取消" <<endl;
    }
}
