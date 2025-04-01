[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

#### ¿Qué es el archivo _.gitignore_?
El archivo _.gitignore_ es un archivo de configuración utilizado por Git para decirle qué archivos o directorios no deben ser rastreados por el sistema de control de versiones. Es útil para evitar que archivos innecesarios o sensibles (como archivos temporales, de configuración local, dependencias, etc.) se suban al repositorio.

#### ¿Por qué es conveniente incluirlo?
Incluir un archivo _.gitignore_ en tu repositorio es muy conveniente porque:

- Evita el seguimiento de archivos innecesarios: Archivos generados automáticamente como logs, archivos temporales del sistema operativo o de IDEs (entornos de desarrollo) no deben estar en el repositorio.

- Protege información sensible: Puedes evitar que archivos con información confidencial (como claves API o credenciales) sean subidos por accidente.

- Mejora el rendimiento: Mantener el repositorio limpio y solo con los archivos relevantes puede mejorar el rendimiento y la claridad del proyecto.

- Facilita la colaboración: Todos los miembros del equipo siguen las mismas reglas sobre qué archivos deben ser ignorados, evitando conflictos o la inclusión de archivos irrelevantes.

#### ¿Cómo configuraría el archivo _.gitignore_?
El archivo _.gitignore_ es simplemente un archivo de texto donde se especifican las reglas de ignorado. Cada línea del archivo representa una regla que puede incluir:

1. Ignorar archivos específicos: Especificas el nombre del archivo.

2. Ignorar carpetas completas: Se puede ignorar una carpeta añadiendo su nombre seguido de una barra /.

3. Usar patrones con comodines: Puedes usar * para ignorar cualquier archivo o carpeta que coincida con el patrón.

3. Ignorar extensiones de archivo: Puedes ignorar todos los archivos con una extensión determinada (por ejemplo, todos los archivos .log).

#### RESPUESTA 3)g
**¿Por qué el resultado es el mismo en los apartados 2 y 3?** <br>

En los apartados 2 y 3, el resultado es el mismo porque tanto el puntero ptr como la dirección de x apuntan a la misma ubicación en memoria. ptr almacena la dirección de memoria de x, y &x también devuelve la dirección de memoria de x. Por lo tanto, ambos imprimen la misma dirección. <br>

**¿Qué obtiene en el punto 4?** <br>

En el punto 4, obtenemos la dirección de memoria del puntero ptr. Esto significa que estamos imprimiendo la ubicación en la que la variable puntero ptr está almacenada en la memoria, no la dirección de x. Esta es una dirección diferente a la de x.

**¿Es igual a los anteriores? ¿Por qué?** <br>

No, el resultado del punto 4 no es igual a los puntos 2 y 3, ya que estamos imprimiendo la dirección de memoria donde el puntero ptr se encuentra en la memoria, mientras que los puntos 2 y 3 imprimen la dirección de la variable x. La dirección de memoria del puntero ptr y la dirección de x son diferentes.

