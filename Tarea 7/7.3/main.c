char p1;
printf(”\nIngrese un caracter para analizar si éste es un dígito: ”);
p1 = getchar();
if (isdigit (p1))
/* La función isdigit regresa 1 si p1 es un dígito y 0 en caso contrario. */
printf(”%c es un dígito \n”, p1);
else
printf(”%c no es un dígito \n”, p1);
fflush(stdin);
printf(”\nIngrese un caracter para examinar si éste es una letra: ”);
p1 = getchar();
if (isalpha (p1))
/* La función isalpha regresa 1 si p1 es una letra y 0 en caso contrario. */
printf(”%c es una letra \n”, p1);
else
printf(”%c no es una letra \n”, p1);
fflush(stdin);
printf(”\nIngrese un caracter para examinar si éste es una letra minúscula: ”);
p1 = getchar();
if (isalpha (p1))
if (islower (p1))
/* La función islower regresa 1 si p1 es una letra minúscula y 0 en caso
➥contrario.
La función isupper, por otra parte, regresa 1 si p1 es una letra mayúscula
➥y 0 en caso contrario. */
printf(”%c es una letra minúscula \n”, p1);
else
printf(”%c no es una letra minúscula \n”, p1);
else
printf(”%c no es una letra \n”, p1);
fflush(stdin);
printf(”\nIngrese una letra para convertirla de mayúscula a minúscula: ”);
p1 = getchar();
if (isalpha (p1))
if (isupper(p1))
printf(”%c fue convertida de mayúscula a minúscula \n”, tolower(p1));
/* La función tolower convierte de mayúscula a minúscula. Si la
➥letra es minúscula no la modifica. La función toupper, por otra parte,
➥convierte de minúscula a mayúscula. Si la letra es mayúscula no la
➥modifica. */
else
printf(”%c es una letra minúscula \n”, p1);
else
printf(”%c no es una letra \n”, p1);
}
printf(”\nLa cadena cad1 es: ”);
printf(”%s”, cad1);
/* La función printf, con el formato de variable %s, también se puede utilizar
➥para escribir cadenas de caracteres. Baja automáticamente una línea después
➥de escribir la cadena.*/
printf(”\nLa cadena cad2 es: ”);
puts(cad2);
printf(”\nLa cadena cad3 es: ”);
puts(cad3);
printf(”\nIngrese una línea de texto —se lee con gets—: \n”);
/* La función gets es la más apropiada para leer cadenas de caracteres. */
gets(cad4);
printf(”\nLa cadena cad4 es: ”);
puts(cad4);
fflush(stdin);
printf(”\nIngrese una línea de texto —se lee con scanf—: \n”);
scanf(”%s”, cad5);
/* La función scanf, con el formato de variable %s, también se puede utilizar
➥para leer una cadena de caracteres, aunque con algunas restricciones. Si la
➥cadena está formada por varias palabras sólo lee la primera. Por ejemplo, si
➥queremos ingresar la cadena “Buenos días”, sólo lee la palabra “Buenos”, por
➥ello esta función únicamente es útil si conocemos con anticipación que la
➥cadena que vamos a leer está formada por una sola palabra. */
printf(”\nLa cadena cad5 es: ”);
printf(”%s”, cad5);
fflush(stdin);
char p;
int i = 0;
/* La declaración de variables siempre se debe realizar en la parte inicial del
➥programa. En este caso se colocan en esta sección (char p e int i = 0) para
➥que puedas observar la relación directa con las líneas de programación que se
➥muestran a continuación. */
printf(”\nIngrese una línea de texto —se lee cada caracter con getchar—: \n”);
➥/* Se utiliza la función getchar para leer caracteres de la línea de texto y
➥asignarlos a la variable de tipo cadena de caracteres cad6. Observa que se leen
➥caracteres mientras no se encuentre al caracter que indica fin de línea ‘\n’. */
while ((p = getchar())!= ‘\n’)
cad6[i++] = p;
cad6[i] = ‘\0’;
/* Al final de la cadena se incorpora el caracter de terminación NULL para
➥indicar el fin de la misma. */
printf(”\nLa cadena cad6 es: ”);
puts(cad6);
}
