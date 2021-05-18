#include <stdio.h>

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

int remRep (char bruh[]){
  
  int r = 0, i = 0, j;
  
  while (bruh[i] != '\0'){
    
    if (bruh[i] == bruh[i+1]){
      
      for (j = i; bruh[j]; != '\0'; j++){
        
        bruh[j] = bruh[j+1];
      }
      i--;
    }
    i++;
  }
  
  return i;
}

//exercício 25

void elimina (char bruh[], int indice){
  
  int i;
  
  for (i = indice; bruh[i] != '\0'; i++){
    
    bruh[i] = bruh[i+1];
  }
  
  bruh[i-1] = '\0';
}

int limpaEspacos (char texto[]){
  
  int r = 0;
  
  while (texto[r] != '\0'){
    
    if (texto[r] == ' ' && texto[r+1] == ' '){
      
      elimina (texto, r);
      
      r--;
    }
    r++;
  }
  return r;
}

//exercício 26

void insere (int s[], int N, int x){
  
  int i = 0, aux = 0;
  
  while (i < N){
    
    if(x <= s[i]){
      
      aux = s[i];
      
      s[i] = x;
      
      x = aux;
    }
    i++;
  }
  s[i] = x;
}

//exercício 27

void merge (int r[], int a[], int b[], int na, int nb){
  
  int i = 0, j = 0, h = 0;
  
  while (i < na+nb){
    
    if (a[j] <= b[h])
    
      r[i] = a[j];
    
      j++;
    }
    else{
    
      r[i] = b[h];
    
      h++;
    }
  
    if (j == na+1){
    
      while (i < na+nb){
      
        r[i] = b[h];
      
        i++;
      
        h++;
      }
    }
  
    if (h == nb+1){
    
      while (i < na+nb){
      
        r[i] = a[j];
      
        i++;
      
        j++;
      }
    }
    i++;
  }
}

//exercício 28

int crescente (int a[], int i, int j){
  
  int r = 1, k;
  
  for (k = i; k < j; k++){
    
    if (a[k] > a[k+1]) r = 0;
  }
  
  return r;
}

//exercício 29

int retiraNeg (int v[], int N){
  
  int r = N, i = 0, k;
  
  while (i < r){
    
    if (v[i] < 0){
      
      for (k = i; k < r; k++) v[k] = v[k+1];
      
      r--;
      
      r--;
    }
    
    i++;
  }
  
  return r;
}

// exercício 30

int conta_freq (int bruh[], int n, int N){
    
  int i, contador = 0;
    
  for (i = 0; i < N; i++){
        
    if (bruh[i] == n) contador++;
  }
    
  return contador;
}


int menosFreq (int v[], int N){
  
  int r = v[0], i, x = conta_freq(v, v[0], N);
       
  for (i = 0; i < N; i++){
           
    if (conta_freq(v, v[i], N) < x){
               
      x = conta_freq(v, v[i], N);
             
      r = v[i];
    } 
           
  }
       
  return r;
}

//exercício 31

int maisFreq (int v[], int N){
       
  int r = v[0], i, x = conta_freq(v, v[0], N);
  
  for (i = 0; i < N; i++){
           
    if (conta_freq(v, v[i], N) > x){
               
      x = conta_freq(v, v[i], N);
             
      r = v[i];
    } 
  }
       
  return r;
}

//exercício 32

int conta_cres (int bruh[], int n, int N){
    
    int i, contador = 1;
    
    for (i = n; i < N; i++){
        
        if (bruh[i] > bruh[i+1]){
            
            return contador;
        }
        else contador++; 
    }
    return contador;
}


int maxCresc (int v[], int N) {

  int r = conta_cres(v, 0, N), i;

  for (i = 0; i < N; i++){

    if (conta_cres(v, i, N) > r) r = conta_cres(v, i, N);

  }

  return r;
}

//exercício 33





//exercício 34

int elimina_ord (int bruh[], int n, int N){
    
    int i, j, contador = 0;
    
    for (i = n+1; i < N; i++){
        
        if (bruh[i] > bruh[n]) return (N-contador);
        
        if (bruh[n] == bruh[i]){
            
            for(j = n; j < N-1; j++){
                
                bruh[j] = bruh[j+1];
            }
            
            contador++;
        }
    }
    
    return (N-contador);
}


int elimRepOrd (int v[], int N) {

  int i, j;

  N = elimina_ord (v, 0, N);

  for (i = 0; i < N; i++){

    for (j = 0; j < N; j++){

      N = elimina_ord (v, j, N);

    }

  }

  return N;
}

//exercício 35

int elimina_ord (int bruh[], int n, int N){
    
    int i, j, contador = 0;
    
    for (i = n+1; i < N; i++){
        
        if (bruh[i] > bruh[n]) return (N-contador);
        
        if (bruh[n] == bruh[i]){
            
            for(j = n; j < N-1; j++){
                
                bruh[j] = bruh[j+1];
                
            }
            
            contador++;
        }
    }
    
    return (N-contador);
}

