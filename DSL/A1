marks=[]

def getmarks():
    global object
    object=0
    n=int(input("Enter the number of students:"))
    print("Enter a for absent student")
    for i in range(n):
        print("Enter the marks of student",i+1)
        m=input()
        if m.isdigit():
            marks.append(m)
        else:
            object+=1

    print("The marks are:",marks)

def averagemarks():
    global avg
    avg=0
    for i in marks:
        avg=avg+int(i)
    avg=avg/(len(marks)-object)
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

def main():
    getmarks()
    ch=int(input("Enter your choice 1.avgerage marks 2.highest marks 3. lowest marks"))
    if ch==1:
        avgmarks()
    elif ch==2:
        high()
    elif ch==3:
        low()
    else:
        break
main()
