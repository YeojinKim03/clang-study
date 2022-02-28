/* 컴퓨터의 메모리는 데이터를 보관하는 장소
바이트(8bit)단위로 주소가 지정됨
모든 변수는 주소를 가짐

포인터는 메모리 주소를 값으로 가지는 변수이다. 포인터 변수는 다음과 같이 선언된다
            type-name * variable-name;
variable-name은 선언된 포인터 변수의 이름이며, *는 variable-name이 포인터 변수임을 표시한다.
type-name은 포인터 변수 variable-name에 저장될 주소에 저장될 데이터의 유형을 지정한다.
            int(해당 주소에 저장되는 데이터 타입) * ptr(포인터 변수 이름); --> 정수형 포인터 변수다

연산자 &는 변수로부터 그 변수의 주소를 추출하는 연산자이다.
    int c = 12;
    int *p;  p라는 이름의 정수형 포인터 변수
    p = &c;  변수 c의 주소

    int x=1, y=2;
    int *ip;
    ip = &x   변수 x의 주소를 포인터변수 ip에다가 넣어라
    y= *ip    * 연산자 : 2가지 의미
                    -어떤 변수를 선언할 때 변수명 앞에 등장 --> 이 변수는 포인터 변수이다
                    -일반적인 포인터 변수 앞에 별표가 등장 --> 포인터변수가 저장하고 있는 주소에 저장된 값 / 그 주소가 참조하고 있는 자리
    *ip = 0; 

포인터와 배열은 매우 긴밀히 연관되어 있다.
예를 들어 다음과 같이 선언된 배열 a가 있다고 하자.
    int a[10]  크기 10칸인 배열
    배열의 이름은 배열의 시작 주소를 저장하는 포인터변수임 (단. 그 값을 변경할 수 없음)
    10개의 정수를 수용할 수 있는 메모리 (40바이트가 할당됨)

















    
*/


2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
#include<stdio.h>
#define MAX_STACK_SIZE 100
 
int stack[MAX_STACK_SIZE];
int top=-1;
 
int IsEmpty(){
    if(top<0)
        return true;
    else
        return false;
    }
int IsFull(){
    if(top>=MAX_STACK_SIZE-1)
        return true;
    else
        return false;
}
 
void push(int value){
    if(IsFull()==true)
        printf("스택이 가득 찼습니다.");
    else
        stack[++top]=value; 
}
 
int pop(){
    if(IsEmpty()==true)
        printf("스택이 비었습니다.");
    else 
        return stack[top--];
}
 
int main(){
    
    push(3);
    push(5);
    push(12);
    printf("%d ",pop());
    printf("%d ",pop());
    printf("%d ",pop());
 
    return 0;
}