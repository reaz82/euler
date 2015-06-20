def reverse(n): 
	reversed = 0
	while (n > 0):
		reversed = 10*reversed + n % 10
		n	= n/10
	return reversed

def isPalindrome(n):
	return n == reverse(n)

largestPalindrome = 0
a = 999
while (a > 100):
	b = 999 
	while (b >= a):
		if (a*b <= largestPalindrome): 
			break

		if (isPalindrome(a*b)): 
			largestPalindrome = a*b
		b -= 1; 
	a -= 1; 

print largestPalindrome
