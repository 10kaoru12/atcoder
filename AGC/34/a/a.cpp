/* include */
#include <bits/stdc++.h>

/* using */
using namespace std;

/* main constructor */
struct Fast
{
	Fast()
	{
		std::cin.tie(0);
		ios::sync_with_stdio(0);
		//cout << fixed << setprecision(12);
	}
} fast;

/* template */
template <class T>
bool chmax(T &a, const T &b) { return (a < b) ? (a = b, 1) : 0; }
template <class T>
bool chmin(T &a, const T &b) { return (b < a) ? (a = b, 1) : 0; }

/* define */
#define REP(i, x, n) for (int i = x; i < (int)(n); ++i)
#define RREP(i, x, n) for (int i = x - 1; i >= (int)(n); --i)
#define rep(i, n) REP(i, 0, n)
#define reps(i, n) REP(i, 1, n + 1)
#define rrep(i, n) RREP(i, n, 0)
#define each(i, n) for (auto &i : n)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define eunique(x) \
	sort(all(x));  \
	(x).erase(unique(all(x)), (x).end())
#define int long long
#define mp make_pair
#define r0 return 0

/* function */
int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a * b / gcd(a, b); }

/* const */
const int inf = 1e9 + 7;
const int dxl[8] = {1, 0, -1, 0, 1, -1, -1, 1};
const int dyl[8] = {0, 1, 0, -1, 1, 1, -1, -1};
const int dxs[4] = {1, 0, -1, 0};
const int dys[4] = {0, 1, 0, -1};

/* main */
signed main(void)
{
	int n, a, b, la, lb, cnt, a2, b2, la2, lb2;
	bool flag = 0;
	string s;
	a2 = a;
	b2 = b;
	la2 = la;
	lb2 = lb;
	cin >> n >> a >> b >> la >> lb >> s;
	cnt = lb - b;
	while (b != lb)
	{
		if ((s[(b - 1) + 2] == '.') && ((cnt - 2) >= 0))
		{
			b += 2;
			cnt -= 2;
		}
		else if ((s[(b - 1) + 1] == '.') && ((cnt - 1) >= 0))
		{
			b++;
			cnt--;
		}
		else
		{
			int count = 0;
			rep(i, n)
			{
				if (s[i] == '.')
				{
					if (s[i + 1] == '.')
					{
						if (s[i + 2] == '.')
						{
							count++;
						}
					}
				}
			}
			if (count > 2)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		if ((lb - b) < 3)
		{
			b = lb;
		}
	}
	cnt = la - a;
	while (a != la)
	{
		if ((s[(a - 1) + 2] == '.') && ((a + 2) != lb) && ((cnt - 2) >= 0))
		{
			a += 2;
			cnt -= 2;
		}
		else if ((s[(a - 1) + 1] == '.') && ((a + 1) != lb) && ((cnt - 2) >= 0))
		{
			a++;
			cnt--;
		}
		else
		{

			int count = 0;
			rep(i, n)
			{
				if (s[i] == '.')
				{
					if (s[i + 1] == '.')
					{
						if (s[i + 2] == '.')
						{
							count++;
						}
					}
				}
			}
			if (count > 2)
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
		}
		if ((la - a) < 3)
		{
			a = la;
		}
	}
	cout << "Yes" << endl;
	return 0;
}
