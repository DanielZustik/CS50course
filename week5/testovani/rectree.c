

bool search (node *tree, int number) // vrat yda jsi nasel, hledane cislo nubmer, a to ve stromecku zacinajici rootem tree
{
    if (tree == NULL) //opatreni proti prazdnemu stromku
        return false;
    else if (number < tree->number)
        return serach (tree->left, number);
    else if (number > tree->number)
        return serach (tree->right, number);
    else if (number == tree->nubmer)
     return true; // nalezeno
}