#include <stdio.h>

int main() {
   int i;
   char char_array[5] = {'a', 'b', 'c', 'd', '0'};//追加要素は未、strは失敗
   int int_array[5] = {1, 2, 3, 129, 5};
   
   void *void_pointer;
   
   void_pointer = (void *) char_array;
   
   for(i=0; i < 5; i++) { // void_pointerを繰り返し用いて整列の配列要素を取得.
      printf("[文字へのポインタ] は %p　を指しており, そのないようは'%c'です。\n", // %pの二重化は失敗
            void_pointer, *((char *) void_pointer));//(char)の横に(で追加か)
      void_pointer = (void *) ((char *) void_pointer + 1);
   }

   void_pointer = (void *) int_array;
   for(i=0; i < 5; i++) { // void_pointerを繰り返し用いて整数の要素を取得.
      printf("[整数へのポインタ] は %p を指しており, そのないようは%d\n",
            void_pointer, *((int *) void_pointer));
      void_pointer = (void *) ((int *) void_pointer + 1);
   }
}
