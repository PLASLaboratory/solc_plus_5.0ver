/*
	This file is part of solidity.

	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/
/**
 * @author Christian <c@ethdev.com>
 * @date 2014
 * Forward-declarations of AST classes.
*
 * -Modified for NonFallBack 
 * -by Eun-Sun Cho <eschough@cnu.ac.kr>
 * -date 2018.8.30 NonFallback
 * -date 2019.3.19 StartFallback, EndFallback
 * -date 2019.3.20 for Change NonFallback ->  NonFallbackOn, Add  NonFallbackOff
 */

#pragma once

#include <memory>
#include <string>
#include <vector>

// Forward-declare all AST node types

namespace dev
{
namespace solidity
{

class ASTNode;
class SourceUnit;
class PragmaDirective;
class ImportDirective;
class Declaration;
class CallableDeclaration;
class ContractDefinition;
class InheritanceSpecifier;
class UsingForDirective;
class StructDefinition;
class EnumDefinition;
class EnumValue;
class ParameterList;
class FunctionDefinition;
class VariableDeclaration;
class ModifierDefinition;
class ModifierInvocation;
class EventDefinition;
class MagicVariableDeclaration;
class TypeName;
class ElementaryTypeName;
class UserDefinedTypeName;
class FunctionTypeName;
class Mapping;
class ArrayTypeName;
class InlineAssembly;
class Statement;
class Block;
class PlaceholderStatement;
class IfStatement;
class BreakableStatement;
class WhileStatement;
class ForStatement;
class Continue;
class Break;
class Return;
class Throw;
class NonFallBackOn;   /* Eun-Sun Cho 2018.8. 30, 2019.3.20 */
class NonFallBackOff;   /* Eun-Sun Cho 2019.3. 20 */
class StartFallBack; /* Eun-Sun Cho 2019.3. 19 */
class EndFallBack;   /* Eun-Sun Cho 2019.3. 19 */
class EmitStatement;
class VariableDeclarationStatement;
class ExpressionStatement;
class Expression;
class Conditional;
class Assignment;
class TupleExpression;
class UnaryOperation;
class BinaryOperation;
class FunctionCall;
class NewExpression;
class MemberAccess;
class IndexAccess;
class PrimaryExpression;
class Identifier;
class ElementaryTypeNameExpression;
class Literal;

class VariableScope;

// Used as pointers to AST nodes, to be replaced by more clever pointers, e.g. pointers which do
// not do reference counting but point to a special memory area that is completely released
// explicitly.
template <class T>
using ASTPointer = std::shared_ptr<T>;

using ASTString = std::string;

}
}
