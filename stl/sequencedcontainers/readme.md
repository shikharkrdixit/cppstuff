#### vector : 

front(), back(), begin(), rbegin(),crbegin(), cbegin(), end(), rend(), rend(),crend(), cend(), sisze() - O(1)

push_back() - worst case(O(1)) and O(n) generally.
pop.back() - worst case((O(1)) and O(n) generally.

insert() - O(n) for inserting elements at given positions.
erase() - O(n) to change size of elements
resize() - O(n) resizing and initializing

***

#### forward_list : 
these are singly - linked lists

can be used to insert in middle, remove from middle or merge

insert_after() - O(n)
erase_after() - O(n)
push_front() - O(1)
pop_front() - O(1)
reverse() - O(n)
sort() - O(nlogn)
remove() - O(n)
assign() - O(n)

***

#### list : 

reverse(),unique(),remove() - O(n)

front(), back(), size(), begin(), end(), erase(),push_front(), push_back(), pop_front(), pop_back() - O(1)

sort - O(nlogn)

***

