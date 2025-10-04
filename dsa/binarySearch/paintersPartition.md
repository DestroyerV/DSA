# Painter's Partition Problem

Give are N boards of length of each given in the form of array, and M painters, such that each painter takes 1 unit of time to paint 1 unit of the board.

The task is to find the minimum time to paint all boars under the constraints that any painter will only paint continuous sections of the boards.

**Example**
Input

`Board Lengths: [10, 20, 30, 40]`
`Number of Painters: 2`

Possible Distributions

Painter 1: [10, 20] (30 units of length)
Painter 2: [30, 40] (70 units of length)

Maximum Time: 70 units
Painter 1: [10, 20, 30] (60 units of length)
Painter 2: [40] (40 units of length)

Maximum Time: 60 units

**Output**
60 (Minimum possible maximum painting time)
