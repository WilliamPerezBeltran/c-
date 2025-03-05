# ConceptsPOO

- Execute file 
in ./bashrc add this script into it:
```
#Ejecuta un archivo .c sin la necesidad de escrito gcc "filename.c" -o "filename" y lo ejecuta 
# solamente hay que escribir:
# g <file.c>
	
g() {
    local filename="${1%.c}"  # Elimina .c si el usuario lo incluye

    gcc "$filename.c" -o "$filename"  # Usa la variable correctamente
    
    # Si la compilación fue exitosa
    if [ $? -eq 0 ]; then
        ./"$filename"  # Ejecuta el binario
    else
        echo "Error en la compilación"
    fi
}



```
And then you can execute the file directly:
-  g <file.c>

