int sumcalc(int a, int b, int N) 
{ 
 int i, x, t, u, v; 
 x = 0; 
 u = ((a<<2)/b); 
 v = 0; 
 for(i = 0; i <= N; i++) { 
 t = i+1; 
 x = x + v + t*t; 
 v = v + u; 
 } 
 return x; 
} 
