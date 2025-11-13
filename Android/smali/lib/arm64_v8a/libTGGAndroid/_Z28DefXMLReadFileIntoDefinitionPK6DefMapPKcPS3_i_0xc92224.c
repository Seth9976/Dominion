// 函数: _Z28DefXMLReadFileIntoDefinitionPK6DefMapPKcPS3_i
// 地址: 0xc92224
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char var_28
XString::XString(&var_28)
HalFilePathCreate(&var_28, 3)
XString::~XString()
void var_40
DefParseTree* x0_3 = DefXMLReadFileIntoParseTree(arg1, &var_40)
int64_t* result

if (x0_3 == 0)
    result = nullptr
else
    RemoveElidedLabels(x0_3, arg3, arg4)
    int64_t* result_1 = XCalloc(0x20)
    result = result_1
    result_1[3] = arg1
    result_1[1] = x0_3
    *result = DefParseTreeMakeDefinition(x0_3, arg1)
    
    if (arg4 != 0)
        result[2].d |= 0x800

XString::~XString()
return result