int elimRepOrd (int v[], int N) {
       
       int i, j;
       
       N = elimina_ord (v, 0, N);
       
       for (i = 0; i < N; i++){
           
           for (j = 0; j < N; j++){
               
               N = elimina_ord (v, j, N);
           }
       }
  
       return N;
   }


int tem_repetido (int v[], int nv){

  int i, r = 0;

  for (i = 0; i < nv; i++){

    if (v[i] == v[i+1]) return r = 1;

  }

  return r; 
}


int comunsOrd (int a[], int na, int b[], int nb){
       
  int r, i, contador = 0;

  if (tem_repetido (a, na) == 1) na = elimRepOrd (a, na);

  if (tem_repetido (b, nb) == 1 && a[0] != b[0]) nb = elimRepOrd (b, nb);

  for (r = 0; r < nb; r++){

    for (i = 0; i < na; i++){

      if (b[r] == a[i]) contador++;

    }
  }

  return contador;
}

//exercício 36

int comuns (int a[], int na, int b[], int nb){

  int r, i, contador = 0;

  for (r = 0; r < nb; r++){

    for (i = 0; i < na; i++){

      if (a[r] == b[i]){

        contador++; 

        i = na;
      } 

    }
  }

  return contador;
}

//exercício 37

int minInd (int v[], int n) {
    
   int r = 0, i, menor = v[0];
   
   for (i = 0; i < n; i++){
       
       if (v[i] < menor){
           
          menor = v[i]; 
          
          r = i;
       } 
   }
   
   return r;
}

//exercício 38

void somasAc (int v[], int Ac [], int N){
   
   int i;
   
   for (i = 0; i < N; i++){
       
       if (i == 0) Ac[i] = v[i];
       
       else Ac[i] = Ac[i-1] + v[i];
   }
}

//exercício 39






//exercício 40

void transposta (int N, float m [N][N]) {
    
    int i, j;
    
    float aux[N][N];
    
    for (i = 0; i < N; i++){
        
        for (j = 0; j < N; j++){
            
            aux[i][j] = m[j][i];
            
        }
    }
    
    for (i = 0; i < N; i++){
        
        for (j = 0; j < N; j++){
            
            m[i][j] = aux[i][j];
            
        }
    }
}

//exercício 41

void addTo(int N, int M, int a [N][M], int b[N][M]) {
    
    int i, j;
    
    for (i = 0; i < N; i++){
        
        for (j = 0; j < M; j++) a[i][j] = a[i][j] + b[i][j];
    }
}

//exercício 42

  
  
  
//exercício 55

void insertOrd (LInt *l, int x){
    
    LInt node = malloc(sizeof(LInt));
    
    LInt atual = (*l);
    
    LInt anterior;
    
    node->valor = x;
    
    node->prox = NULL;
    
    if((*l) == NULL){
        
        (*l) = node;
        return;
    }
    
    if(atual->prox == NULL){
        
        if(x < atual->valor){
            
            (*l) = node;
            
            node->prox = atual;
            
        } else{
            
            atual->prox = node;
        }
        
        return;
    }
    
    anterior = atual;
    
    atual = atual->prox;
    
    if(anterior->valor > x){
        
        (*l) = node;
        
        node->prox = anterior;
        
        return;
        
    } else{
        
        while(atual->valor < x){
            
            if(atual->prox == NULL){
                
                atual->prox = node;
                return;
                
            } else{
                
                anterior = anterior->prox;
                
                atual = atual->prox;
            }
        }
        
        anterior->prox = node;
        
        node->prox = atual;
        
        return;
        
    }
}

//exercício 56

int removeOneOrd (LInt *l, int x){
    
    LInt anterior, atual;
    
    atual = (*l);
    
    if(atual == NULL) return 1;
    
    if(atual->valor == x){
        
        (*l) = NULL;
        
        return 0;
    }
    
    while(atual->prox != NULL){
        
        anterior = atual;
        
        atual = atual->prox;
        
        if(atual->valor == x){
            
            anterior->prox = atual->prox;
            
            return 0;
        }
        
    }
    
    return 1;
}

//exercício 57


LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void merge (LInt *r, LInt a, LInt b){
    
    if(a == NULL){
        
      *r = b;  
      
      return;
    } 
    
    if(b == NULL){
        
      *r = a;  
      
      return;
    } 
    
    LInt atual = newLInt(0, NULL);
    
    *r = atual;
    
    while(a != NULL && b != NULL){
        
        if(a->valor < b->valor){
            
            atual->prox = a;
            
            a = a->prox;
            
        } else{
            
            atual->prox = b;
            
            b = b->prox;
        }
        
        atual = atual->prox;
    }
    
    if(a == NULL) atual->prox = b;
    
    else atual->prox = a;
    
    atual = *r;
    
    *r = atual->prox;
    
    free(atual);
    
    return;
 
}

//exercício 58




