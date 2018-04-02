#include "queue.hpp"
#include <cstdlib>

queue <int> q;

int main()
{
	cout << "size: " << q.size() << endl;

	cout << "-----PUSH A INT-----" << endl;
	q.push(1);
	cout << "front: " << q.front() << " end: " << q.end() << endl;

	cout << "-----PUSH ELEMENTS-----" << endl;
	for (int i = 1; i <= 7; i++)
	{
		q.push(i);
		cout << i << " pushed" << endl << "size: " << q.size() << endl;
	}

	cout << "-----POPING ELEMENTS-----" << endl;
	for (int i = 1; i <= 7; i++)
	{
		q.pop();
		cout << "size:" << q.size() << endl;
	}

	cout << "end: " << q.end() << " size: " << q.size() << " isEmpty: " << q.empty() << endl;
	q.pop();
	cout << "end: " << q.end() << " size: " << q.size() << " isEmpty: " << q.empty() << endl;

	system("pause");

	return 0;
}
