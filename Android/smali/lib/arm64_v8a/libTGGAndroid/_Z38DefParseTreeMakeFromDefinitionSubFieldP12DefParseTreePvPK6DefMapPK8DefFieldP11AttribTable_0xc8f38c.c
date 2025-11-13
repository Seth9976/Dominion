// 函数: _Z38DefParseTreeMakeFromDefinitionSubFieldP12DefParseTreePvPK6DefMapPK8DefFieldP11AttribTable
// 地址: 0xc8f38c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(*(arg4 + 0x50)) & 8) != 0)
    return 

DefParseTree* x22_1 = arg1
void* x0_1 = DefinitionGetFieldData(arg2, arg4)

if (arg5 == 0 && (DefinitonSubfieldIsDefault(arg2, arg4).d & 1) != 0)
    return 

if ((DefTypeCanBeInArray(arg3).d & 1) != 0)
    return DefParseTreeMakeFromDefinitionArrayableField(x22_1, x0_1, arg3, *(arg4 + 8), 
        *(arg4 + 0x50), *(arg4 + 0x38)) __tailcall

uint64_t x8_3 = zx.q(*(arg3 + 0x18) - 5)
int32_t i

if (x8_3.d u<= 0xf)
    switch (x8_3)
        case 0
            int32_t x3_2 = *DefinitionGetFieldDataAux(arg2, arg4)
            return DefParseTreeMakeFromDefinitionArray(x22_1, *x0_1, arg4, x3_2, arg5) __tailcall
        case 1
            return DefParseTreeMakeFromDefinitionArray(x22_1, DefinitionGetFieldData(arg2, arg4), 
                arg4, *(arg4 + 0x38), arg5) __tailcall
        case 2, 3, 4, 5, 8, 9, 0xa, 0xb, 0xd
            goto label_c8f478
        case 6
            if (DefSubDefPtrGetCount(arg2, arg4).d == 1)
                *(arg4 + 8)
                XString::operator=(x22_1)
                arg1 = DefIterGetFirst(arg3)
                i = arg1.d
                
                if (arg1.d != 0xffffffff)
                    do
                        DefField* x0_27 = DefIterGetNext(arg3, &i)
                        DefParseTreeMakeFromDefinitionSubField(x22_1, x0_1, *(x0_27 + 0x18), x0_27, 
                            arg5)
                    while (i != 0xffffffff)
        case 7
            *(arg4 + 8)
            char* x0_29 = DefParseItemAlloc()
            XString::operator=(x0_29)
            char** x0_30 = XPooledCalloc(0x18)
            *x0_30 = x0_29
            x0_30[1] = 0
            x0_30[2] = *(x22_1 + 0x10)
            void* x8_20 = *(x22_1 + 0x10)
            char*** x8_21
            
            if (x8_20 == 0)
                x8_21 = x22_1 + 8
            else
                x8_21 = x8_20 + 8
            
            *x8_21 = x0_30
            int32_t x8_22 = *(x22_1 + 0x18)
            *(x22_1 + 0x10) = x0_30
            *(x22_1 + 0x18) = x8_22 + 1
            XString::operator=(&x0_29[8])
        case 0xc
            int64_t* x0_33 = DefinitionGetFieldData(arg2, arg4)
            DefParseTree* x21_3 = *(DefParseTreeSetItemSubTree(x22_1, *(arg4 + 8)) + 0x18)
            XStringFromInt(x0_33[2].d)
            XString::operator char const*()
            char* x0_38 = DefParseItemAlloc()
            XString::operator=(x0_38)
            char** x0_39 = XPooledCalloc(0x18)
            *x0_39 = x0_38
            x0_39[1] = 0
            x0_39[2] = *(x21_3 + 0x10)
            void* x8_25 = *(x21_3 + 0x10)
            void* x8_26
            
            if (x8_25 == 0)
                x8_26 = x21_3 + 8
            else
                x8_26 = x8_25 + 8
            
            *x8_26 = x0_39
            int32_t x8_27 = *(x21_3 + 0x18)
            *(x21_3 + 0x10) = x0_39
            *(x21_3 + 0x18) = x8_27 + 1
            XString::operator=(&x0_38[8])
            XString::~XString()
            XStringFromInt(*(x0_33 + 0x14))
            XString::operator char const*()
            char* x0_43 = DefParseItemAlloc()
            XString::operator=(x0_43)
            char** x0_44 = XPooledCalloc(0x18)
            *x0_44 = x0_43
            x0_44[1] = 0
            x0_44[2] = *(x21_3 + 0x10)
            void* x8_30 = *(x21_3 + 0x10)
            char*** x8_31
            
            if (x8_30 == 0)
                x8_31 = x21_3 + 8
            else
                x8_31 = x8_30 + 8
            
            *x8_31 = x0_44
            int32_t x8_32 = *(x21_3 + 0x18)
            *(x21_3 + 0x10) = x0_44
            *(x21_3 + 0x18) = x8_32 + 1
            XString::operator=(&x0_43[8])
            XString::~XString()
            XStringFromInt(x0_33[3].d)
            XString::operator char const*()
            char* x0_48 = DefParseItemAlloc()
            XString::operator=(x0_48)
            char** x0_49 = XPooledCalloc(0x18)
            *x0_49 = x0_48
            x0_49[1] = 0
            x0_49[2] = *(x21_3 + 0x10)
            void* x8_35 = *(x21_3 + 0x10)
            char*** x8_36
            
            if (x8_35 == 0)
                x8_36 = x21_3 + 8
            else
                x8_36 = x8_35 + 8
            
            *x8_36 = x0_49
            int32_t x8_37 = *(x21_3 + 0x18)
            *(x21_3 + 0x10) = x0_49
            *(x21_3 + 0x18) = x8_37 + 1
            XString::operator=(&x0_48[8])
            XString::~XString()
            DefParseTreeMakeFromDefinitionDataArray(x21_3, *x0_33, arg4, x0_33[1].d)
        case 0xe
            AttribTable* x8_39 = *(arg4 + 0x38)
            AttribTable* x21_4
            
            x21_4 = x8_39 == 0 ? arg5 : x8_39
            
            if ((*(arg4 + 0x50) & 0x40) == 0)
                *(arg4 + 8)
                XString::XString(&i)
                x22_1 = DefParseTreeAppendItemVariableArray(x22_1, &i)
                XString::~XString()
            
            if (*x0_1 s>= 1)
                int64_t x19_3 = 0
                int64_t i_1 = 0
                
                do
                    DefParseTreeMakeFromDefinitionTagValue(x22_1, x21_4, *(x0_1 + 8) + x19_3)
                    i_1 += 1
                    x19_3 += 0x10
                while (i_1 s< sx.q(*x0_1))
        case 0xf
            AttribTable* x8_43 = *(arg4 + 0x38)
            AttribTable* x1_30
            
            x1_30 = x8_43 == 0 ? arg5 : x8_43
            
            return DefParseTreeMakeFromDefinitionAttribTree(x22_1, x1_30, x0_1, *(arg4 + 8), 
                *(arg4 + 0x50)) __tailcall
    
    return 

label_c8f478:
DefTypeIsBuiltIn(arg3)
*(arg4 + 8)
char* x0_9 = DefParseItemAlloc()
XString::operator=(x0_9)
void** x0_10 = XPooledCalloc(0x18)
*x0_10 = x0_9
x0_10[1] = 0
x0_10[2] = *(x22_1 + 0x10)
void* x8_5 = *(x22_1 + 0x10)
void*** x8_6

if (x8_5 == 0)
    x8_6 = x22_1 + 8
else
    x8_6 = x8_5 + 8

*x8_6 = x0_10
int32_t x8_7 = *(x22_1 + 0x18)
*(x22_1 + 0x10) = x0_10
*(x22_1 + 0x18) = x8_7 + 1
*(x0_9 + 0x20) = arg4
void* x25_2 = *gpDefParseTreeAppData
DefParseTree* x22_2 = *(x25_2 + 0x18)
*(x25_2 + 0x2c) += 1

if (x22_2 == 0)
    int64_t* x0_12 = XMalloc(8 + *(x25_2 + 0x28) * 0x28)
    *x0_12 = *(x25_2 + 0x20)
    int32_t x8_13 = *(x25_2 + 0x28)
    x22_2 = *(x25_2 + 0x18)
    *(x25_2 + 0x20) = x0_12
    
    if (x8_13 s>= 1)
        int64_t i_2 = 0
        DefParseTree** x8_14 = &x0_12[1]
        
        do
            DefParseTree** x10_4 = x8_14
            *x8_14 = x22_2
            x8_14 = &x8_14[5]
            i_2 += 1
            x22_2 = x10_4
        while (i_2 s< sx.q(*(x25_2 + 0x28)))
        
        x22_2 = x8_14 - 0x28
    
    *(x25_2 + 0x18) = x22_2

*(x25_2 + 0x18) = *x22_2
__builtin_memset(x22_2, 0, 0x28)
XString::XString()
__builtin_memset(x22_2 + 8, 0, 0x14)
*(x0_9 + 0x18) = x22_2
*(arg4 + 8)
XString::operator=(x22_2)
arg1 = DefIterGetFirst(arg3)
i = arg1.d

if (arg1.d == 0xffffffff)
    return 

do
    DefField* x0_17 = DefIterGetNext(arg3, &i)
    DefParseTreeMakeFromDefinitionSubField(x22_2, x0_1, *(x0_17 + 0x18), x0_17, arg5)
while (i != 0xffffffff)
