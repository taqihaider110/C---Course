#include <iostream>

class Stack {
  private:
    // Dynamic array to store the stack elements
    int * array;
  // Index of the top element
  int top;
  // Maximum capacity of the stack
  int capacity;

  public: Stack(int size) {
      capacity = size;
      array = new int[capacity];
      top = -1;
    }

    ~Stack() {
      delete[] array;
    }

  void push(int value) {
    if (top == capacity - 1) {
      std::cout << "Stack Overflow. Cannot push element: " << value << std::endl;
      return;
    }
    array[++top] = value;
    std::cout << "Pushed element: " << value << std::endl;
  }

  void pop() {
    if (top == -1) {
      std::cout << "Stack Underflow. Cannot pop from an empty stack." << std::endl;
      return;
    }
    int value = array[top--];
    std::cout << "Popped element: " << value << std::endl;
  }
};

int main() {
  int size = 5;
  std::cout << "Size of the stack: " << size << "\n" << std::endl;
  Stack stack(size);

  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);
  std::cout << "\nPopped 6 elements from the above stack:" << std::endl;
  stack.pop();
  stack.pop();
  stack.pop();
  stack.pop();
  stack.pop();
  stack.pop();
  return 0;
}
