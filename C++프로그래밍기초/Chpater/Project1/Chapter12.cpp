
// Section_01
// UpCasting �� DownCasting
//
// ��� Ŭ���� Calc
// �Ļ� Ŭ���� Add
// 
// Add AddObj(3, 5);
// Calc* CalcPtr;
// CalcPtr = &AddObj;   <-- UpCasting 
//
// UpCasting �� �θ�κ��� ��ӹ��� �κи� �����ϰ� �������� ������� �ʰڴٰ� ���� �����ϴ� �Ͱ� ����
// 
// Calc* CalcPtr = new Add(3, 5)   <-- UpCasting 
// Add* AddPtr = (Add*) CalcPtr    <-- DownCasting 
//
// DownCasting �� ����� ����ȯ�� ��쿡��, �ѹ� UpCasting �� �� ��ü�� ��쿡�� ����
//
// 
// UpCasting �� ����Լ� Overriding
//
// Calc* CalcPtr = new Add(3, 5)   <-- UpCasting 
// CalcPtr->Prn();
//
// Prn �� Overiding �� ����Լ��� ��, �� ���, Prn �� ���Ŭ������ Prn �� ȣ��ȴ� (virtual function �ƴ� ���)
//
// ������ ������ �ڷ��� (Calc*) �� �ƴ� ��ü�� �ڷ��� (Add) �� ���ؼ� ȣ��� �Լ��� �����Ϸ��� ��� �ؾ��ұ�
// �̷� �䱸�� ���ؼ� �����Լ��� ����
// UpCasting �Ǵ��� ��ü�� �ڷ����� ���ؼ� Overriding �� ����Լ��� ȣ��ǵ���!



// Section_02
// Dynamic binding �� Virtual function
//
// ������ �ڷ����� �����Ǵ� ������ ������ ����
// ������ ���� ����Ǵ� ������ ���� ����
// 
// Calc* CalcPtr;                // ������ ����
// CalcPtr = new Add(3, 5)       // ���� ����
// CalcPtr->Prn();
// 
// ������ ������ ȣ��� �Լ��� �����ϴ� static  binding
// ����   ������ ȣ��� �Լ��� �����ϴ� dynamic binding
//
// ����Լ� Prn �� virtual �Լ��� �����س����� dynamic binding --> �Ļ�Ŭ������ Prn ȣ��

