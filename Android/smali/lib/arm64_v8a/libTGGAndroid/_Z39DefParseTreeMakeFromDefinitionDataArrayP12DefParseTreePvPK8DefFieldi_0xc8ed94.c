// 函数: _Z39DefParseTreeMakeFromDefinitionDataArrayP12DefParseTreePvPK8DefFieldi
// 地址: 0xc8ed94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x23 = arg2
int64_t result = DefinitionGetSize(*(arg3 + 0x30))

if (arg4 s>= 1)
    int32_t x22_1 = 0
    int64_t x27_1 = sx.q(result.d + 4)
    
    do
        char var_70
        XString::XString(&var_70)
        DefParseTree* x0_4 = DefParseTreeAppendItemVariableArray(arg1, &var_70)
        XString::~XString()
        void* x28_1 = x23 + x27_1
        *(x28_1 - 4)
        char* x0_5 = DefParseItemAlloc()
        XString::operator=(x0_5)
        char** x0_6 = XPooledCalloc(0x18)
        *x0_6 = x0_5
        x0_6[1] = 0
        x0_6[2] = *(x0_4 + 0x10)
        void* x8_4 = *(x0_4 + 0x10)
        char*** x8_5
        
        if (x8_4 == 0)
            x8_5 = x0_4 + 8
        else
            x8_5 = x8_4 + 8
        
        *x8_5 = x0_6
        int32_t x8_6 = *(x0_4 + 0x18)
        *(x0_4 + 0x10) = x0_6
        *(x0_4 + 0x18) = x8_6 + 1
        XString::Format(&x0_5[8])
        char* x0_8 = DefParseItemAlloc()
        XString::operator=(x0_8)
        char** x0_9 = XPooledCalloc(0x18)
        *x0_9 = x0_8
        x0_9[1] = 0
        x0_9[2] = *(x0_4 + 0x10)
        void* x8_9 = *(x0_4 + 0x10)
        void* __offset(DefParseTree, 0x8) x8_10
        
        if (x8_9 == 0)
            x8_10 = x0_4 + 8
        else
            x8_10 = x8_9 + 8
        
        *x8_10 = x0_9
        int32_t x8_11 = *(x0_4 + 0x18)
        *(x0_4 + 0x10) = x0_9
        *(x0_4 + 0x18) = x8_11 + 1
        XString::Format(&x0_8[8])
        
        if ((DefTypeCanBeInArray(*(arg3 + 0x30)) & 1) != 0)
            result = DefParseTreeMakeFromDefinitionArrayableField(arg1, x23, *(arg3 + 0x30), 
                "value", 0, 0)
        else
            char var_78
            XString::XString(&var_78)
            DefParseTree* x0_15 = DefParseTreeAppendItemVariableArray(x0_4, &var_78)
            XString::~XString()
            
            if (*(x0_4 + 0x18) s>= 1)
                int32_t x9_3 = *(arg3 + 0x50)
                void* x8_15 = **(x0_4 + 0x10)
                *(x8_15 + 0x28) = (x9_3 u>> 9).b & 1
                *(x8_15 + 0x29) = (x9_3 u>> 0xa).b & 1
            
            DefMap* fp_2 = *(arg3 + 0x30)
            *fp_2
            XString::operator=(x0_15)
            result = DefIterGetFirst(fp_2)
            int32_t i = result.d
            
            if (result.d != 0xffffffff)
                do
                    DefField* x0_19 = DefIterGetNext(fp_2, &i)
                    result = DefParseTreeMakeFromDefinitionSubField(x0_15, x23, *(x0_19 + 0x18), 
                        x0_19, nullptr)
                while (i != 0xffffffff)
        
        x22_1 += 1
        x23 = x28_1
    while (x22_1 != arg4)

return result
