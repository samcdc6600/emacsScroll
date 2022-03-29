#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>
#include <stdio.h>


constexpr unsigned long fudgVal {12};


// Stores keywords and their colour associations.
namespace keyWordColours
{
  namespace colours
  {
    const char defaultColour [] =	"\033[0m";
    const char blue [] =       	"\033[34;40m";
    const char brightRed [] = 	"\033[91;40m";
    const char cyan [] =       	"\033[35;40m";
    const char yellow [] =	"\033[93;40m";
    const char darkYellow [] =	"\033[33;40m";
    const char planeTextColour [] =	"\033[96;40m";
    
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
      inline static const std::string kW {"case"};
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
  namespace l
  {
    namespace longKW
    {
      inline static const std::string kW {"long"};
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
  namespace w
  {
    namespace whileKW
    {
      inline static const std::string kW {"while"};
      inline static const std::string c {colours::blue};
    }
  }
} 


bool printKeyWord(const std::vector<char> & textBuffer, unsigned long & point);
bool isKeyWord(const std::vector<char> & textBuffer, const std::string & keyWord,
	       unsigned long point);
void printColouredKeyWord(const std::vector<char> & textBuffer, const std::string & keyWord,
			  unsigned long & point, const std::string & colour);
void printPlain(const std::vector<char> & textBuffer, unsigned long & point);

  
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
	  unsigned long iter {};

	  // We need to consume the first character before we can check for
	  // single line comments (yes this is hacky.)
	  if(!printKeyWord(textBuffer, iter))
	    {
	      printPlain(textBuffer, iter);
	    }
	  
