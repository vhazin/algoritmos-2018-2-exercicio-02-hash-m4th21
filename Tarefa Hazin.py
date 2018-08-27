t = int(input("Qtd de linhas: "))
dada = 1
cont = 0


while dada <= t:
    a,b,x,n,c,d,m = list(map(int, input().split()))
    if (c <= ((a*(x+n)+b)%m) <= d):
        cont = cont + 1
    else:
        pass

    dada = dada + 1

print("Qnt de vezes: ", cont)


