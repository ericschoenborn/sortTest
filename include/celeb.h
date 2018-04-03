/*****************************************************************
Celeb class for celeberty objects

@auther Eric Schoenborn
@version Winter 2018 
*****************************************************************/
#include <string>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
/** letter used for random name generator */
static const char letter[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

class Celeb{

   public:

      /***********************************************************
      Default Celeb constructor creates ramod celeb
      ***********************************************************/
      Celeb(){
         this->name = "";
         for(int i=0; i<8; i++){
            this->name += letter[rand() % 25];
	 }
         this->urge = rand() % 10;
	 this->encountered = rand() % 1;
      }

      /***********************************************************
      Creates celeb based off of passed in data
      @param name name of celeberty
      @param urge how badly 1-10 you wnat to meet them
      @param encountered have you meant them before
      ***********************************************************/
      void write(std::string name, int urge, int encountered){
          this->name =name;
	  this->urge =urge;
	  this->encountered = encountered;
      }

      /***********************************************************
      Reassign > operator to be used in celeberty comparison.
      @param a first celeberty to be compared
      @param b secound celeberty to be compared
      ***********************************************************/
      friend bool operator > (const Celeb& a,
         const Celeb& b){
	 return b < a;
      }

      /***********************************************************
      Reassign < operator to be used in celeberty comparison.
      @param a first celeberty to be compared
      @param b secound celeberty to be compared
      ***********************************************************/
      friend bool operator < (const Celeb& a, const Celeb& b){
         if(a.urge <= b.urge){
	    if(a.urge == b.urge){
	       if(a.encountered <= b.encountered){
	          if(a.encountered == b.encountered){
	             if(a.name < b.name){
		        return true;
		     }
		     return false;
		  }
		  return true;
	       }
	       return false;
            }
            return true;
         }else{
            return false;
	 }
      }

      /**********************************************************
      Reassign > operator to be used in celeberty comparison.
      @param a first celeberty to be compared
      @param b secound celeberty to be compared
      **********************************************************/
      friend bool operator <= (const Celeb& a, const Celeb& b){
         return !(a>b);
      }

      private:
         /** name of celeberty */
         std::string name;

         /** how bad you want to meet celeberty */
	 int urge;

	 /** have you meet them yet, 1=yes 0=no */
	 int encountered;

};
			
