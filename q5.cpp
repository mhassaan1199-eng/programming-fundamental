#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, E;

    cout << "Enter five integers: ";
    cin >> A >> B >> C >> D >> E;

    int sum = A + B + C + D + E;

    int count = 0;

    if (A < 0)
        count += 1;
    if (B < 0)
        count += 1;
    if (C < 0)
        count += 1;
    if (D < 0)
        count += 1;
    if (E < 0)
        count += 1;

    if (sum < 0 && count >= 3)
    {
        cout << "lockdown";
        return 0;
    }
     count = 0;

    if (A >0)
        count += 1;
    if (B >0)
        count += 1;
    if (C >0)
        count += 1;
    if (D >0)
        count += 1;
    if (E >0)
        count += 1;

    // FIND LARGEST
    int large = A;

    if (B > large)
        large = B;
    if (C > large)
        large = C;
    if (D > large)
        large = D;
    if (E > large)
        large = E;

    // FIND SMALLEST POSITIVE
    int smallest = 0;

    if (A > 0)
        smallest = A;

    if (B > 0 && (smallest == 0 || B < smallest))
        smallest = B;

    if (C > 0 && (smallest == 0 || C < smallest))
        smallest = C;

    if (D > 0 && (smallest == 0 || D < smallest))
        smallest = D;

    if (E > 0 && (smallest == 0 || E < smallest))
        smallest = E;

    // FIND MEDIAN
    int median;
    count = 0;

    if (A > B)
        count += 1;
    if (A > C)
        count += 1;
    if (A > D)
        count += 1;
    if (A > E)
        count += 1;

    if (count == 2)
        median = A;

    count = 0;

    if (B > A)
        count += 1;
    if (B > C)
        count += 1;
    if (B > D)
        count += 1;
    if (B > E)
        count += 1;

    if (count == 2)
        median = B;

    count = 0;

    if (C > A)
        count += 1;
    if (C > B)
        count += 1;
    if (C > D)
        count += 1;
    if (C > E)
        count += 1;

    if (count == 2)
        median = C;

    count = 0;

    if (D > A)
        count += 1;
    if (D > B)
        count += 1;
    if (D > C)
        count += 1;
    if (D > E)
        count += 1;

    if (count == 2)
        median = D;

    count = 0;

    if (E > A)
        count += 1;
    if (E > B)
        count += 1;
    if (E > C)
        count += 1;
    if (E > D)
        count += 1;

    if (count == 2)
        median = E;

    if (count > 0 && large > 3 * smallest && median % 2 == 0)
    {
        cout << "critical";
        return 0;
    }
// condition breach

         count=0;
         int product;
         int diffrence;
// A AND C

        product=A*C;
       diffrence=A-C;
        if(diffrence<0)
        diffrence*=-1;

if(product%7==0 && diffrence>10)
    count+=1;

// A AND D
product=A*D;
diffrence=A-D;
if(diffrence<0)
    diffrence*=-1;

if(product%7==0 && diffrence>10)
    count+=1;

// A AND E
product=A*E;
diffrence=A-E;
if(diffrence<0)
    diffrence*=-1;

if(product%7==0 && diffrence>10)
    count+=1;

// B AND D
product=B*D;
diffrence=B-D;
if(diffrence<0)
    diffrence*=-1;

if(product%7==0 && diffrence>10)
    count+=1;

// B AND E
product=B*E;
diffrence=B-E;
if(diffrence<0)
    diffrence*=-1;

if(product%7==0 && diffrence>10)
    count+=1;

// C AND E
product=C*E;
diffrence=C-E;
if(diffrence<0)
    diffrence*=-1;

if(product%7==0 && diffrence>10)
    count+=1;

if(count>=2)
{
    cout<<"breach";
    return 0;
}
    //condition anamoly
    count=0;
    sum=0;

    if(A==B)
    count+=1;
    if(A==C)
    count+=1;
    if(A==D)
    count+=1;
    if(A==E)
    count+=1;
    if(B==C)
    count+=1;
    if(B==D)
    count+=1;
    if(B==E)
    count+=1;
    if(C==D)
    count+=1;
    if(C==E)
    count+=1;
    if(D==E)
    count+=1;

    // ONR PAIR MUST BE EQUAL 
    if (count==1)
    {
        if(A==B)
            sum=C+D+E;
        if(A==C)
            sum=B+D+E;
        if(A==D)
            sum=B+C+E;
        if(A==E)
            sum=B+C+D;
        if(B==C)
            sum=A+D+E;
        if(B==D)
            sum=A+C+E;
        if(B==E)
            sum=A+C+D;
        if(C==D)
            sum=A+B+E;
        if(C==E)
            sum=A+B+D;
        if(D==E)
            sum=A+B+C;

        if(sum%2 !=0)
        {
            cout<<"anamoly";
            return 0;
        }
    }

    //condition 5 warning
    count=0;

    // count odd numbers
    if(A%2!=0)
        count+=1;
    if(B%2!=0)
        count+=1;
    if(C%2!=0)
        count+=1;
    if(D%2!=0)
        count+=1;
    if(E%2!=0)
        count+=1;

    //count even numbers
    int counteven=0;

    if(A%2==0)
        counteven+=1;
    if(B%2==0)
        counteven+=1;
    if(C%2==0)
        counteven+=1;
    if(D%2==0)
        counteven+=1;
    if(E%2==0)
        counteven+=1;

    //finding second LARGEST
    int secondlargest=A;

    if(B>secondlargest&&B<=large)
        secondlargest=B;
    if(C>secondlargest&&C<=large)
        secondlargest=C;
    if(D>secondlargest&&D<=large)
        secondlargest=D;
    if(E>secondlargest&&E<=large)
        secondlargest=E;

    if(count>counteven && secondlargest%3==0)
    {
        cout<<"warning";
        return 0;
    }
    //condition 6 monitor
    if(A!=large && A!=smallest)
    sum+=A;
    if(B!=large && B!=smallest)
    sum+=B;
    if(C!=large && C!=smallest)
    sum+=C;
     if(D!=large && D!=smallest)
    sum+=D;
      if(E!=large && E!=smallest)
    sum+=E;
    diffrence=large-smallest;
    if(diffrence<0)
    diffrence*=-1;
    double average=sum/3.0;
    if(diffrence>average)
    {
        cout<<"monitior";
        return 0;
    }
    else
    {
        cout<<"safe";
        return 0;
    }
}
