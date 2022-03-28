#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <stdio.h>


// Stores keywords and their colour associations.
namespace keyWordColours
{
  namespace colours
  {
    const char blue [] =       	"\033[34;40m";
    const char brightRed [] = 	"\033[91;40m";
    const char cyan [] =       	"\033[94;40m";
    
  }
  
  namespace b
  {
    namespace boolKW
    {
      inline static const std::string kW {"bool"};
      inline static const std::string c {colours::brightRed};
    }
    namespace breakKW
    {
      inline static const std::string kW {"break"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace c
  {
    namespace caseKW
    {
      inline static const std::string KW {"case"};
      inline static const std::string c {colours::blue};
    }
    namespace catchKW
    {
      inline static const std::string kW {"catch"};
      inline static const std::string c {colours::blue};
    }
    namespace charKW
    {
      inline static const std::string kW {"char"};
      inline static const std::string c {colours::brightRed};
    }
    namespace classKW
    {
      inline static const std::string kW {"class"};
      inline static const std::string c {colours::blue};
    }
    namespace constKW
    {
      inline static const std::string kW {"const"};
      inline static const std::string c {colours::blue};
    }
    namespace constexprKW
    {
      inline static const std::string kW {"constexpr"};
      inline static const std::string c {colours::blue};
    }
    namespace continueKW
    {
      inline static const std::string kW {"continue"};
      inline static const std::string c {colours::blue};
    }

  }
  namespace d
  {
    namespace defaultKW
    {
      inline static const std::string kW {"default"};
      inline static const std::string c {colours::blue};
    }
    namespace deleteKW
    {
      inline static const std::string kW {"delete"};
      inline static const std::string c {colours::blue};
    }
    namespace doKW
    {
      inline static const std::string kW {"do"};
      inline static const std::string c {colours::blue};
    }
    namespace doubleKW
    {
      inline static const std::string kW {"double"};
      inline static const std::string c {colours::brightRed};
    }
  }
  namespace e
  {
    namespace elseKW
    {
      inline static const std::string kW {"else"};
      inline static const std::string c {colours::blue};
    }
    namespace enumKW
    {
      inline static const std::string kW {"enum"};
      inline static const std::string c {colours::blue};
    }
    namespace externKW
    {
      inline static const std::string kW {"extern"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace f
  {
    namespace falseKW
    {
      inline static const std::string kW {"false"};
      inline static const std::string c {colours::cyan};
    }
    namespace floatKW
    {
      inline static const std::string kW {"float"};
      inline static const std::string c {colours::brightRed};
    }
    namespace forKW
    {
      inline static const std::string kW {"for"};
      inline static const std::string c {colours::blue};
    }
    namespace friendKW
    {
      inline static const std::string kW {"friend"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace g
  {
    namespace gotoKW
    {
      inline static const std::string kW {"goto"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace i
  {
    namespace ifKW
    {
      inline static const std::string kW {"if"};
      inline static const std::string c {colours::blue};
    }
    namespace inlineKW
    {
      inline static const std::string kW {"inline"};
      inline static const std::string c {colours::blue};
    }
    namespace intKW
    {
      inline static const std::string kW {"int"};
      inline static const std::string c {colours::brightRed};
    }
  }
  namespace n
  {
    namespace namespaceKW
    {
      inline static const std::string kW {"namespace"};
      inline static const std::string c {colours::blue};
    }
    namespace newKW
    {
      inline static const std::string kW {"new"};
      inline static const std::string c {colours::blue};
    }
    namespace nullptrKW
    {
      inline static const std::string kW {"nullptr"};
      inline static const std::string c {colours::cyan};
    }
  }
  namespace p
  {
    namespace privateKW
    {
      inline static const std::string kW {"private"};
      inline static const std::string c {colours::blue};
    }
    namespace protectedKW
    {
      inline static const std::string kW {"protected"};
      inline static const std::string c {colours::blue};
    }
    namespace publicKW
    {
      inline static const std::string kW {"public"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace r
  {
    namespace returnKW
    {
      inline static const std::string kW {"return"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace s
  {
    namespace shortKW
    {
      inline static const std::string kW {"short"};
      inline static const std::string c {colours::brightRed};
    }
    namespace signedKW
    {
      inline static const std::string kW {"signed"};
      inline static const std::string c {colours::brightRed};
    }
    namespace sizeofKW
    {
      inline static const std::string kW {"sizeof"};
      inline static const std::string c {colours::blue};
    }
    namespace staticKW
    {
      inline static const std::string kW {"static"};
      inline static const std::string c {colours::blue};
    }
    namespace structKW
    {
      inline static const std::string kW {"struct"};
      inline static const std::string c {colours::blue};
    }
    namespace switchKW
    {
      inline static const std::string kW {"switch"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace t
  {
    namespace templateKW
    {
      inline static const std::string kW {"template"};
      inline static const std::string c {colours::blue};
    }
    namespace thisKW
    {
      inline static const std::string kW {"this"};
      inline static const std::string c {colours::blue};
    }
    namespace throwKW
    {
      inline static const std::string kW {"throw"};
      inline static const std::string c {colours::blue};
    }
    namespace trueKW
    {
      inline static const std::string kW {"true"};
      inline static const std::string c {colours::cyan};
    }
    namespace tryKW
    {
      inline static const std::string kW {"try"};
      inline static const std::string c {colours::blue};
    }
    namespace typedefKW
    {
      inline static const std::string kW {"typedef"};
      inline static const std::string c {colours::blue};
    }
    namespace typenameKW
    {
      inline static const std::string kW {"typename"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace u
  {
    namespace unsignedKW
    {
      inline static const std::string kW {"unsigned"};
      inline static const std::string c {colours::brightRed};
    }
    namespace usingKW
    {
      inline static const std::string kW {"using"};
      inline static const std::string c {colours::blue};
    }
  }
  namespace v
  {
    namespace virtualKW
    {
      inline static const std::string kW {"virtual"};
      inline static const std::string c {colours::brightRed};
    }
    namespace voidKW
    {
      inline static const std::string kW {"void"};
      inline static const std::string c {colours::blue};
    }
  }
} 


bool printKeyWord(const std::vector<char> & textBuffer, unsigned long & point);
bool isKeyWord(const std::vector<char> & textBuffer, const std::string & keyWord,
	       unsigned long point);
void printColouredKeyWord(const std::vector<char> & textBuffer, const std::string & keyWord,
			  unsigned long & point, const std::string & colour);

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
	      std::this_thread::sleep_for(std::chrono::milliseconds(3));

	      if(!printKeyWord(textBuffer, iter))
		{
		  std::cout<<textBuffer[iter];
		  setvbuf(stdout, NULL, _IONBF, 0);

		  ++iter;	// It wasn't inc'ed in printKeyWord.
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
	  using namespace keyWordColours;
	  
	  switch(textBuffer[point])
	    {
	    case 'b':			// bool, break
	      {
		if(isKeyWord(textBuffer, b::boolKW::kW, point +1))
		  {
		    printColouredKeyWord(textBuffer, b::boolKW::kW, point, b::boolKW::c);
		    retVal = true;
		  }
		else
		  {
		    if(isKeyWord(textBuffer, b::breakKW::kW, point +1))
		      {
			printColouredKeyWord(textBuffer, b::breakKW::kW, point, b::breakKW::c);
			retVal = true;
		      }
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
			  unsigned long & point, const std::string & colour)
{
  
  std::cout<<colour;
  for(unsigned long iter {point}; iter < (point + keyWord.size()); ++iter)
    {
      std::cout<<textBuffer[iter];
      setvbuf(stdout, NULL, _IONBF, 0);
    }
  std::cout<<"\033[0m";		// Disable's colour.

  point += keyWord.size();
}
