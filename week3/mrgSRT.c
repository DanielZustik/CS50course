#include <cs50.h>
#include <stdio.h>

int const N = 10;

int main(void)
{
    int prvky[N];


    prvky[0] = 9;
    prvky[1] = 10;
    prvky[2] = 21;
    prvky[3] = 14;
    prvky[4] = 5;
    prvky[5] = 0;
    prvky[6] = 1;
    prvky[7] = 6;
    prvky[8] = 10;
    prvky[9] = 4;

    //1. sort left half
    //2. sort right half
    //3. merge them together

    //nejprve početně, přesně mechanicky krok po bodu jen na jeden konkrétní příklad
    //následně zobecnění a přepsání do rekurze

    //1. pole sort left half 9 10 21 14 5
    //    1.1 pole sort left half 9 10
    //        1.1.1 pole sort left half 9 = sorted
    //        1.1.2 pole sort right hals 10 = sorted
    //        merge both halves togethe 9 10 - now sorting (sort and merge) is completed
    //    1.2 poel sort right hals 21 14 5
    //        1.2.1 pole sort left half 21 = sorted
    //        1.2.2 sort right half 14 5
    //            1.2.2.1 sort left half 14 = sorted
    //            1.2.2.2. sort right half 5 = sorted
    //            merge them 5 14 - algorythm completed in this 1.2.2. layer completed
    //        merge them 5 14 21 - algorythm completed in this 1.2. layer completed
    //    merge them 5 9 10 14 21 - algorythm completed in this 1. layer completed
    //    .... now sort the right half of the 0. původního pole...

    //1. sort left half - keep spliting (na půl) rg. n = 10; n/2 = 5; 5 > 1; 5/2 = 2; 2 > 1; 2/2 = 1; pole until there is only one element. One element is sorted.
    //2. sort right half
    //3. merge them together


    // n = 10;
    // mrg()
    // BASE: If n = 1 return prvek pole P[i]
    // REC: mrg(n/2) and merge them

    //f()
    //if n = 1 return 1;
    //n * f(n - 1)... faktorial n je n * faktorial(n - 1)

    // sort se sklada z deleni az na jeden prvek a zpetnem testovani a presouvani
    // faktori8l je jen n8soben9 5adz 49sel, merge sort je deleni, nasledne srovnavani a presouvani
    //

}