from cs50 import get_float

count= 0
while True:

    change=get_float("change:")
    if change > 0 and change < 1:
        break


cents=change*100


if (cents//25)>0:
    count=count+(cents//25)
    cents=cents-(25*(cents//25))

if (cents//10)>0:
    count=count+(cents//10)
    cents=cents-(10*(cents//10))


if (cents//5)>0:
    count=count+(cents//5)
    cents=cents-(5*(cents//5))

if (cents//1)>0:
    count=count+(cents//1)
    cents=cents-(1*(cents//1))


count=int(count)
print(f"{count}")