// program2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int packet = 1;

void Swap(int& parameterX, int& parameterY)
{
    int a = parameterX;
    parameterX = parameterY;
    parameterY = a;
}

int main()
{
#pragma region 스트림
    // 시간의 흐름에 따라 연속적으로 발생하는 데이터의 흐름입니다.

    //int count=0;
    //
    //std::cout << "Series:";
    //std::cin >> count;
    //for (int i = 0; i < count; i++)
    //{
    //    std::cout << "PlayStation" <<i+1 << std::endl;
    //}

    // 스트림은 운영 체제에 의해 생성되며, 스트림 자체에 버퍼라는
    // 임시 메모리 공간이 존재합니다



#pragma endregion

#pragma region 범위 지정 연산자
    // 여러 범위에서 사용되는 식별자를 구분하는데 
    // 사용하는 연산자 입니다.

    // int packet = 100;
    // 
    // std::cout << "packet지역변수의값 : " << packet << std::endl;
    // std::cout << "packet전역변수의값 : " << ::packet << std::endl;

    // 범위 지정 연산자는 전역변수와 같은 이름의 지역변수가
    // 선언되었을 때 가장 가까운 범위에 선언된 변수의 이름을
    // 사용하는 범위 규칙이 존재하기 때문에 전역변수가 호출되지 않습니다
#pragma endregion

#pragma region 참조자
    // 하나의 변수에 또 다른 이름을 지정하는 지정자 입니다.
    // int room = 10;
    // 
    // int& a = room;
    // 
    // std::cout << a;

    // int x = 10;
    // int y = 20;
    // 
    // std::cout << "B" << x << y << std::endl;
    // 
    // Swap(x, y);
    // 
    // std::cout << "A" << x << y;


#pragma endregion

#pragma region 동적 할당

    int* pointer = new int;
    *pointer = 10;
    cout << *pointer << endl;
    delete pointer;
    pointer = new int[5];

    for (int i = 0; i < 5; i++)
    {
        pointer[i] = i * 10 + 10;
        cout << "pointer[" << i << "] : " << pointer[i] << endl;
    }

    delete[] pointer;

#pragma endregion


}