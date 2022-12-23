marks=[]

def getmarks():
    global object
    object=0
    n=int(input("Enter the number of students:"))
    print("Enter -1 for absent student")
    for i in range(n):
        print("Enter the marks of student",i+1)
        m=int(input())
        if m!=-1:
            marks.append(m)
        else:
            object+=1

    print("The marks are:",marks)

def avgmarks():
    sum=0
    avg=0
    for i in marks:
        sum=sum+i
    avg=sum/len(marks)
    print("The average marks are:",avg)

def high():
    high=marks[0]
    for i in marks:
        if i>high:
            high=i
    print("The highest marks are:",high)

def low():
    low=marks[0]
    for i in marks:
        if i<low:
            low=i
    print("The lowest marks are:",low)

def highfreq():
    max=0
    freq=0
    point =0
    for i in marks:
        freq=marks.count(i)
        if freq>max:
            max=freq
            point =i
    print("The marks with highest freq is ",point," of times ",max)

def main():
    getmarks()
    while True:
        print("1. Average marks")
        print("2. Highest marks")
        print("3. Lowest marks")
        print("4. Highest frequency")
        print("5. Exit")
        ch=int(input("Enter your choice:"))
        if ch==1:
            avgmarks()
        elif ch==2:
            high()
        elif ch==3:
            low()
        elif ch==4:
            highfreq()
        elif ch==5:
            break
        else:
            print("Invalid choice")
main()
