import java.util.*;
import java.util.Scanner;
class Ca1
{
public static void main(String args[])
{
int a,b,c;
Scanner obj=new Scanner(System.in);
System.out.println("Enter the three numbers");
a=obj.nextInt();
b=obj.nextInt();
c=obj.nextInt();
if(a%5==0)
{
if(a%6==0)
{
System.out.println(a+" is divisible by 5 and 6");
}
else
{
System.out.println(a+" is divisible by 5 but not 6");
}
}
if(b%5==0)
{
if(b%6==0)
{
System.out.println(b+" is divisible by both 5 and6");
}
else
{
System.out.println(b+" is not divisible by 5 and 6");
}
}
if(c%5==0)
{
if(c%6==0)
{
System.out.println(c+" is divisible by 5 and 6");
}
else
{
System.out.println(c+" is not divisible  by 6 or 5");
}
}
else
{
System.out.println(c+" is not divisible by either 5 or 6");
}
}
}
