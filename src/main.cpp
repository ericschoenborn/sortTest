/*****************************************************************
creates random data for celeb class and then sorts celebs

@auther Eric Schoenborn
@version Winter 2018 
*****************************************************************/

#include <vector>
#include <iostream>
#include <string>
#include "../include/sorts.h"
#include "../include/celeb.h"

int main(int argc, char** argv){
   /** vecort celebs holds random created celeb objecs */
   std::vector<Celeb> celebs;

   for(int i=0; i<std::stoi(argv[1]); i++){
      /** Celeb tmpObj is a default generated celeb*/
      Celeb tempObj;
      
      celebs.push_back(tempObj);
   }
	
   /** int value that dictates type of sort to be used */
   int choice = atoi(argv[2]);
	
   if(choice == 1){
      std::cout << "bubble" << std::endl;
      bubble_sort(celebs);
   }else if(choice ==2){
      std::cout << "selection" << std::endl;
      selection_sort(celebs);
   }else if(choice ==3){
      std::cout << "insertion" << std::endl;
      insertion_sort(celebs);
   }else if(choice ==4){
      std::cout << "merge" << std::endl;
      mergeSort(celebs);
   }else{
      std::cout << "quick" << std::endl;
      quicksort(celebs);
   } 
   return 0;
}
