#include <iostream>

using namespace std;

int contar_caracteres(char *st)
{
    int count = 0;
    int i = 0;

    while (st[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}
int contar_palabra(char *st)
{
    int count = 1;
    int i = 0;

    for (i = 0; st[i] != '\0'; i++)
    {
        if (st[i] == ' ' && st[i + 1] != ' ')
            count++;
    }    

    return count;
}
int buscar_palabra(char *st, char *palabra)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while (st[i] != '\0')
    {
        if (st[i] == palabra[j])
        {
            while (st[i] == palabra[j] && palabra[j] != '\0')
            {
                i++;
                j++;
            }
            if (palabra[j] == '\0' && (st[i] == ' ' || st[i] == '\0'))
            {
                count += 1;
                j =  0;
            }
        }
        i++;
    }

    return count;
}
void borrar_arreglo(char *ar)
{
    int i = 0;

    while (ar[i] != '\0')
    {
        ar[i] = '\0';
        i++;
    }
}
void contar_char_palabra(char *st)
{
    int i = 0;
    int count = 0;

    while (st[i] != '\0')
    {

        if (st[i] == ' ')
        {
            printf(" = %d\n", count);
            count = 0;
        }
        else if (st[i] >= 'a' && st[i] <= 'z' || st[i] >= 'A' && st[i] <= 'Z')
        {
            printf("%c", st[i]);
            count++;
        }
        i++;
    }
    printf(" = %d\n", count);
}
void caracteres_esp_alfa(char *st)
{
    int i = 0;
    int count_esp = 0;
    int count_alfa = 0;

    while (st[i] != '\0')
    {
        if (st[i] >= 'a' && st[i] <= 'z' || st[i] >= 'A' && st[i] <= 'Z')
            count_alfa++;
        else
            count_esp++;
        i++;
    }
    printf("El numero de caracteres especiales es: %d y el numero de caracteres alfabeticos es: %d\n", count_esp, count_alfa);
}
int main ()
{
    char texto[100];
    char palabra[100];
    int output = 0;

    printf("Ingrese un texto: \n");
    scanf("%[^\n]", &texto);
    printf("El numero de caracteres es: %d\n", contar_caracteres(texto));

    printf("El numero de palabras es: %d\n", contar_palabra(texto));

    printf("Indique que palabra desea buscar: ");
    scanf("%s", &palabra);

    output = buscar_palabra(texto, palabra);
    if (output == 0)
        printf("No existe esa palabra en el texto\n");
    else
        printf("La palabra %s se encuentra %d veces en el texto\n", palabra, output);

    contar_char_palabra(texto);
    caracteres_esp_alfa(texto);

    return 0;
}
