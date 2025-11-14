for (int p : prices)
This is a range-based for loop.
It means:

➡️ For every element in the vector prices,
➡️ Copy the element into variable p,
➡️ And run the loop body.


for (int p : prices)
{
if (p < min1) 
{  min2 = min1; 
   min1 = p; 
} 
else if (p < min2) 
{ 
min2 = p; 
}
}
