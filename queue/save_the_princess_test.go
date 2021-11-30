package main

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func saveThePrincess(n, k int) int {
	var last int
	q := []int{}

	for i := 1; i <= n; i++ {
		q = append(q, i)
	}

	for len(q) > 0 {
		for i := 0; i < k; i++ {
			leftPop := q[0]
			q = q[1:]
			q = append(q, leftPop)
		}
		last = q[len(q)-1]
		q = q[:len(q)-1]
	}

	return last
}

func TestSaveThePrincess(t *testing.T) {
	n := 8
	k := 3
	answer := saveThePrincess(n, k)
	assert.Equal(t, answer, 7, "IS not answer")
}
