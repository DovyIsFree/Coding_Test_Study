#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	string word;
	cin >> word;

	//�ܾ� �Է� string -> char array, ���̵�!
	char* arr = new char[word.length() + 1];
	memmove(arr, word.c_str(), word.length());


	//2�� for��
	//1��° a~z �ƽ�Ű�ڵ� Ȱ��
	//2��° �Է¹��� �ܾ�� ã���� break,else printout -1
	
	for (int i = 0; i < 26 ; i++) {
		for (int j = 0; j < word.length()+1; j++) {
			if (char(i + 97) == arr[j]) {
				cout << j << " ";
				break;
			}
			if (j == word.length())
				cout << "-1 ";
		}
	}

	return 0;
}