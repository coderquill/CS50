from cs50 import get_int

while True:

    height=get_int("Height:")
    if height > -1 and height < 24:
        break
scd ~/workspace/pset6/hello/ && submit50 cs50/2018/x/sentimental/hello

"""for i in range(height):
    #for k in range((height-i-1),0):
    #    print(" ")
    for j in range((i+1),0):
        print("#")
    print()"""

for i in range(height):
     print(" "*(height-i-1),end="")
     print("#"*(i+1))