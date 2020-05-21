



def count_partitions(n,m):
    if n==0:
        return 1
    elif n<0:
        return 0
    elif m==0:
        return 0
    else:
        with_m=count_partitions(n-m,m)
        without_m=count_partitions(n,m-1)
        return without_m+with_m

print(count_partitions(5,3))