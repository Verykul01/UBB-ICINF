#include <stdio.h>
#include <math.h>

int main()
{

    int salida=0,entrada,res;

    printf("[1]CALCULADORA [2]CALCULADORA CON ARREGLOS \n");
    scanf("%d",&entrada);

    switch(entrada){
        case 1:
            
            do{
                int a,b,i,res,op;

                printf("\n[1]Suma y resta [2] Multiplicacion\n");
                printf("[3]División     [4] Módulo \n");
                printf("[5]Factorial    [6] Potencia \n");
                printf("[7]Raíz cuadrada   [8] Salida \n");
                scanf("%d",&op);
                switch(op){
                    case 1: //suma/resta
                    
                    printf("INGRESE EL PRIMER VALOR A SUMAR/RESTAR: \n");
                    scanf("%d",&a);
                    printf("INGRESE EL SEGUNDO VALOR: \n");
                    scanf("%d",&b);
                    printf("EL RESULTADO ES: %d \n",(a+b));

                    break;

                    case 2:// multiplicacion

                    printf("INGRESE EL PRIMER VALOR A MULTIPLICAR:\n");
                    scanf("%d",&a);
                    printf("INGRESE EL SEGUNDO VALOR: \n");
                    scanf("%d",&b);
                    res=a*b;
                    printf("EL RESULTADO ES: %d  \n", res);

                    break;

                    case 3://division

                    printf("INGRESE EL DIVIDENDO:\n ");
                    scanf("%d", &a);
                    
                    do{
                    printf("INGRESE EL DIVISOR: \n");
                    scanf("%d",&b);
                    if (b==0)
                    {
                        printf("INGRESE UN VALOR DIFERENTE DE 0 \n");
                    }
                    }while(b==0);
                    res=a/b;
                    printf("EL RESULTADO ES: %.2f  \n",a/ (float)b);

                    break;

                    case 4:// modulo

                    printf("INGRESE EL NUMERO A MODULAR:\n ");
                    scanf("%d", &a);
                    
                    do{
                    printf("INGRESE EL MODULO: \n");
                    scanf("%d",&b);
                    if (b==0)
                    {
                        printf("INGRESE UN VALOR DIFERENTE DE 0 \n");
                    }
                    }while(b==0);
                    res=a%b;
                    printf("EL RESULTADO ES: %d  \n",a%b);


                    break;

                    case 5://factorial

                    do{
                    printf("INGRESE EL NUMERO POSITIVO A SACAR EL FACTORIAL: ");
                    scanf("%d",&a);
                    }while(a<0);
                    b=1;
                    for(i=2;i<=a;i++){

                    b=b*i;

                    }
                    res=b;
                    printf("EL RESULTADO ES: %d  \n",res);

                    break;

                    case 6://potencia
                    
                    printf("Ingrese el valor de la base: \n");

                    scanf("%d",&a);

                    printf("Ingrese el exponente: \n");

                    scanf("%d",&b);
                    res=pow(a,b);
                    printf("EL RESULTADO ES: %.2f  \n",pow(a,b));

                    break;

                    case 7://raiz
                    
                    do{

                    printf("Ingrese el valor a sacar raíz cuadrada: ");

                    scanf("%d",&a);

                    if(a<0){

                    printf("Valor inválido, ingrese un valor mayor a 0");
                    }

                    }while(a<0);

                    res=sqrt(a);
                    printf("EL RESULTADO ES: %d  \n",res);

                    break;

                    case 8: // salida

                    printf("ESTAS SEGURO/A QUE QUIERES SALIR? [1]SI [2]NO\n");
                    scanf("%d",&salida);
                    break;

                }
            
            if (res>30 && res<0)
            {
             printf("RESULTADO EN PALABRAS: \n");

            }
            switch(res){

            case 0: printf(" %d (cero)",res);

            break;

            case 1: printf(" %d (uno)",res);

            break;

            case 2: printf("%d (dos)",res);

            break;

            case 3: printf("%d (tres)",res);

            break;

            case 4: printf("%d (cuatro)",res);

            break;

            case 5: printf("%d (cinco)",res);

            break;

            case 6: printf("%d (seis)",res);

            break;

            case 7: printf("%d (siete)",res);

            break;

            case 8: printf("%d (ocho)",res);

            break;

            case 9: printf("%d (nueve)",res);

            break;

            case 10: printf("%d (diez)",res);

            break;

            case 11: printf("%d (once)",res);

            break;

            case 12: printf("%d (doce)",res);

            break;

            case 13: printf("%d (trece)",res);

            break;

            case 14: printf("%d (catorce)",res);

            break;

            case 15: printf("%d (quince)",res);

            break;

            case 16: printf("%d (dieciséis)",res);

            break;

            case 17: printf("%d (diecisiete)",res);

            break;

            case 18: printf("%d (dieciocho)",res);

            break;

            case 19: printf("%d (diecinieve)",res);

            break;

            case 20: printf("%d (veinte)",res);

            break;

            case 21: printf("%d (veintiuno)",res);

            break;

            case 22: printf("%d (veintidós)",res);

            break;

            case 23: printf("%d (veintitrés)",res);

            break;

            case 24: printf("%d (veinticuatro)",res);

            break;

            case 25: printf(" %d (vienticinco)",res);

            break;

            case 26: printf(" %d (vientiséis)",res);

            break;

            case 27: printf("%d (veintisiete)",res);

            break;

            case 28: printf("%d (veintiocho)",res);

            break;

            case 29: printf("%d (veintinueve)",res);

            break;

            case 30: printf("%d (treinta)",res);

            break;
            
            
        }

            }while(salida != 1);


           
            


        break;

        case 2:// calc con arreglos

        int n,i,Op,sum=0,Salida;

        printf("INGRESE EL TAMAÑO DE LOS ARREGLOS\n");
        scanf("%d",&n);

        int A[n],B[n],R[n];

        for(i=0;i<n;i++){
            printf("INGRESE EL VALOR [%d] DEL PRIMER ARREGLO: \n",i);
            scanf("%d",&A[i]);
        }

        for(i=0;i<n;i++){
            printf("INGRESE EL VALOR [%d] DEL SEGUNDO ARREGLO: \n",i);
            scanf("%d",&B[i]);
        }

        do{

        printf("ELIJA QUE QUIERE HACER\n [1]SUMAR [2]RESTAR\n [3]MULTIPLICAR [4]SALIR \n");
        scanf("%d",&Op);

        switch(Op)
        {
            case 1://suma
            for ( i = 0; i < n; i++)
            {
                R[i]=A[i]+B[i];
                printf("LA SUMA DE %d Y %d ES: %d\n",A[i],B[i],R[i]);
            }
                
            break;
    
            case 2://resta
    
            for ( i = 0; i < n; i++)
            {
                R[i]=A[i]-B[i];
                printf("LA RESTA DE %d Y %d ES: %d\n",A[i],B[i],R[i]);
            }
    
    
            break;
    
            case 3://multiplicacion
    
            for ( i = 0; i < n; i++)
            {
                R[i]=A[i]* B[i];
                printf("LA MULTIPLICACION DE %d Y %d ES: %d\n",A[i],B[i],R[i]);
            }
    
            break;
            
            case 4:
    
            printf("ESTAS SEGURO/A DE SALIR? [1]SI [2]NO\n");
            scanf("%d",&Salida);
    
            break;
        }
    
            for ( i = 0; i < n; i++)
            {
                sum=sum+ A[i] + B[i];
            }
            printf("LA SUMA TOTAL DE LOS ARREGLOS ES: %d\n",sum);
                
            printf("EL PRIMER ARREGLO AL REVEZ ES:\n");
            for ( i = n-1; i >= 0; i--)
            {
                printf("[%d]= %d\n",i,A[i]);
            }
    
            printf("EL SEGUNDO ARREGLO AL REVEZ ES:\n");
            for ( i = n-1; i >= 0; i--)
            {
                printf("[%d]= %d\n",i,B[i]);
            }
    
            break;
    
            


        }while(Salida!=1);
    
    }



    


}
