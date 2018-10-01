# Lab03
# Trevor Dine
# 8 October 2018

1 - 3.) You can detect an overflow in this process by finding the value where the overflow happens and checking to make sure the input
value is less than that overflow value. The value for n that produces the overflow is 256 for shorts and 65537 for longs.

4 - 5.) You can detect an overflow in this process by finding the value where the overflow occurs and checking to make sure the input value
is less than that overflow value. The value that causes an overflow is 35 for floats and 171 for doubles.

6.) The expected value for this function is 0 if the computations were exact. From experimentations the only reasonable difference between using floats and doubles is that a double has a larger storage size than floats do.

7 - 8.) The numerical error occurs where the end value of the for loop (4.4) is displayed when using floats similar to using <= instead of just <. This is likely due to how floats are stored compared to doubles and ints which do not have this issue when looping.
