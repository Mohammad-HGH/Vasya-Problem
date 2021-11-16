# Vasya Problem
You are given n non-decreasing arrays of non-negative numbers.
<br/>
Vasya repeats the following operation k times:
<br/>
◆ Selects a non-empty array.
<br/>
◆ Puts the first element of the selected array in his pocket.
<br/>
◆ Remove the first element from the selected array.
<br/>
Vasya wants to maximize the sum of the elements in his pocket.
<br/>

# Input
The first line contains two integers n and k (1 ≤ n , k ≤ 3000): the number of arrays
and operations.
Each of the next n lines contain an array. The first integer in each line is ti (1 ≤ ti ≤
106): the size of the i-th array. The following ti integers ai,j (0≤ai,j≤…≤ai , ti ≤ 108)
are the elements of the i-th array.
It is guaranteed that k ≤ ∑𝑛 𝑖=1 𝑡𝑖 ≤ 106.
<br/>

# Output
Print one integer: the maximum possible sum of all elements in Vasya's pocket
after k operations.
<br/>


# Example
Input:
<br/>
3 3
<br/>
2 5 10
<br/>
3 1 2 3
<br/>
2 1 20
<br/>
Output:
<br/>
26

