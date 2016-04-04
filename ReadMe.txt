Question A

	To compile : type "make" in terminal.

	To run : type "./CowWeightCalc" in terminal.



Question B

100000:

	sort(): 0.044648 seconds
	v1/v2 are different.
	insertion_sort(): 106.295 seconds
	v1/v2 are the same.
10000:
	sort(): 0.011401 seconds
	v1/v2 are different.
	insertion_sort(): 1.08217 seconds
	v1/v2 are the same.
1000:
	sort(): 0.000285 seconds
	v1/v2 are different.
	insertion_sort(): 0.010917 seconds
	v1/v2 are the same.

O(n logn)所需的時間從n=1000~n=10000雖然多了200倍，但本來需要的時間就很少
O(n^2)則是多了9000多倍

由此可見n的個數對複雜度為O(n^2)的演算法影響較大(而且十分巨大，計算時間為指數成長)。
