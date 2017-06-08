/*
An anagram is a word that is formed by rearranging the letters of a word so as to produce a new word wich uses all the original letters exactly once.
For example, the word 'anagram' can be rearranged into 'maranag'.
Given two strings haystack and needle that contains ASCII characters, write an algorithm to output a list of 0-based indices of the occurrences of all anagrams of needle in haystack.
Input
The input to the function/method consists of two arguments-haystack,representing the second string.
Output
Retunr a list of integers representing the indices of the occurrences of all anagrams of needle in haystack.
Note
All character comparisons should be case sensitive.
An anagram need not be a valid English word.
Examples:
Example 1:
Input:
haystack = abdcghbaabcdij
needle = bcda
Output:
[0,8]
Explanation:
There are two anagrams of bcda. These are abdc at index 0 and abcd at index 8.
Example 2:
Input: 
haystack = bbbababaaabbbb
needle = ab
Output:
[2,3,4,5,6,9]
Explanation:
There are six anagrams of ab. These are ba,ab,ba,ab,ba and ab which occur at 2,3,4,5,6 and 9, respectively
 */
#include<iostream>
#include<cstring>
#include<vector>
#define MAX 256

bool compare(char arr1[], char arr2[])
{
	for (int i=0; i<256; i++)
		if (arr1[i] != arr2[i])
			return false;
	return true;
}

vector<int> getAnagramIndices(string haystack, string needle)
{
    int M = haystack.length(), N = needle.length(), aux;
    vector<int> test;
	char countP[MAX] = {0}, countTW[MAX] = {0};
	for (int i = 0; i < M; i++)
	{
		(countP[haystack[i]])++;
		(countTW[needle[i]])++;
	}
	for (int i = M; i < N; i++)
	{
		if (compare(countP, countTW)){
		    aux=i-M;
		    test.push_back(aux);
        }
		(countTW[needle[i]])++;
		(countTW[needle[i-M]])--;
	}
    
	if (compare(countP, countTW)){
	    aux=N-M;
        test.push_back(aux);
	}
    return test;
}

