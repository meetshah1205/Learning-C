# Structures

```C
struct Books{
    char name[50];
    char author[50];
    int price;
} book;
void printStruct(struct bk){
    printf("%s book by %s costs %d\n", bk.name, bk.author, bk.price);
}
// All above int main() till now
int main(){
    struct Book, bk1, bk2;
    strcpy(bk1.name, "C programming");
    strcpy(bk1.author, "Dennis Ritchie");
    bk1.price = 70;



    return 0;
}
```