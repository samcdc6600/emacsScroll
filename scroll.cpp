#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <stdio.h>


bool printKeyWord(const std::vector<char> & textBuffer, unsigned long & point);
bool isKeyWord(const std::vector<char> & textBuffer, const std::string & keyWord,
	       unsigned long point);
void printColouredKeyWord(const std::vector<char> & textBuffer, const std::string & keyWord,
			  unsigned long & point);

int main()
{
  std::fstream textFileBuffer {"insertText.cpp"};

  if(textFileBuffer.is_open())
    {
      std::vector<char> textBuffer {};

      for(char c; textFileBuffer.get(c); )
	{
	  textBuffer.push_back(c);
	}
      
      textFileBuffer.close();
      
      if(textBuffer.size() > 0)
	{
	  std::string keyWord {};
	  
	  for(unsigned long iter {}; iter < textBuffer.size(); )
	    {
	      std::this_thread::sleep_for(std::chrono::milliseconds(2));

	      if(!printKeyWord(textBuffer, iter))
		{
		  std::cout<<textBuffer[iter];
		  setvbuf(stdout, NULL, _IONBF, 0);

		  ++iter;	// It wasn't inced in printKeyWord.
		}
	    }
	}
    }

  else
    {
      std::cout<<"Couldn't open file!\n";
    }
}


bool printKeyWord(const std::vector<char> & textBuffer, unsigned long & point)
{
  bool retVal {false};

  if(point < textBuffer.size() -12)				// This line is a cheap hack!
    {
      if(point > 1 && textBuffer[point -1] == ' ')
	{
	  switch(textBuffer[point])
	    {
	    case 'b':			// bool, break
	      {
		std::string boolKW {"bool"}, breakKW {"break"};

		if(isKeyWord(textBuffer, boolKW, point +1))
		  {
		    printColouredKeyWord(textBuffer, boolKW, point);
		    retVal = true;
		  }
	      }
	      break;
	  
	    case 'c':			// case, catch, char, class, const, constexpr, continue
	      break;;
	    case 'd':			// default, delete, do, double
	      break;
	    case 'e':			// else, enum, extern
	      break;
	    case 'f':			// false, float, for, friend
	      break;
	    case 'g':			// goto
	      break;
	    case 'i':			// if, inline, int
	      break;
	    case 'l':			// long
	      break;
	    case 'n':			// namespace, new, nullptr
	      break;
	    case 'p':			// private, protected, public
	      break;
	    case 'r':			// return
	      break;
	    case 's':			// short, signed, sizeof, static, struct, switch
	      break;
	    case 't':			// template, this, throw true, try, typedef, typename
	      break;
	    case 'u':			// unsigned, using
	      break;
	    case 'v':			// virtual, void
	      break;
	    case 'w':			// while
	      break;
	    }
	}
    }


  return retVal;
}


bool isKeyWord(const std::vector<char> & textBuffer, const std::string & keyWord,
	       unsigned long point)
{
  for(unsigned long iter {1} ; iter < (keyWord.size()); ++iter, ++point)
    {
      if(textBuffer[point] != keyWord[iter])
	{
	  return false;
	}
    }

  return true;
}

void printColouredKeyWord(const std::vector<char> & textBuffer, const std::string & keyWord,
			  unsigned long & point)
{
  
  std::cout<<"\033[0;31m";
  for(unsigned long iter {point}; iter < (point + keyWord.size()); ++iter)
    {
      std::cout<<textBuffer[iter];
      setvbuf(stdout, NULL, _IONBF, 0);
    }
  std::cout<<"\033[0m";

  point += keyWord.size();
}
