[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/kl-E8VQf)

####¿Qué es el archivo _.gitignore_?
El archivo _.gitignore_ es un archivo de configuración utilizado por Git para decirle qué archivos o directorios no deben ser rastreados por el sistema de control de versiones. Es útil para evitar que archivos innecesarios o sensibles (como archivos temporales, de configuración local, dependencias, etc.) se suban al repositorio.

####¿Por qué es conveniente incluirlo?
Incluir un archivo _.gitignore_ en tu repositorio es muy conveniente porque:

- Evita el seguimiento de archivos innecesarios: Archivos generados automáticamente como logs, archivos temporales del sistema operativo o de IDEs (entornos de desarrollo) no deben estar en el repositorio.

- Protege información sensible: Puedes evitar que archivos con información confidencial (como claves API o credenciales) sean subidos por accidente.

- Mejora el rendimiento: Mantener el repositorio limpio y solo con los archivos relevantes puede mejorar el rendimiento y la claridad del proyecto.

- Facilita la colaboración: Todos los miembros del equipo siguen las mismas reglas sobre qué archivos deben ser ignorados, evitando conflictos o la inclusión de archivos irrelevantes.

####¿Cómo configuraría el archivo _.gitignore_?
El archivo _.gitignore_ es simplemente un archivo de texto donde se especifican las reglas de ignorado. Cada línea del archivo representa una regla que puede incluir:

1. Ignorar archivos específicos: Especificas el nombre del archivo.

2. Ignorar carpetas completas: Se puede ignorar una carpeta añadiendo su nombre seguido de una barra /.

3. Usar patrones con comodines: Puedes usar * para ignorar cualquier archivo o carpeta que coincida con el patrón.

3. Ignorar extensiones de archivo: Puedes ignorar todos los archivos con una extensión determinada (por ejemplo, todos los archivos .log).