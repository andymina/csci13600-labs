template <typename T> class Vector{
private:
	T *list;
	int listSize;
	void resize(int mode);

public:
	Vector();
	Vector(int size);
	~Vector();

	void pop();
	void push(T type);
	T get(int num);
	void insert(T type, int num);
	void remove(int index);
	int size();
	T &operator[](int index);

	std::string toString();
};

template <class T>
Vector<T>::Vector(){
	list = new T[0];
	this->listSize = 0;
}

template <class T>
Vector<T>::Vector(int size){
	list = new T[size];
	this->listSize = size;
}

template <class T>
Vector<T>::~Vector(){
	delete[] list;
}

template <class T>
void Vector<T>::resize(int mode){
	if (mode == 1){
		this->listSize += 1;
	} else {
		this->listSize -= 1;
	}

	T *temp = new T[this->listSize];

	for (int i = 0; i < this->listSize; i++){
		temp[i] = list[i];
	}

	*list = *temp;
	delete[] temp;
}

template <class T>
void Vector<T>::pop(){
	resize(-1);
}

template <class T>
void Vector<T>::push(T type){
	resize(1);
	list[this->listSize - 1] = type;
}

template <class T>
T Vector<T>::get(int num){
	return list[num];
}

template	<class T>
void Vector<T>::insert(T item, int index){

	int tempSize = this->listSize + 1;
	T *temp = new T[tempSize];

	for (int i = 0; i < (this->listSize); i++){
		temp[i] = list[i];
	}

	temp[index] = item;

	for (int i = index; i < this->listSize; i++){
		temp[i + 1] = list[i];
	}

	this->listSize += 1;

	for (int i = 0; i < this->listSize; i++){
		list[i] = temp[i];
	}

	delete[] temp;
}

template	<class T>
void Vector<T>::remove(int index){

	int tempSize = this->listSize - 1;
	T *temp = new T[tempSize];

	for (int i = 0; i < index; i++){
		temp[i] = list[i];
	}

	int tempIndex = index;

	for (int i = index + 1; i  < this->listSize; i++){
		temp[tempIndex] = list[i];
	}

	this->listSize -= 1;

	for (int i = 0; i < this->listSize; i++){
		list[i] = temp[i];
	}

	delete[] temp;
}

template <class T>
int Vector<T>::size(){
	return this->listSize;
}

template <class T>
T &Vector<T>::operator[](int index){
	return list[index];
}

template <class T>
std::string Vector<T>::toString(){
	std::string result = "";

	for (int i = 0; i < (this->listSize); i++){
		result += std::to_string(list[i]);
		result += " ";
	}

	return result;
}
