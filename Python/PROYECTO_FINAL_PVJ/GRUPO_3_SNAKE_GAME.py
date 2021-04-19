import pygame
import random 
from pygame import mixer
pygame.init()

#Colores
negro= (0, 0, 0)
rojo= (255, 0, 0)
verde= (58,225,11)
azul= (0, 0, 255)
verde_claro= (0, 255, 120)
celeste= (80, 220, 255)
morado= (105, 0, 150)
blanco= (255, 255, 255)
amarillo= (230, 255, 10)
rosa= (255, 0, 255)
azul_medio_plomo = (90,139,137)
verde_agua = (41,188,181)
#Valores
ancho = 800
alto = 600
cuadro= 20
borde_superior= cuadro*4
color_snake= verde
color_fondo= azul_medio_plomo
lista= list(range(0, 1000, 10))

#Tipos de letras
tipo_letra= pygame.font.Font("freesansbold.ttf", cuadro)
tipo_letra3= pygame.font.Font("freesansbold.ttf", int(borde_superior-cuadro*1.5))
tipo_letra2= pygame.font.SysFont("Helvetica", 30)
#Letras
pausa= tipo_letra.render("Presione la tecla 's' para pausar", True, morado)
Logo = tipo_letra3.render("SNAKE GAME", True, morado)

ventana = pygame.display.set_mode((ancho, alto))

#Imágenes
icono_juego = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/icon_snake.png')
imagen_pausa = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/imagen_pausa.jpg')
game_over = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/game_over.jpg')
c_arriba = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/cabeza_arriba.png')
c_abajo = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/cabeza_abajo.png')
c_izquierda = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/cabeza_izquierda.png')
c_derecha = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/cabeza_derecha.png')
cuerpo = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/cuerpo.png')
dibujo_manzana = pygame.image.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Imagenes_videojuego/manzana.png')

pygame.display.set_icon(icono_juego)
pygame.display.set_caption("SNAKE GAME")

song_comida= mixer.Sound('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Sonidos_juego/comida.mp3')
choque= mixer.Sound('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Sonidos_juego/choque.mp3')
mixer.music.load('D:/UCSP/Ciencias de la Computación I/PROYECTO_FINAL_PVJ/Sonidos_juego/sonido_fondo.mp3')
mixer.music.play(-1)

def pause():
    mixer.music.pause()
    llave= True
    while llave:
        ventana.blit(imagen_pausa, (0, 0))
        for evento in pygame.event.get():
            if evento.type == pygame.QUIT:
                pygame.quit()
            if evento.type == pygame.KEYDOWN:
                if evento.key == pygame.K_c:
                    llave= False
                if evento.key == pygame.K_x:
                    pygame.exit()
        pygame.display.update()
    mixer.music.unpause()

