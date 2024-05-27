enum class Kind {
    Unknown,
    EndOfList,

    NullLiteral,
    TrueLiteral,
    FalseLiteral,
    NumberLiteral,
    StringLiteral,
    Identifier,

    Function,
    Return,
    Variable,
    For,
    Break,
    Continue,
    If,
    Elif,
    Else,
    Print,
    PrintLine,

    LogicalAnd,
    LogicalOr,
    Assignment,
    Add,
    Subtract,
    Multiply,
    Divide,
    Modulo,
    Equal,
    NotEqual,
    LessThan,
    GreaterThan,
    LessOrEqual,
    GreaterOrEqual,

    Comma,
    Colon,
    Semicolon,
    LeftParen,
    RightParen,
    LeftBrace,
    RightBrace,
    LeftBraket,
    RightBraket,
};

using namespace std;

Kind toKind(string);