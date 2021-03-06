#ifndef MONOGRAFIA_H
#define MONOGRAFIA_H
#include<string>
#include<vector>
#include "Item.h"



using namespace std;

class Monografia : public Item{
private:
string orientador;
string curso;
string instituicao;
string tema; 
public:
   Monografia(/* args */);
   Monografia(string p_nome, string p_autor, int p_num_paginas, int p_ano_lancamento, string p_orientador, string p_curso, string p_instituicao, string p_tema);
   ~Monografia();
   void set_orientador(string p_orientador);
   void set_curso(string p_curso);
   void set_instituicao(string p_instituicao);
   void set_tema(string p_tema);
   string get_orientador();
   string get_curso();
   string get_instituicao();
   string get_tema();
};

#endif