class serpiente:
    def __init__(self, ventana, borde_sup):
        self.x_cabeza= int(ancho/2)-cuadro
        self.y_cabeza= alto-(cuadro*2)
        self.mov_actual = "Arriba"
        self.borde_superior= borde_sup
        self.cuerpo_serpiente= [ ]
        self.puntaje= 0
        self.velocidad= 7

    def eventos(self, ventana):
        for evento in pygame.event.get():
            
            if evento.type == pygame.QUIT:
                pygame.quit()

            if evento.type == pygame.KEYDOWN:                    
                if evento.key == pygame.K_DOWN:
                    if self.mov_actual == "Arriba":
                        continue
                    self.mov_actual = "Abajo"
                if evento.key == pygame.K_UP:
                    if self.mov_actual == "Abajo":
                        continue
                    self.mov_actual = "Arriba"
                if evento.key == pygame.K_LEFT:
                    if self.mov_actual == "Derecha":
                        continue
                    self.mov_actual = "Izquierda"
                if evento.key == pygame.K_RIGHT:
                    if self.mov_actual == "Izquierda":
                        continue
                    self.mov_actual = "Derecha"
                if evento.key == pygame.K_s:
                    pause()
                else:
                    pass

    def mover(self, ventana):
        if self.mov_actual == "Derecha":    
            self.x_cabeza+=cuadro
            
        if self.mov_actual == "Izquierda":
            self.x_cabeza-=cuadro
            
        if self.mov_actual == "Abajo":
            self.y_cabeza+=cuadro
            
        if self.mov_actual == "Arriba":
            self.y_cabeza-=cuadro

        #Validación de límites
        if self.x_cabeza==ancho:
            self.x_cabeza=0
        if self.y_cabeza==alto:
            self.y_cabeza=self.borde_superior
        if self.x_cabeza<0:
            self.x_cabeza=ancho-cuadro
        if self.y_cabeza<self.borde_superior:
            self.y_cabeza= alto-cuadro
            
    def cuerpo_snake(self, ventana, x_cabeza, y_cabeza, x_comida, y_comida, lista):
        self.cuerpo_serpiente[0:0]= [[x_cabeza, y_cabeza]]
        for i in range(len(self.cuerpo_serpiente)):
            if i==0 and self.mov_actual=="Arriba":
                ventana.blit(c_arriba, (self.cuerpo_serpiente[i][0], self.cuerpo_serpiente[i][1]))
            elif i==0 and self.mov_actual=="Abajo":
                ventana.blit(c_abajo, (self.cuerpo_serpiente[i][0], self.cuerpo_serpiente[i][1]))
            elif i==0 and self.mov_actual=="Derecha":
                ventana.blit(c_derecha, (self.cuerpo_serpiente[i][0], self.cuerpo_serpiente[i][1]))
            elif i==0 and self.mov_actual=="Izquierda":
                ventana.blit(c_izquierda, (self.cuerpo_serpiente[i][0], self.cuerpo_serpiente[i][1]))
            elif i!=0:
                ventana.blit(cuerpo, (self.cuerpo_serpiente[i][0], self.cuerpo_serpiente[i][1]))
        self.puntaje= len(self.cuerpo_serpiente)-1
        if self.puntaje in lista:
            del lista[0]
            self.velocidad+=1
        if self.cuerpo_serpiente[0][0] == x_comida and self.cuerpo_serpiente[0][1] == y_comida:
            song_comida.play()
            return
        del self.cuerpo_serpiente[-1]
    
    def game_over(self, x_cabeza, y_cabeza, x_comida, y_comida):
        cuerpo= self.cuerpo_serpiente[1:]
        if [x_cabeza, y_cabeza] in cuerpo:
            mixer.music.pause()
            choque.play()
            llave= True
            while llave:
                ventana.blit(game_over, (0, 0)) 
                for evento in pygame.event.get():
                    if evento.type == pygame.QUIT:
                       pygame.quit()
                    if evento.type == pygame.KEYDOWN:
                        if evento.key == pygame.K_c:
                            self.cuerpo_serpiente= []
                            self.x_cabeza= int(ancho/2)-cuadro
                            self.y_cabeza= alto-(cuadro*2)
                            self.mov_actual= "Arriba"
                            llave= False
                        if evento.key == pygame.K_x:
                            pygame.quit()
                pygame.display.update()
            mixer.music.unpause()
                    

class comida:
    def __init__(self, ventana, x_cabeza, y_cabeza):
        self.ventana= ventana
        self.x_comida= random.randrange(0, ancho-(cuadro-1), cuadro)
        self.y_comida= random.randrange(borde_superior, alto-(cuadro-1), cuadro)
        self.x_cabeza= x_cabeza
        self.y_cabeza= y_cabeza

    def dibujo_comida(self, cuerpo):
        if [self.x_comida, self.y_comida] in cuerpo:
            self.x_comida= random.randrange(0, ancho-(cuadro-1), cuadro)
            self.y_comida= random.randrange(borde_superior, alto-(cuadro-1), cuadro)
        ventana.blit(dibujo_manzana, (self.x_comida, self.y_comida))
def encuadrado(ventana):
    x=0
    y=borde_superior-cuadro
    for i in range(ancho):
        x+=cuadro
        y+=cuadro
        pygame.draw.line(ventana, verde_agua, (x,borde_superior),(x, alto))
        pygame.draw.line(ventana, verde_agua, (0, y),(ancho, y))

correr= serpiente(ventana, borde_superior)
manzana= comida(ventana, 200, 240)
reloj = pygame.time.Clock()
maximo = 0

while True:    
    ventana.fill(color_fondo)
    reloj.tick(correr.velocidad) 
    Puntaje_actual = tipo_letra.render("Puntaje actual: " + str(correr.puntaje) , True, morado)
    
    if correr.puntaje > maximo:
        maximo= correr.puntaje
    Puntaje_maximo = tipo_letra.render("Puntaje máximo: " + str(maximo), True, morado)
    
    pygame.draw.rect(ventana, verde_agua, [0, 0, ancho, borde_superior])
    ventana.blit(Puntaje_actual, (cuadro, cuadro-10))
    ventana.blit(pausa, (cuadro*12, 60))
    ventana.blit(Puntaje_maximo, (cuadro, 50))
    ventana.blit(Logo, (cuadro*11, cuadro-10))
    correr.eventos(ventana)
    correr.cuerpo_snake(ventana, correr.x_cabeza, correr.y_cabeza, manzana.x_comida, manzana.y_comida, lista)
    manzana.dibujo_comida(correr.cuerpo_serpiente)
    correr.game_over(correr.x_cabeza, correr.y_cabeza, manzana.x_comida, manzana.y_comida)
    correr.mover(ventana)
    encuadrado(ventana)
    pygame.display.update()