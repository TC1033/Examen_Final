// Test definitions. Do NOT edit this file!

#include <tuple>

#define CATCH_CONFIG_MAIN // defines main() automatically
#include "catch_amalgamated.hpp"

#include "../Personaje.hpp"


// =====================
// tests para Examen Personaje
// ---------------------

TEST_CASE("Ex1", "[Probando constructor default]")
{
    Posicion pos1;
    SECTION("Verificando sus atributos iniciales")
    {
        REQUIRE(pos1.getPosX()==0);
        REQUIRE(pos1.getPosY()==0);
    }
}

TEST_CASE("Ex2", "[Probando constructor con parametros]")
{
    Posicion pos1(-3, 4);
    Posicion pos2(1,-5);
    SECTION("Verificando creacion con parametros")
    {
        REQUIRE(pos1.getPosX()==0);
        REQUIRE(pos1.getPosY()==4);
        REQUIRE(pos2.getPosY()==0);
    }
}

TEST_CASE("Ex3", "[Probando setters]")
{
    Posicion nueva;
    Posicion otra;
    SECTION("Verificando cambios en los atributos")
    {
        nueva.setPosX(5);
        nueva.setPosY(-1);
        otra.setPosX(1285);
        otra.setPosY(800);
        REQUIRE(nueva.getPosX()==5);
        REQUIRE(nueva.getPosY()==0);
        REQUIRE(otra.getPosX()==0);
        REQUIRE(otra.getPosY()==0);
    }
}

TEST_CASE("Ex4", "[Probando Imprimir]")
{
    Posicion pos2(5,6);
    SECTION("Mostrando en consola los datos de la Posicion")
    {
        pos2.imprime();
        REQUIRE(true);
    }
}

TEST_CASE("Ex5", "[Probando iguales]")
{
    Posicion pos2(10,45);
    Posicion pos3(0,0);
    Posicion pos4;
    SECTION("Probando iguales")
    {
        REQUIRE(pos2.igual(pos3)==0);
        REQUIRE(pos3.igual(pos4)==1);
    }
}

TEST_CASE("Ex6", "[Constructor Default de Personaje]")
{
    Personaje c1;
    SECTION("Constructor Default")
    {
        Posicion p1;
        REQUIRE(c1.getNombre()=="Dummy");
        REQUIRE(c1.getPos().igual(p1)==1);
    }
}

TEST_CASE("Ex7", "[Constructor con parámetros de Caja]")
{
    Personaje c2("Goku", Posicion(20,30));
    SECTION("Constructor con parámetros de Personaje")
    {
        Posicion p2(20,30);
        REQUIRE(c2.getNombre()=="Goku");
        REQUIRE(c2.getPos().igual(p2)==1);
    }
}

TEST_CASE("Ex8", "[Probando setters]")
{
    Posicion p3(50,60);
    Personaje c3;
    SECTION("Setters de Personaje")
    {
        c3.setNombre("Pikachu");
        c3.setPos(p3);
        REQUIRE(c3.getNombre()=="Pikachu");
        REQUIRE(c3.getPos().igual(p3)==1);
    }
}

TEST_CASE("Ex9", "[Probando Avanza Horizontal de Personaje]")
{
    Personaje c4;
    SECTION("Avanza Horizontal")
    {
        c4.avanzaHorz(15);
        REQUIRE(c4.getPos().getPosX()==15);
    }
}

TEST_CASE("Ex10", "[Probando imprime de Personaje]")
{
    Personaje c4;
    SECTION("Imprime de Personaje")
    {
        c4.imprime();
        REQUIRE(true);
    }
}