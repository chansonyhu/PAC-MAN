# 1 "Array_Initialization2/main.c"
# 1 "<eingebaut>"
# 1 "<Kommandozeile>"
# 1 "Array_Initialization2/main.c"
int nondet_int();

int arr[2] = {0,0};

int main()
{
  unsigned place = nondet_int();
  __CPROVER_assume(place<2);
  assert(arr[place]==0);
  return 0;
}
