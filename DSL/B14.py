def get(l):
    n=int(input("Enter no of students: "))
    for i in range (0,n):
        k=int(input("Enter percentage: "))
        l.append(k)


def dis(l):
    for i in l:
        print(i, end=" ")
    print("\n")


def sort(l):
    size=len(l)
    for i in range(size-1):
        min=i
        for j in range(i+1,size):
            if l[j] < l[min]:
                min=j
        l[i],l[min]=l[min],l[i]
        dis(l)


def bubble(arr):
    n = len(arr)
    for i in range(n - 1):
        for j in range(0, n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
        dis(arr)


def main():
    list=[]
    get(list)
    dis(list)
    print("Enter your choice: \n 1.Selection sort \n 2.Bubble sort")
    ch=int(input())
    if ch==1:
        sort(list)
    elif ch==2:
        bubble(list)


main()
