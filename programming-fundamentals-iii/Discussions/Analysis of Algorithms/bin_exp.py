def bin_exp(x, n):
    result, exponent = 1, n
    while exponent > 0:
        if (exponent % 2 == 1):
            result *= x
        x *= x
        exponent = exponent // 2
    return result

import time

def test(n, m = 10):
    average = 0
    for i in range(m):
        t0 = time.time()
        bin_exp(2, n)
        t = time.time() - t0
        average += t
    return 10 ** 5 * average / m

with open('data_points.dat', 'w') as file:
    file.write('input time\n')
    for n in range(0, 10**3+1, 25):
        t = '{:.30f}'.format(test(n))
        file.write(str(n) + ' ' + t + '\n')
