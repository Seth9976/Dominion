// 函数: _Z35DefParseTreeMakeFromDefinitionArrayP12DefParseTreePvPK8DefFieldiP11AttribTable
// 地址: 0xc8ec3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = arg2
int64_t result = DefinitionGetSize(*(arg3 + 0x30))

if (arg4 s>= 1)
    int32_t x26_1 = 0
    int64_t x27_1 = sx.q(result.d)
    
    do
        if ((DefTypeCanBeInArray(*(arg3 + 0x30)) & 1) != 0)
            result = DefParseTreeMakeFromDefinitionArrayableField(arg1, x22, *(arg3 + 0x30), 
                *(arg3 + 8), 0, 0)
        else
            *(arg3 + 8)
            char var_60
            XString::XString(&var_60)
            DefParseTree* x0_6 = DefParseTreeAppendItemVariableArray(arg1, &var_60)
            XString::~XString()
            
            if (*(arg1 + 0x18) s>= 1)
                int32_t x9_1 = *(arg3 + 0x50)
                void* x8_3 = **(arg1 + 0x10)
                *(x8_3 + 0x28) = (x9_1 u>> 9).b & 1
                *(x8_3 + 0x29) = (x9_1 u>> 0xa).b & 1
            
            DefMap* x25_1 = *(arg3 + 0x30)
            *x25_1
            XString::operator=(x0_6)
            result = DefIterGetFirst(x25_1)
            int32_t i = result.d
            
            if (result.d != 0xffffffff)
                do
                    DefField* x0_10 = DefIterGetNext(x25_1, &i)
                    result = DefParseTreeMakeFromDefinitionSubField(x0_6, x22, *(x0_10 + 0x18), 
                        x0_10, arg5)
                while (i != 0xffffffff)
        
        x26_1 += 1
        x22 += x27_1
    while (x26_1 != arg4)

return result
