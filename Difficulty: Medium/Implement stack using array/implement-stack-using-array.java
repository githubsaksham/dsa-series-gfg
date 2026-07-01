class myStack {

    int[] arr;
    int top;
    int size;

    public myStack(int n) {
        arr = new int[n];
        size = n;
        top = -1;
    }

    // Check if stack is empty
    public boolean isEmpty() {
        return top == -1;
    }

    // Check if stack is full
    public boolean isFull() {
        return top == size - 1;
    }

    // Push element
    public void push(int x) {

        if (isFull()) {
            // System.out.println("Stack Overflow");
            return;
        }

        arr[++top] = x;
    }

    // Pop element
    public void pop() {

        if (isEmpty()) {
            // System.out.println("Stack Underflow");
            return;
        }

        top--;
    }

    // Peek element
    public int peek() {

        if (isEmpty()) {
            // System.out.println("Stack is Empty");
            return -1;
        }

        return arr[top];
    }
}