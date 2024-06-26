#include "Kind.h"

#include <map>
#include <string>

static map<string, Kind> stringToKind = {
    {"#unknown", Kind::Unknown},
    {"#EndOfList", Kind::EndOfList},

    {"null", Kind::NullLiteral},
    {"true", Kind::TrueLiteral},
    {"false", Kind::FalseLiteral},
    {"#Number", Kind::NumberLiteral},
    {"#String", Kind::StringLiteral},
    {"#identifier", Kind::Identifier},

    {"function", Kind::Function},
    {"return", Kind::Return},
    {"var", Kind::Variable},
    {"for", Kind::For},
    {"break", Kind::Break},
    {"continue", Kind::Continue},
    {"if", Kind::If},
    {"elif", Kind::Elif},
    {"else", Kind::Else},
    {"print", Kind::Print},
    {"printLine", Kind::PrintLine},

    {"and", Kind::LogicalAnd},
    {"or", Kind::LogicalOr},

    {"=", Kind::Assignment},

    {"+", Kind::Add},
    {"-", Kind::Subtract},
    {"*", Kind::Multiply},
    {"/", Kind::Divide},
    {"%", Kind::Modulo},

    {"==", Kind::Equal},
    {"!=", Kind::NotEqual},
    {"<", Kind::LessThan},
    {">", Kind::GreaterThan},
    {"<=", Kind::LessOrEqual},
    {">=", Kind::GreaterOrEqual},

    {",", Kind::Comma},
    {":", Kind::Colon},
    {";", Kind::Semicolon},
    {"(", Kind::LeftParen},
    {")", Kind::RightParen},
    {"{", Kind::LeftBrace},
    {"}", Kind::RightBrace},
    {"[", Kind::LeftBraket},
    {"]", Kind::RightBraket},
};

Kind toKind(string str) {
    if (stringToKind.count(str))
        return stringToKind.at(str);
    return Kind::Unknown;
}