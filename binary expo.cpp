
ll power(ll x, ll y)
{
  ll ans = 1;
  x = x % MOD;
  while (y > 0) {
    if (y & 1)
      ans = (ans * x) % MOD;

    y = y >> 1;
    x = (x * x) % MOD;
  }
  return ans;
}
