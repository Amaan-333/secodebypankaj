def matrix(n):
    mat = []
    for i in range(n):
        list=[]
        for j in range(n):
            list.append(0)
        mat.append(list)
    return mat

def display(mat, n):
    for i in range(n):
        for j in range(n):
            print(mat[i][j], end=" ")
        print()

def get(mat, n):
    for i in range(n):
        for j in range(n):
            mat[i][j]=int(input("Enter the element: "))

def add(mat1,mat2 ,n):
    res=matrix(n)
    for i in range(n):
        for j in range(n):
            res[i][j] = mat1[i][j] + mat2[i][j]
    return res

def sub(mat1,mat2 ,n):
    res=matrix(n)
    for i in range(n):
        for j in range(n):
            res[i][j] = mat1[i][j] - mat2[i][j]
    return res

def mul(mat1,mat2, n):
    res=matrix(n)
    for i in range(n):
        for j in range(n):
            for k in range(n):
                res[i][j] += mat1[i][k] * mat2[k][j]
    return res

def transpose(mat, n):
    res=matrix(n)
    for i in range(n):
        for j in range(n):
            res[i][j]=mat[j][i]
    return res

def main():
    n=int(input("Enter the size of matrix: "))
    mat1=matrix(n)
    mat2=matrix(n)
    print("Enter the elements of first matrix: ")
    get(mat1,n)
    print("Enter the elements of second matrix: ")
    get(mat2,n)
    print("Displaying the matrix 1")
    display(mat1,n)
    print("Displaying the matrix 2")
    display(mat2,n)
    print("Do you want to change the matrix? (y/n)")
    ch=input()
    if ch=='y':
        print("Enter the matrix you want to change")
        ch=int(input())
        if ch==1:
            get(mat1,n)
            display(mat1,n)
        elif ch==2:
            get(mat2,n)
            display(mat2,n)
    flag=1
    while(flag==1):
        print("Enter the operation you want to perform: ")
        print("1. Addition")
        print("2. Subtraction")
        print("3. Multiplication")
        print("4. Transpose")
        ch=int(input("Enter your choice: "))
        if ch==1:
            res=add(mat1,mat2,n)
            display(res,n)
        elif ch==2:
            res=sub(mat1,mat2,n)
            display(res,n)
        elif ch==3:
            res=mul(mat1,mat2,n)
            display(res,n)
        elif ch==4:
            res=transpose(mat1,n)
            display(res,n)
        else:
            print("Invalid choice")
            flag=0
main()
