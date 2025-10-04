# Book Allocation Problem

There are N books, each $ith$ book has A[i] number of pages.

You have to allocate books to M number of students so that the maximum number of pages allocated to a student is minimum.

- Each book should be allocated to a student.
- Each student has to be allocated at least one book,
- Allotment should be in contiguous order.

Calculate and return that minimum possible number.

Return -1 if a valid assignment is not possible.

**Example**
Input

`Books: [10, 20, 30, 40]`
`Students: 2`

Possible Distributions

Student 1: [10, 20] (30 pages)
Student 2: [30, 40] (70 pages)

Max Pages: 70

Student 1: [10, 20, 30] (60 pages)
Student 2: [40] (40 pages)

Max Pages: 60

**Output**
60 (Minimum possible maximum pages)

[**Solution**](book.cpp)
