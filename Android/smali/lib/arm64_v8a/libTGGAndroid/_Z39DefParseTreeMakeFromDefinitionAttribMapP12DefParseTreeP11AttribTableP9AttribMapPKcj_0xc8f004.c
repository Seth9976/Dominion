// 函数: _Z39DefParseTreeMakeFromDefinitionAttribMapP12DefParseTreeP11AttribTableP9AttribMapPKcj
// 地址: 0xc8f004
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseTree* x21 = arg1

if ((arg5 & 0x40) == 0)
    char var_38
    XString::XString(&var_38)
    x21 = DefParseTreeAppendItemVariableArray(x21, &var_38)
    XString::~XString()

if (*arg3 s< 1)
    return 

int64_t x22_1 = 0
int64_t i = 0

do
    DefParseTreeMakeFromDefinitionTagValue(x21, arg2, *(arg3 + 8) + x22_1)
    i += 1
    x22_1 += 0x10
while (i s< sx.q(*arg3))
