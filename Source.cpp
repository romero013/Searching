// ������������ ������ ������� �++
#include <iostream>
using namespace std;

template <typename T> int searchIndex(T array[], int length, T key, int begin = 0) { // ����� ����� ������� �������
	for (int i = begin; i < length; i++)
		if (array[i] == key)
			return i;
	return -1;
}
template <typename T> int searchLastIndex(T array[], int length, T key, int begin = -1) { // ����� ����� � ����� �������
	if (begin == -1)
		begin = length - 1;
	for (int i = begin; i >= 0; i--)
		if (array[i] == key)
			return i;
	return -1;
}
void showWord(char array[], int length) {
	for (int i = 0; i < length; i++)
		cout << array[i];
	cout << endl;
}
void subWord(char word[], int length, char sym);

int main() {
	setlocale(LC_ALL, "Russian");
	int n;		
	// ����� ���������� ��������� �������� � ������ � ������� begin
	/*double a[5] = {5.3, 8.1, 10.0, 5.3, -6.0};
	int index = searchLastIndex(a, 5, 5.3);
	if (index == -1)
		cout << "�������� ��� � �������.\n";
	else
		cout << "��������� ������� �������� " << index << endl;*/

	// ����� ������� ��������� �������� � ������ � ������� begin
	/*int index = searchIndex(a, 5, 5.3, 2);
	if (index == -1)
		cout << "�������� ��� � �������.\n";
	else
		cout << "������� ����� �� " << index << " �������.\n";*/

	// ������ "��������"
	cout << "������ 1.\n���������� ������:\n";
	char word[8] = { 'f', 'u', 'n', 'c', 't', 'i', 'o', 'n' };
	showWord(word, 8);
	cout << "������� ������: ";
	char sym;
	cin >> sym;
	cout << "��������:\n";
	subWord(word, 8, sym);

	return 0;
}
void subWord(char word[], int length, char sym) {
	int index = searchIndex(word, length, sym);
	if (index != -1) {
		for (int i = index; i < length; i++)
			cout << word[i];
		cout << endl;
	}
	else
		cout << "ERROR\n";
}