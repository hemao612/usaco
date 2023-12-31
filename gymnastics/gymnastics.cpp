/*
In order to improve their physical fitness, the cows have taken up gymnastics! Farmer John designates his favorite cow Bessie to coach the N other cows
and to assess their progress as they learn various gymnastic skills. In each of K practice sessions (1≤K≤10), Bessie ranks the N cows according to their
performance (1≤N≤20). Afterward, she is curious about the consistency in these rankings. A pair of two distinct cows is consistent if one cow did better
than the other one in every practice session.

Help Bessie compute the total number of consistent pairs.

INPUT FORMAT (file gymnastics.in):
The first line of the input file contains two positive integers K and N. The next K lines will each contain the integers 1…N in some order,
indicating the rankings of the cows (cows are identified by the numbers 1…N). If A appears before B in one of these lines, that means cow A
did better than cow B.

OUTPUT FORMAT (file gymnastics.out):
Output, on a single line, the number of consistent pairs.
SAMPLE INPUT:
3 4
4 1 2 3
4 1 3 2
4 2 1 3
SAMPLE OUTPUT:
4
The consistent pairs of cows are (1,4), (2,4), (3,4), and (1,3).

Problem credits: Nick Wu

Website: http://www.usaco.org/index.php?page=viewproblem2&cpid=963
 */
#include <cstdio>
#include <iostream>

using namespace std;

int cows[20][10];
int main()
{
    return 0;
}