------------------------------------------
Resultado para el primer punto:

- Cuando se compila en x86 la impresión es:
short:2
int:4
float:4
double:8
long:4
long long:8
size_t:4

- Cuando se compila en x64 la impresión es:
short:2
int:4
float:4
double:8
long:4
long long:8
size_t:8

------------------------------------------
Resultado del segundo punto:

Decimal: 65
Hexadecimal: 41
Octal: 101
Caracter: A

------------------------------------------
Resultado del tercer punto:

- Cuando se compila en x86 la impresión es:
Maximos:
short:002A140B
int:002A13F2
float:002A1424
double:002A1410
long:002A13ED
long long:002A1406
size_t:002A141F

Minimos:
short:002A1415
int:002A13E8
float:002A13FC
double:002A1401
long:002A13F7
long long:002A13E3
size_t:002A13DE

- Cuando se compila en x64 la impresión es:
Maximos:
short:00007FF79B571406
int:00007FF79B5713F2
float:00007FF79B571410
double:00007FF79B57140B
long:00007FF79B5713ED
long long:00007FF79B571401
size_t:00007FF79B5713F7

Minimos:
short:00007FF79B57142E
int:00007FF79B57141A
float:00007FF79B571424
double:00007FF79B571429
long:00007FF79B57141F
long long:00007FF79B571415
size_t:00007FF79B571433

------------------------------------------
Resultado del cuarto punto:

a:-1
b:4294967295

*La diferencia es porque si no se utiliza el unsigned
entonces se toma tanto valor negativo como positivos, 
en cambio declarando con unsigned siempre dará valores enteros
positivos, unsigned realiza el complemento a 1 de ese número.