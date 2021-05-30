#include<iostream>
using namespace std;
#define N 3
typedef struct Tree* TreeN;
struct Tree{
	double num = NULL;
	char letter = NULL;
	TreeN lc = NULL, rc = NULL;
};

int main() {
	cout << "输入" << N << "组字符与频率:\n";
	char x[N];//代表字符
	double y[N];//代表频率
	double a, b;
	for (int j = 0; j < N; j++) {
		cin >> x[j] >> y[j];//输入字符和频率
	}
	TreeN t[N];
	for (int i = 0; i < N; i++) {
		t[i] = new Tree;
		t[i]->letter = x[i];
		t[i]->num = y[i];
	}
	TreeN p = new Tree;
	p->lc = t[0];
	p->rc = t[1];
	TreeN q = new Tree;
	q->lc = p;
	q->rc = t[1];
	return 0;
}
//a 20 b 30 c 50