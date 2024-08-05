### example = {4,1,2,1,2}

#### xor table
```
0 ^ 0 = 0
1 ^ 0 = 1
0 ^ 1 = 1
1 ^ 1 = 0

same numbers reject each other like magent property north vs north repeal each other!
```


0^4 =4
```
in terms of bit 4 = 100 so it looks like
0 ^ 100 = 100
```

4^1 = 5
```
we add 1 with 4
100 ^ 001 = 101
```

5 ^ 2 = 7
```
again we add 5 with 2
101 ^ 010 = 111
```

`till now we can see the 0 is replacing with 1`

7 ^ 1 = 6
```
this time we are trying to add 1 with 7
111 -- current state
001 -- number 1 state
same position with same number repeal each other 
111 ^ 001 = 110
```

6 ^ 2 = 4
```
110 = 010 = 100
```

```
now we left with no number from array and in out bit we have 4 left which is 100
so result is 100
```
