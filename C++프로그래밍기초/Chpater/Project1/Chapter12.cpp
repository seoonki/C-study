
// Section_01
// UpCasting 과 DownCasting
//
// 기반 클래스 Calc
// 파생 클래스 Add
// 
// Add AddObj(3, 5);
// Calc* CalcPtr;
// CalcPtr = &AddObj;   <-- UpCasting 
//
// UpCasting 은 부모로부터 상속받은 부분만 참조하고 나머지는 사용하지 않겠다고 포기 선언하는 것과 같음
// 
// Calc* CalcPtr = new Add(3, 5)   <-- UpCasting 
// Add* AddPtr = (Add*) CalcPtr    <-- DownCasting 
//
// DownCasting 은 명시적 형변환인 경우에만, 한번 UpCasting 이 된 객체인 경우에만 가능
//
// 
// UpCasting 과 멤버함수 Overriding
//
// Calc* CalcPtr = new Add(3, 5)   <-- UpCasting 
// CalcPtr->Prn();
//
// Prn 이 Overiding 된 멤버함수일 때, 이 경우, Prn 은 기반클래스의 Prn 이 호출된다 (virtual function 아닌 경우)
//
// 포인터 변수의 자료형 (Calc*) 이 아닌 객체의 자료형 (Add) 에 의해서 호출될 함수를 결정하려면 어떻게 해야할까
// 이런 요구에 의해서 가상함수가 나옴
// UpCasting 되더라도 객체의 자료형에 의해서 Overriding 된 멤버함수가 호출되도록!



// Section_02
// Dynamic binding 과 Virtual function
//
// 변수의 자료형이 결정되는 시점은 컴파일 시점
// 변수에 값이 저장되는 시점은 실행 시점
// 
// Calc* CalcPtr;                // 컴파일 시점
// CalcPtr = new Add(3, 5)       // 실행 시점
// CalcPtr->Prn();
// 
// 컴파일 시점에 호출될 함수를 결정하는 static  binding
// 실행   시점에 호출될 함수를 결정하는 dynamic binding
//
// 멤버함수 Prn 을 virtual 함수로 선언해놓으면 dynamic binding --> 파생클래스의 Prn 호출

