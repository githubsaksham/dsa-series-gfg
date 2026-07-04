import java.util.ArrayList;

class maxHeap {

    ArrayList<Integer> heap;

    // Constructor
    public maxHeap() {
        heap = new ArrayList<>();
    }

    public void push(int x) {

        // Step 1: End me element add karo
        heap.add(x);

        int i = heap.size() - 1;

        // Step 2: Element ko upar le jao
        while (i > 0) {

            int parent = (i - 1) / 2;

            // Max Heap property satisfied
            if (heap.get(parent) >= heap.get(i)) {
                break;
            }

            // Parent aur child swap
            int temp = heap.get(parent);
            heap.set(parent, heap.get(i));
            heap.set(i, temp);

            i = parent;
        }
    }

    public void pop() {

        // Empty heap
        if (heap.size() == 0) {
            return;
        }

        // Sirf ek element hai
        if (heap.size() == 1) {
            heap.remove(heap.size() - 1);
            return;
        }

        // Last element ko root par lao
        heap.set(0, heap.get(heap.size() - 1));

        // Last element remove karo
        heap.remove(heap.size() - 1);

        int i = 0;

        // Root ko neeche sahi position par bhejo
        while (true) {

            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if (left < heap.size()
                    && heap.get(left) > heap.get(largest)) {
                largest = left;
            }

            if (right < heap.size()
                    && heap.get(right) > heap.get(largest)) {
                largest = right;
            }

            // Heap property satisfy ho gayi
            if (largest == i) {
                break;
            }

            // Swap
            int temp = heap.get(i);
            heap.set(i, heap.get(largest));
            heap.set(largest, temp);

            i = largest;
        }
    }

    public int peek() {

        if (heap.size() == 0) {
            return -1;
        }

        return heap.get(0);
    }

    public int size() {
        return heap.size();
    }
}