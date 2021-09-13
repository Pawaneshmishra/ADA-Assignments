def Fibonacci(n):
#The Actual function is defined here

  Start=0
  Next=1
  Sum=0

  for i in range(n):
    #Prints the value for Each term

    print(Start,sep='\n') #Prints Each Term

    Sum=Start+Next #Update to next values 
    Start=Next
    Next=Sum

n=int(input("Enter the number to get its Fibonacci : "))
#Here Input for the Fibonacci series is taken.

Fibonacci(n)
#The Fibonacci function is being called here.
