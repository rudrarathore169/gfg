<h2><a href="https://www.geeksforgeeks.org/problems/delete-keys-in-a-linked-list/1">Delete All Occurrences in a Linked list</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 14pt;">Given a single linked list <strong>head</strong> and an integer <strong>x.</strong> Your task is to deletes all occurences of a key x present in the linked list. The function should returns the <strong>head</strong> of the modified linked list.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>head = 2-&gt;2-&gt;1-&gt;4-&gt;4, x = 4
<strong>Output: </strong>2 2 1<strong> </strong><strong style="font-size: 14pt;"><br></strong><strong style="font-size: 14pt;">Explanation:<br></strong>After deleting all occurrences of 4, the remaining nodes in the linked list are: 2 2 1.</span> </pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>head = 1-&gt;2-&gt;2-&gt;3-&gt;2-&gt;3, x = 2
<strong>Output: </strong>1 3 3<strong>
Explanation:</strong> Given number to delete is 2.
First line of output contains the number of remaining elements in the list.
After deleting all occurrences of 2, we have elements in the list as 1, 3, and 3.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong></span><br><span style="font-size: 14pt;">1 ≤ size of the linkedlist ≤ 100</span><br><span style="font-size: 14pt;">1 ≤ x ≤ N</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;