	  for( ; iter < textBuffer.size(); )
	    {
	      std::this_thread::sleep_for(std::chrono::milliseconds(5));

	      if(iter < (textBuffer.size() -fudgVal) &&
		 textBuffer[iter -1] != '\\' && textBuffer[iter] == '/'
		 && textBuffer[iter +1] == '*')
		{
		  bool end {false};

		  std::cout<<keyWordColours::colours::darkYellow;
		  std::cout<<textBuffer[iter];
		  setvbuf(stdout, NULL, _IONBF, 0);
		  iter++;
		  std::cout<<textBuffer[iter];
		  setvbuf(stdout, NULL, _IONBF, 0);
		  iter++;
		  while(iter < (textBuffer.size() -fudgVal) && !end)
		    {
		      std::cout<<textBuffer[iter];
		      setvbuf(stdout, NULL, _IONBF, 0);
		      iter++;
		      if(textBuffer[-iter] != '\\' && textBuffer[iter] == '*'
			 && textBuffer[iter +1] == '/')
			{
			  end = true;
			}
		    }
		  std::cout<<textBuffer[iter];
		  setvbuf(stdout, NULL, _IONBF, 0);
		  iter++;
		  std::cout<<textBuffer[iter];
		  setvbuf(stdout, NULL, _IONBF, 0);
		  iter++;
		  std::cout<<keyWordColours::colours::defaultColour;
		}
	      else if(iter < (textBuffer.size() -fudgVal) &&
		      textBuffer[iter -1] &&
		      textBuffer[iter -1] != '\\' && textBuffer[iter] == '/'
		      && textBuffer[iter +1] == '/')
		{
		  std::cout<<keyWordColours::colours::yellow;
		  while(iter < textBuffer.size() && textBuffer[iter] != '\n')
		    {
		      std::cout<<textBuffer[iter];
		      setvbuf(stdout, NULL, _IONBF, 0);
		      iter++;
		    }
		}
	      else if(!printKeyWord(textBuffer, iter))
		{
		  printPlain(textBuffer, iter);
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

  if(point < textBuffer.size() -fudgVal)				// This line is a cheap hack!
    {
      if(point > 1 && textBuffer[point -1] == ' ')
	{
	  using namespace keyWordColours;
	  
	  switch(textBuffer[point])
	    {
	    case 'b':			// bool, break
	      if(isKeyWord(textBuffer, b::boolKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, b::boolKW::kW, point, b::boolKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, b::breakKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, b::breakKW::kW, point, b::breakKW::c);
		  retVal = true;
		}
	      break;
	  
	    case 'c':			// case, catch, char, class, const,
					// constexpr, continue
	      if(isKeyWord(textBuffer, c::caseKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, c::caseKW::kW, point, c::caseKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, c::catchKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, c::catchKW::kW, point, c::catchKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, c::charKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, c::charKW::kW, point, c::charKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, c::classKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, c::classKW::kW, point, c::classKW::c);
		  retVal = true;
		}
	      
	      else if(isKeyWord(textBuffer, c::constexprKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, c::constexprKW::kW, point, c::constexprKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, c::constKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, c::constKW::kW, point, c::constKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, c::continueKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, c::continueKW::kW, point, c::continueKW::c);
		  retVal = true;
		}

	      break;;
	    case 'd':			// default, delete, do, double
	      if(isKeyWord(textBuffer, d::defaultKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, d::defaultKW::kW, point, d::defaultKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, d::deleteKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, d::deleteKW::kW, point, d::deleteKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, d::doubleKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, d::doubleKW::kW, point, d::doubleKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, d::doKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, d::doKW::kW, point, d::doKW::c);
		  retVal = true;
		}
	      break;
	    case 'e':			// else, enum, extern
	      if(isKeyWord(textBuffer, e::elseKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, e::elseKW::kW, point, e::elseKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, e::enumKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, e::enumKW::kW, point, e::enumKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, e::externKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, e::externKW::kW, point, e::externKW::c);
		  retVal = true;
		}
	      break;
	    case 'f':			// false, float, for, friend
	      if(isKeyWord(textBuffer, f::falseKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, f::falseKW::kW, point, f::falseKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, f::floatKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, f::floatKW::kW, point, f::floatKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, f::forKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, f::forKW::kW, point, f::forKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, f::friendKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, f::friendKW::kW, point, f::friendKW::c);
		  retVal = true;
		}
	      break;
	    case 'g':			// goto
	      if(isKeyWord(textBuffer, g::gotoKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, g::gotoKW::kW, point, g::gotoKW::c);
		  retVal = true;
		}
	      break;
	    case 'i':			// if, inline, int
	      if(isKeyWord(textBuffer, i::ifKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, i::ifKW::kW, point, i::ifKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, i::inlineKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, i::inlineKW::kW, point, i::inlineKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, i::intKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, i::intKW::kW, point, i::intKW::c);
		  retVal = true;
		}
	      break;
	    case 'l':			// long
	      if(isKeyWord(textBuffer, l::longKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, l::longKW::kW, point, l::longKW::c);
		  retVal = true;
		}
	      break;
	    case 'n':			// namespace, new, nullptr
	      if(isKeyWord(textBuffer, n::namespaceKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, n::namespaceKW::kW, point, n::namespaceKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, n::newKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, n::newKW::kW, point, n::newKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, n::nullptrKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, n::nullptrKW::kW, point, n::nullptrKW::c);
		  retVal = true;
		}
	      break;
	    case 'p':			// private, protected, public
	      if(isKeyWord(textBuffer, p::privateKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, p::privateKW::kW, point, p::privateKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, p::protectedKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, p::protectedKW::kW, point, p::protectedKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, p::publicKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, p::publicKW::kW, point, p::publicKW::c);
		  retVal = true;
		}
	      break;
	    case 'r':			// return
	      if(isKeyWord(textBuffer, r::returnKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, r::returnKW::kW, point, r::returnKW::c);
		  retVal = true;
		}
	      break;
	    case 's':			// short, signed, sizeof, static,
					// struct, switch
	      if(isKeyWord(textBuffer, s::shortKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, s::shortKW::kW, point, s::shortKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, s::signedKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, s::signedKW::kW, point, s::signedKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, s::sizeofKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, s::sizeofKW::kW, point, s::sizeofKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, s::staticKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, s::staticKW::kW, point, s::staticKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, s::structKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, s::structKW::kW, point, s::structKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, s::switchKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, s::switchKW::kW, point, s::switchKW::c);
		  retVal = true;
		}
	      break;
	    case 't':			// template, this, throw true, try,
					// typedef, typename
	      if(isKeyWord(textBuffer, t::templateKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, t::templateKW::kW, point, t::templateKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, t::thisKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, t::thisKW::kW, point, t::thisKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, t::throwKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, t::throwKW::kW, point, t::throwKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, t::trueKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, t::trueKW::kW, point, t::trueKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, t::tryKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, t::tryKW::kW, point, t::tryKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, t::typedefKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, t::typedefKW::kW, point, t::typedefKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, t::typenameKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, t::typenameKW::kW, point, t::typenameKW::c);
		  retVal = true;
		}
	      break;
	    case 'u':			// unsigned, using
	      if(isKeyWord(textBuffer, u::unsignedKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, u::unsignedKW::kW, point, u::unsignedKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, u::usingKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, u::usingKW::kW, point, u::usingKW::c);
		  retVal = true;
		}
	      break;
	    case 'v':			// virtual, void
	      if(isKeyWord(textBuffer, v::virtualKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, v::virtualKW::kW, point, v::virtualKW::c);
		  retVal = true;
		}
	      else if(isKeyWord(textBuffer, v::voidKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, v::voidKW::kW, point, v::voidKW::c);
		  retVal = true;
		}
	      break;
	    case 'w':			// while
	      if(isKeyWord(textBuffer, w::whileKW::kW, point +1))
		{
		  printColouredKeyWord(textBuffer, w::whileKW::kW, point, w::whileKW::c);
		  retVal = true;
		}
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
  std::cout<<keyWordColours::colours::defaultColour;		// Disable's colour.

  point += keyWord.size();
}


void printPlain(const std::vector<char> & textBuffer, unsigned long & point)
{
  std::cout<<keyWordColours::colours::planeTextColour;
  std::cout<<textBuffer[point];
  setvbuf(stdout, NULL, _IONBF, 0);
  std::cout<<keyWordColours::colours::defaultColour;
  ++point;	// It wasn't inc'ed in printKeyWord.
}
