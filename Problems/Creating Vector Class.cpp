/*

	Creat A Vector Class.

*/

#include <iostream>

using namespace std;

template <class T>
class ClsMyVector
{

private:

	int sz, Space;
	T* elem;

public:

	explicit ClsMyVector(int Size)

		: sz{ Size },

		elem{ new double[sz] }

	{

		for (short i = 0; i < sz; i++)
			elem[i] = 0;

	}
	ClsMyVector(initializer_list<T> lst) :
		sz{ (int)lst.size() },

		elem{ new double[sz] }
	{

		copy(lst.begin(), lst.end(), elem);

	}
	ClsMyVector() : sz{ 0 }, elem{ nullptr }, Space{ 0 } {}

	~ClsMyVector() { delete[] elem; }

	int Size() const { return sz; }

	T Get(int n) { return elem[n]; }

	void Set(int n, T v) { elem[n] = v; }

	void PrintElemnts() {

		double* dp = elem;

		for (short i = 0; i < sz; i++) {

			cout << *dp << ' ';

			dp++;

		}

	}

	ClsMyVector& operator=(const ClsMyVector& Other) {

		if (this == &Other) return *this;

		if (Other.sz <= Space) {

			for (int i = 0; i < sz; i++) elem[i] = Other.elem[i];

			sz = Other.sz;

			return *this;
		}

		double* p = new double[Other.sz];

		for (int i = 0; i < sz; i++) p[i] = Other.elem[i];

		delete elem;

		elem = p;

		Space = sz = Other.sz;

		return *this;

	}

	T& operator[](int n) {

		return elem[n];

	}
	const T operator[](int n) const {

		return elem[n];

	}

	void Move(ClsMyVector& a)
	{

		delete[] elem;

		elem = a.elem;

		sz = a.sz;

		a.elem = nullptr;

		a.sz = 0;

	}

	void PushBack(const T& Newitem) {

		if (Space = 0)
			Reserve(8);

		else if (sz = Space)
			Reserve(Space * 2);

		elem[sz] = Newitem;
		sz++;

	}

	void Resize(int NewSize) {

		Reserve(NewSize);
		for (int i = 0; i < NewSize; i++) elem[i] = NULL;
		sz = NewSize;
	}
	void Reserve(int NewAlloc) {

		if (NewAlloc <= Space) return;

		T* p = new T[NewAlloc];

		for (int i = 0; i < sz; i++) p[i] = elem[i];

		delete[] elem;

		elem = p;

		Space = NewAlloc;

	}

	int Capacity() const { return Space; }

	T at(int n) {

		if (n < 0 || sz <= n) throw out_of_range();

		return elem[n];

	}

	void set(T Val) {

		if (n < 0 || sz <= n) throw out_of_range();

		elem[n] = Val;

	}

};

int main()
{

    return 0;

}
