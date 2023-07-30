#include <iostream>

class Queue {
  private: int * nums; // Dynamic nums to store the queue elements
  int front; // Index of the front element
  int rear; // Index of the rear element
  int capacity; // Maximum capacity of the queue
  int size; // Current size of the queue
  public: Queue(int queueSize) {
      capacity = queueSize;
      nums = new int[capacity];
      front = rear = -1;
      size = 0;
    }
    ~Queue() {
      delete[] nums;
    }
  void enqueue(int value) {
    if (size == capacity) {
      std::cout << "Queue Overflow. Cannot enqueue element: " << value << std::endl;
      return;
    }
    rear = (rear + 1) % capacity;
    nums[rear] = value;
    size++;
    if (front == -1) {
      front = rear;
    }
    std::cout << "Enqueued element: " << value << std::endl;
  }
  void dequeue() {
    if (size == 0) {
      std::cout << "Queue Underflow. Cannot dequeue from an empty queue." << std::endl;
      return;
    }
    int value = nums[front];
    front = (front + 1) % capacity;
    size--;
    std::cout << "Dequeued element:" << value << std::endl;
    if (size == 0) {
      front = rear = -1;
    }
  }
};
int main() {
  int queueSize = 5;
  std::cout << "Size of the queue: " << queueSize << std::endl;
  Queue queue(queueSize);
  queue.enqueue(1);
  queue.enqueue(2);
  queue.enqueue(3);
  queue.enqueue(4);
  queue.enqueue(5);
  queue.dequeue();
  queue.dequeue();
  queue.dequeue();
  queue.dequeue();
  queue.dequeue();
  queue.dequeue();
  return 0;
}
