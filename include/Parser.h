/*
 * Filename.h
 *
 * /Project/Headers/include/Filename.h
 *
 *       Author: Mihir Kasmalkar
 * Date created: Aug 29, 2015
 *
 *      Purpose:
 *
 *        Usage:
 *
 *        Notes:
 *
 */

#ifndef PARSER_H
#define PARSER_H

#include <string>

#include "SyntaxTree.h"
#include "Lexer.h"
#include "Terminal.h"
#include "TokenManager.h"
#include "../NodeType.h"

using namespace ast;
using namespace lexer;

namespace parser
{
    extern bool exit;

    class Parser
    {
        public:
            Parser(Lexer lexr);
            ~Parser();

            SyntaxTree createSyntaxTree();

            void addTerminal(Terminal& terminal);

            // Return whether or not the terminal was found
            bool assembleTerminal(Terminal terminal, SyntaxTree& syntaxTree, TokenManager& tm);

            astAction noFind;

        private:
            Lexer lexr;

            std::vector<Terminal*> terminals;
    };

} /* namespace parser */

#endif // PARSER_H
