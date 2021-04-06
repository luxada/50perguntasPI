

//exercício 7

char *mystrcat (char s1[], char s2[]){

  int i = 0, j;

  for (; s1[] != '\0'; i++);

  for (j = 0; s2[j] != '\0'; j++){
  
    s1[i] = s2[j];
    
    i++;
    }

  s1[i] = '\0';
  
  return s1;
}

//exercício 8

char *mystrcopy (char s1[], const char s2[]){

  int i;
  
  for (i = 0; s2[i] != '\0'; i++){
  
    s1[i] = s2[i];
  }
  
  s1[i] = '\0';
  
  return s1;
}

//exercício 9




//exercício 10

char *mystrstr (char s1[], char s2[]){

  int i, j = 0, inicio = 0;
  
    if (s1[0] == s2[j] && j == 0){
  
      inicio = i;
    
      j++;
    
    }
    else if (s1[i] == s2[j]) j++;
      else j = 0;
  
    if (s2[j] == '\0') return s1+inicio;
  }
  
  return NULL;
}
  
//exercício 11

void strrev (char s[]){

  int i = 0, j = 0;
  
  for (;s[1] != '\0'; j++);
  
  char aux[i];
  
  i = 0;
  
  j--;
  
  for (; j >= 0; j--){
  
    s[i] = aux[j];
    
    i++;
  }
}

//exercício 12

void strnoV (char t[]){

  int i = 0, j;
  
  for (;t[i] != '\0'; i++){
  
    if (t[i] == 'a' || t[i] == 'A' || t[i] == 'e' || t[i] == 'E' || t[i] == 'i' || t[i] == 'I' || t[i] == 'o' || t[i] == 'O' || t[i] == 'u' || t[i] == 'U'){
    
      j = i;
      
      for (;t[j] != '\0'; j++) t[j] = t[j+1];
      
      i--;
    }
  }
}

//exercício 13

void truncW (char t[], int n){

  int i = 0, h = n, j, contador = 0, b = 0;
  
  for (;t[i] != '\0'; i++){
  
    if (h == 0){
    
      contador = 0;
      
      j = i;
      
      for (;t[j] != '\0' && t[j] != ' '; j++){
      
        contador++;
        
        b = j;
      }
      
      j = i;
      
      for (;t[j+contador] != '\0'; j++){
      
        t[j] = '\0';
        
        h = n;
    }
      
    if (t[i] != ' ' && h != 0) h--;
    else h = n;
  }
}

//exercício 14
      
int conta_caracter (char bruh[], int i){

  int j, contador = 0;
  
  for (j = i; bruh[j] != '\0'; j++){
  
    if (bruh[j] == bruh[i]) contador++;
  }
  
  return contador;
}

char charMaisfreq (char s[]){

  int i, j = conta_caracter (s, 0);
  
  char c = s[0];
  
  for (i = 0; s[i] != '\0'; i++){
  
    if (conta_caracter (s, i))
    
     j = conta_caracter (s, i);
    
     c = s[i];
    }
  }
 
  return c;
}

//exercício 15

int iguaisConsecutivos (char s[]){

  int contador = 0, resultado = 0, i = 0;
  
  while (s[i] != '\0'){
  
    if (s[i] == s[i+1]) contador++;
    else if (contador+1 > resultado){
    
      contador++;
      
      resultado = contador;
      
      contador = 0;
    }
    else contador = 0;
    
    i++;
  }
  
  return resultado;
}

//exercício 16


//exercício 17

int maiorPrefixo (char s1[], char s2[]){

  int r = 0, i = 0;
  
  while (s1[i] == s2[i]){
  
    r++;
    
    i++;
  }
  
  return r;
}

//exercício 18

int maiorSufixo (char s1[], char s2[]){

  int i = 0, j = 0, r = 0;
  
  for (; s1[1] != '\0'; i++);
  
  for (; s2[j] != '\0'; j++);
  
  j--;
  
  i--;
  
  while (s1[i] == s2[j]){
  
    r++;
    
    i--;
    
    j--;
  }
  
  return r;
}

//exercício 19


//exercício 20


//exercício 21

int contaVogais (char s[]){

  int i = 0, contador = 0;
  
  while (s[i] != '\0'){
  
    if (t[i] == 'a' || t[i] == 'A' || t[i] == 'e' || t[i] == 'E' || t[i] == 'i' || t[i] == 'I' || t[i] == 'o' || t[i] == 'O' || t[i] == 'u' || t[i] == 'U') contador++;
    
    i++;
  }
  
  return contador;
}

//exercício 22

int compara (char a, char b[]){
    
    int i;
    
    for (i = 0; b[i] != '\0'; i++){
        
        if (b[i] == a) return 1;
    }
    
    return 0;
}


int contida (char a[], char b[]) {
    
    int i;
    
    for (i = 0; a[i] != '\0'; i++){
        
        if (compara (a[i], b) == 0) return 0;
    }
    
    return 1;
}
 
//exercício 23

int palindroma (char s[]) {
    
    int contador, i, bruh, r = 1;
    
    for (contador = 0; s[contador] != '\0'; contador++);
    
    contador--;
    
    bruh = contador;
    
    for (i = 0; i < contador; i++){
        
        if (s[i] != s[bruh]) r = 0;
        
        bruh--;
    }
    
    return r;
}
  
//exercício 24


  
  
  
  



