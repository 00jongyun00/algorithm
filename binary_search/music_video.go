package main

import (
	"bufio"
	"fmt"
	"os"
)

var rd = bufio.NewReader(os.Stdin)
var wr = bufio.NewWriter(os.Stdout)
var n, m, max, result int
var a []int

func count(pivot int) int {
	var count, accu int
	count = 1
	for i := 0; i < n; i++ {
		if accu+a[i] > pivot {
			count++
			accu = a[i]
		} else {
			accu += a[i]
		}
	}
	return count
}

func main() {
	defer wr.Flush()
	fmt.Fscan(rd, &n, &m)
	a = make([]int, n)

	for i := 0; i < n; i++ {
		fmt.Fscan(rd, &a[i])
		max += a[i]
	}

	left := 1
	right := max
	for left <= right {
		pivot := (left + right) / 2
		if count(pivot) <= m {
			right = pivot - 1
			result = pivot
		} else {
			left = pivot + 1
		}
	}
	fmt.Fprintf(wr, "%d\n", result)
}
