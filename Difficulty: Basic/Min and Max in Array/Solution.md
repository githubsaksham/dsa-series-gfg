🔎 The Obvious Idea: Sort the Array
Yes, sorting works.
After sorting, the first element is minimum and the last is maximum.

But here’s the catch :-

Sorting takes O(n log n) time.

We only need two values.
Why rearrange the entire dataset?

Efficiency is about intention, not just correctness.

⚙️ The Approach I Used
Instead of sorting, I applied a single linear traversal.

• Assume first element as both min and max
• Traverse from index 1
• Update values whenever necessary

Total comparisons: 2(n − 1)
Time Complexity: O(n)

Best case = O(n)
Worst case = O(n)

Because every element must be examined at least once.



Another method with same time complexity :-


💼 Why This Matters
In real systems, unnecessary computation costs time and resources.

The goal isn’t to solve the bigger problem —
it’s to solve the exact problem.

That distinction defines strong problem solvers.
