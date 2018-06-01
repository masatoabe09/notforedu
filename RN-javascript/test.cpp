 #include <stdio.h>
// #include <iostream>

//  int main() {
//      printf("Hello World");
//      std::cout << "Hello iostream" << std::endl;
//      std::cout << "2 + 2 = " << 2 + 2 << std::endl;
//      return 0;
//       }
//http://www.ced.is.utsunomiya-u.ac.jp/lecture/2014/prog/p3/kadai2/page1.php
 
int main() {
   int hoge = 5;
   int i;
   char char_array[5] = {'a', 'b', 'c', 'd', '0'};//追加要素は未、strは失敗
   int int_array[5] = {8/2, 2, 3, 129, 5, 0};
   
   void *void_pointer;
   
   void_pointer = (void *) char_array;
    
   printf("&hoge..%p\n",&hoge);

   for(i=0; i < 5; i++) { // void_pointerを繰り返し用いて整列の配列要素を取得.
      printf("[文字へのポインタ] は %p　を指しており, その内容は'%c''%d'です。\n", // %pの二重化は失敗
            void_pointer, *((char *) void_pointer));//(char)の横に(で追加か)
      void_pointer = (void *) ((char *) void_pointer + 1);
   }

   void_pointer = (void *) int_array;
   for(i=0; i < 6; i++) { // void_pointerを繰り返し用いて整数の要素を取得.
      printf("[整数へのポインタ] は %p を指しており, その内容は%d\n",
            void_pointer, *((int *) void_pointer));
      void_pointer = (void *) ((int *) void_pointer + 1);
   }
}
