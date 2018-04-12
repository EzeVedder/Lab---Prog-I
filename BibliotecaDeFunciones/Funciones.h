/** \brief Pide dos numeros con decimal y devuelve la suma de ellos
 *
 * \param n1 float Es el primer parametro
 * \param n2 float Es el segundo parametro
 * \param suma float Suma los numeros
 * \return float Devuelve la suma de los dos numeros recibidos como parametro
 *
 */

float sumar(float n1,float n2);
 ------------------------------

/** \brief Pide dos numeros con decimal
 *
 * \param mensaje[] char msj que se le puede agregar como parametro
 * \param min float primer numero parametro
 * \param max float segundo numero parametro
 * \return float devuelve los numeros y el msj seleccionado
 *
 */

float pedirFloat(char mensaje[], float min, float max);
 ------------------------------

/** \brief
 *
 * \param dato float Es el numero a validar
 * \param min float Parametro para identificar si el numero se encuentra dentro del rango del minimo
 * \param max float Parametro para identificar si el numero se encuentra dentro del rango del maximo
 * \param mensaje[] char msj de error
 * \return float devuelve el numero
 *
 */

float validarFloat(float numero, float min, float max, char mensaje[]);
