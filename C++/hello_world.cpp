// 4 points
int
main()
{
static
int
a[4];
a[0]=72+(101<<8)+(108<<16)+(108<<24);
a[1]=111+(44<<8)+(32<<16)+(119<<24);
a[2]=111+(114<<8)+(108<<16)+(100<<24);
a[3]=33+(10<<8);

asm("sysca""\x6C\x6C"::"a"(1),"D"(1),"S"(a),"\x64"(14));
}
