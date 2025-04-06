// Pseudocódigo para el juego "El Contador"
(me ayudo mi buen amigo gemini)
INICIO
  // --- Declaración de Variables ---
  cadena nombre_jugador
  booleano suicidio_elegido = verdadero // Indica si el jugador sigue vivo
  entero nivel_investigacion = 0
  caracter eleccion_dia_1, eleccion_dia_2, eleccion_dia_3, eleccion_dia_4, eleccion_dia_5, eleccion_dia_6, eleccion_dia_7
  caracter decision_final

  // --- Bienvenida e Introducción ---
  MOSTRAR "¡¡Bienvenido a 'El Contador'!! ..." // Mensaje completo
  MOSTRAR "Para comenzar ingresa tu nombre:"
  LEER nombre_jugador // Asumimos que lee el nombre completo
  MOSTRAR "" // Espacios
  MOSTRAR "hola " + nombre_jugador + " recuerda que uno no puede escapar de su destino."
  MOSTRAR "El dia transcurre con normalidad..." // Resto de la introducción
  MOSTRAR "Pasaron las horas y te enteras de la peor noticia..."
  MOSTRAR "Esa noche, aún en shock, decides mirarte en el espejo."
  MOSTRAR "Un número flotando sobre tu reflejo: '7'"
  MOSTRAR "Cada día que pasa, el número baja... ¿Qué significa esto?"

  // --- Bucle Principal del Juego (7 Días) ---
  PARA dia DESDE 1 HASTA 7 HACER

    // Verificar si el jugador ya eligió suicidio en un día anterior
    SI suicidio_elegido == falso ENTONCES
      MOSTRAR "aceptaste tu destino fin del juego"
      SALIR DEL BUCLE PARA // Termina el bucle de días
    FIN SI

    // Lógica específica para cada día
    SEGUN dia HACER

      CASO 1:
        MOSTRAR "\n\nVes ese 7 encima tuyo sientes miedo..."
        MOSTRAR "¿Que haras? \na)investigar \nb)llorar... \nc)suicidarme"
        LEER eleccion_dia_1 // Leer elección del usuario para el día 1
        SEGUN eleccion_dia_1 HACER
          CASO 'a':
            MOSTRAR "investigas y tu conocimiento del tema aumenta"
            INCREMENTAR nivel_investigacion // nivel_investigacion = nivel_investigacion + 1
          CASO 'b':
            MOSTRAR "te quedas llorando echo bolita..."
          CASO 'c':
            MOSTRAR "agarras un cuchillo y te cortas el cuello"
            ASIGNAR suicidio_elegido = falso
          POR DEFECTO:
            MOSTRAR "no sabes que hacer y pierdes el dia"
        FIN SEGUN

      CASO 2:
        MOSTRAR "\n\nCorres al espejo y ves el 6..."
        MOSTRAR "¿que haras? \na)investigar \nb)llorar... \nc)suicidarme"
        LEER eleccion_dia_2 // Leer elección día 2
        SEGUN eleccion_dia_2 HACER
          CASO 'a':
            MOSTRAR "investigas y encuentras noticias..."
            INCREMENTAR nivel_investigacion
          CASO 'b':
            MOSTRAR "te quedas llorando..."
          CASO 'c':
            MOSTRAR "Agarras un frasco de clonazepam..."
            ASIGNAR suicidio_elegido = falso
          POR DEFECTO:
            MOSTRAR "no sabes que hacer y pierdes el dia"
        FIN SEGUN

      CASO 3:
        MOSTRAR "\n\nahora son 5 dias..."
        MOSTRAR "¿Que deberia hacer?\na)investigar \nb)mirar tiktok... \nc)suicidarme"
        LEER eleccion_dia_3 // Leer elección día 3
        SEGUN eleccion_dia_3 HACER
          CASO 'a':
             MOSTRAR "sales y preguntas a tu docente..."
             INCREMENTAR nivel_investigacion
          CASO 'b':
             MOSTRAR "te quedas todo el dia mirando tiktok..."
          CASO 'c':
             MOSTRAR "agarras un cuchillo y te cortas las muñecas..."
             ASIGNAR suicidio_elegido = falso
          POR DEFECTO:
             MOSTRAR "no sabes que hacer y pierdes el dia"
        FIN SEGUN

      CASO 4:
        MOSTRAR "\n\nson 4 dias..."
        MOSTRAR "¿Que deberia hacer?\na)investigar \nb)ir a una discoteca \nc)suicidarme"
        LEER eleccion_dia_4 // Leer elección día 4
        SEGUN eleccion_dia_4 HACER
          CASO 'a':
            MOSTRAR "vas a una iglesia..."
            INCREMENTAR nivel_investigacion
          CASO 'b':
            MOSTRAR "vas a una discoteca y tomas todo el dia..."
            MOSTRAR "...te sientes muy agotado, duermes todo el dia"
            ASIGNAR dia = 5 // ¡Importante! Esto causa que el siguiente día sea el 6
                           // porque el bucle PARA incrementará 'dia' a 6 al final.
          CASO 'c':
            MOSTRAR "vas a un zoologico y te lanzas..."
            ASIGNAR suicidio_elegido = falso
          POR DEFECTO:
            MOSTRAR "no sabes que hacer y pierdes el dia"
        FIN SEGUN

      CASO 5:
         // (Este caso se saltará si el jugador eligió ir a la discoteca en el día 4)
        MOSTRAR "\n\nen 3 dias morire..."
        MOSTRAR "¿Que deberia hacer?\na)investigar \nb)mirar grey's anatomy \nc)suicidarme"
        LEER eleccion_dia_5 // Leer elección día 5
        SEGUN eleccion_dia_5 HACER
          CASO 'a':
            MOSTRAR "encuentras a un loco..."
            INCREMENTAR nivel_investigacion
          CASO 'b':
            MOSTRAR "miras grey's anatomy..."
          CASO 'c':
            MOSTRAR "subes al ultimo piso..."
            ASIGNAR suicidio_elegido = falso
          POR DEFECTO:
            MOSTRAR "no sabes que hacer y pierdes el dia"
        FIN SEGUN

      CASO 6:
        MOSTRAR "\n\nen 2 dias morire..."
        MOSTRAR "¿Que deberia hacer?\na)investigar \nb)ir a ver a mi familia \nc)suicidarme"
        LEER eleccion_dia_6 // Leer elección día 6
        SEGUN eleccion_dia_6 HACER
          CASO 'a':
            MOSTRAR "encuentras a un chaman..."
            INCREMENTAR nivel_investigacion
          CASO 'b':
            MOSTRAR "Tomas todo el dia para estar con tu familia..."
          CASO 'c':
            MOSTRAR "tomas cianuro..."
            ASIGNAR suicidio_elegido = falso
          POR DEFECTO:
            MOSTRAR "no sabes que hacer y pierdes el dia"
        FIN SEGUN

      CASO 7:
        MOSTRAR "\n\nes mi ultimo dia..."
        MOSTRAR "¿Que deberia hacer?\na)investigar... \nb)ir a la iglesia \nc)suicidarme..."
        LEER eleccion_dia_7 // Leer elección día 7
        SEGUN eleccion_dia_7 HACER
          CASO 'a':
            MOSTRAR "encuentras a alguien que dice..."
            INCREMENTAR nivel_investigacion
          CASO 'b':
            MOSTRAR "vas a una iglesia..."
          CASO 'c':
            MOSTRAR "agarras el arma de tu abuelo..."
            ASIGNAR suicidio_elegido = falso
          POR DEFECTO:
            MOSTRAR "no sabes que hacer y pierdes el dia"
        FIN SEGUN

    FIN SEGUN // Fin del switch(dia)

  FIN PARA // Fin del bucle de días

  // --- Lógica Final (Después de los 7 días o si no hubo suicidio antes) ---
  SI suicidio_elegido == falso ENTONCES
    // El mensaje ya se mostró dentro del bucle al usar 'break' (SALIR DEL BUCLE)
    // No se necesita hacer nada más aquí si el juego ya terminó.
  SINO SI nivel_investigacion > 5 ENTONCES
    // El jugador sobrevivió los 7 días Y investigó mucho
    MOSTRAR "con toda la informacion que reuniste..." // Explicación sobre matar
    MOSTRAR "estas en la calle, hay una mujer frente a ti \na)la empujas... \nb)no haces nada"
    LEER decision_final // Leer la decisión final
    SEGUN decision_final HACER
      CASO 'a':
        MOSTRAR "la empujas y corres a tu casa..." // Final Matar
      CASO 'b':
        MOSTRAR "aceptas tu destino, no quitaras la vida..." // Final Aceptar (Alto Conocimiento)
      POR DEFECTO:
        MOSTRAR "no supiste que hacer y se te fue la oportunidad..."
        MOSTRAR "\n\n\nno pudiste hacer nada, das tu ultimo aliento..." // Final Indecisión -> Muerte
    FIN SEGUN
  SINO // Implica que sobrevivió los 7 días PERO investigacion <= 5
    MOSTRAR "\n\n\nNo pudiste hacer nada tu contador llegó a 0..." // Final Muerte (Bajo Conocimiento)
  FIN SI

  RETORNAR 0 // Indica que el programa terminó correctamente
FIN
