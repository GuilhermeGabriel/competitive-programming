int is_bem_definida(char *str, Pilha *pilha){
  int ok = 1;
  char par;
  for(int i = 0; ok && str[i] != '\0'; i++){
    if(str[i] == '[' || str[i] == '(' || str[i] == '{'){
      pilha_inserir(pilha, str[i]);
    } else if (pilha_tamanho(pilha) == 0){
      ok = 0;
    } else {
      par = pilha_valor_topo(pilha);
      pilha_remover(pilha);
      if(str[i] == ']' && par != '[')        
        ok = 0;
      if(str[i] == ')' && par != '(')
        ok = 0;
      if(str[i] == '}' && par != '{')
        ok = 0;
    }
  }
  if(pilha_tamanho(pilha) > 0) ok = 0;
  return ok;
}
