/*
*
& AND a nivel de bit 
| OR a nivel de bit 
^ XOR a nivel de bit 
~ NOT a nivel de bit
<< desplaza el operando de la izquierda hacia la izquierda el número de bits especificado por el operando de la derecha
>> desplaza el operando de la izquierda hacia la derecha el número de bits especificado por el operando de la derecha

Ejemplos:

10 = 1010
11 = 1011

Operador &      p   &   q               Operador |      p   |   q
1010 &          1   1   1               1010 |          1   1   1
1011            1   0   0               1011            1   1   0
----            0   0   1               ----            0   1   1
1010            0   0   0               1011            0   0   0

Operador ^      p   ^   q                                           Operador ~      
1010 ^          1   0   1                                           ~(1010)         
1011            1   1   0                                           -------           
----            0   1   1                 1111111111111111111111111111111111111111111111111111111111110101         
0101            0   0   0                               

Operador <<                             Operador >>
1010 << 2                               1010 >> 2
----                                    ----
1000                                    0010
* 
*/

