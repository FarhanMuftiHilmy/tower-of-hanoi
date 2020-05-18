# tower-of-hanoi

Here I used iterative solution from https://en.wikipedia.org/wiki/Tower_of_Hanoi

For an even number of disks:
1. make the legal move between pegs A and B (in either direction),
2. make the legal move between pegs A and C (in either direction),
3. make the legal move between pegs B and C (in either direction),
repeat until complete.

For an odd number of disks:
1. make the legal move between pegs A and C (in either direction),
2. make the legal move between pegs A and B (in either direction),
3. make the legal move between pegs B and C (in either direction),
repeat until complete.
In each case, a total of 2n − 1 moves are made.

I also used 1 dimensional array and numbers that represent the order of the disk for each tower.
disk[5] = {1, 2, 3, 4, 5}



