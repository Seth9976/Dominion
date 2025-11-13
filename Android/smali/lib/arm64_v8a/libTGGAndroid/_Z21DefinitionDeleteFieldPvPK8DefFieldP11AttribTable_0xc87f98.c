// 函数: _Z21DefinitionDeleteFieldPvPK8DefFieldP11AttribTable
// 地址: 0xc87f98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg2 + 0x18)
AttribTable* x19 = arg3
void* x20 = arg1
int32_t x8 = *(x22 + 0x18)
uint64_t x9 = zx.q(x8 - 1)

if (x9.d u<= 0x10)
    if (x9.d u> 0x10)
    label_c88280:
        pthread_kill(pthread_self(), 6)
        void* x0_10
        DefMap* x1_7
        x0_10, x1_7 = XNoReturn()
        return DefinitionDeleteBlock(x0_10, x1_7) __tailcall
    
    switch (x9)
        case 4
            uint64_t x24_2 = zx.q(*(arg2 + 0x20))
            int32_t i_3 = *(x20 + x24_2)
            
            if (i_3 == 0)
                *(x20 + x24_2) = 0
            else
                uint64_t x25_1 = zx.q(*arg2)
                void* x22_1 = *(x20 + x25_1)
                
                if (x22_1 u> 0x100000 || (*(arg2 + 0x50) & 0x100) == 0)
                    void* x8_5 = *(arg2 + 0x30)
                    int32_t x9_1 = *(x8_5 + 0x18)
                    
                    if (x9_1 - 1 u> 0x10)
                    label_c88108:
                        
                        if (i_3 s>= 1)
                            int64_t x27_1 = sx.q(*(x8_5 + 0x14))
                            void* x23_3 = x22_1
                            int32_t i
                            
                            do
                                DefinitionDeleteVariableArrayField(x23_3, arg2, x19)
                                i = i_3
                                i_3 -= 1
                                x23_3 += x27_1
                            while (i != 1)
                    else
                        if (x9_1 u> 0x11)
                            goto label_c88280
                        
                        int32_t x9_2 = 1 << x9_1
                        
                        if ((x9_2 & 0x1c41e) == 0)
                            if ((x9_2 & 0x21b60) == 0)
                                goto label_c88280
                            
                            goto label_c88108
                    
                    XFree(x22_1)
                    *(x20 + x25_1) = 0
                    *(x20 + x24_2) = 0
                else
                    *(x20 + x24_2) = 0
        case 5
            void* x8_6 = *(arg2 + 0x30)
            int32_t i_2 = *(arg2 + 0x38)
            int32_t x10_3 = *(x8_6 + 0x18)
            
            if (x10_3 - 1 u> 0x10)
            label_c88194:
                
                if (i_2 s>= 1)
                    int64_t x23_4 = sx.q(*(x8_6 + 0x14))
                    void* x20_2 = x20 + zx.q(*arg2)
                    int32_t i_1
                    
                    do
                        DefinitionDeleteVariableArrayField(x20_2, arg2, x19)
                        i_1 = i_2
                        i_2 -= 1
                        x20_2 += x23_4
                    while (i_1 != 1)
            else
                if (x10_3 u> 0x11)
                    goto label_c88280
                
                int32_t x10_4 = 1 << x10_3
                
                if ((x10_4 & 0x1c41e) == 0)
                    if ((x10_4 & 0x21b60) == 0)
                        goto label_c88280
                    
                    goto label_c88194
        case 6, 0xc, 0x10
            goto label_c88280
        case 7, 0xb
            uint64_t x19_1 = zx.q(*arg2)
            arg1 = *(x20 + x19_1)
            
            if (arg1 != *(arg2 + 0x48))
                XFree(arg1)
                *(x20 + x19_1) = 0
        case 8
            uint32_t x1_4 = *(x20 + zx.q(*(arg2 + 0x20)))
            
            if (x1_4 != 0xffffffff)
                return AttribMapDeleteTagInternal(x19, x1_4, x20 + zx.q(*arg2)) __tailcall
        case 0xa
            uint64_t x23_5 = zx.q(*arg2)
            void* x22_2 = *(x20 + x23_5)
            
            if (x22_2 != 0 && (x22_2 u> 0x100000 || (*(arg2 + 0x50) & 0x100) == 0))
                int32_t x8_12 = *(*(arg2 + 0x30) + 0x18)
                
                if (x8_12 - 1 u> 0x10)
                label_c88264:
                    DefinitionDeleteVariableArrayField(x22_2, arg2, x19)
                    XFree(x22_2)
                    *(x20 + x23_5) = 0
                else
                    if (x8_12 u> 0x11)
                        goto label_c88280
                    
                    int32_t x8_13 = 1 << x8_12
                    
                    if ((x8_13 & 0x1c41e) == 0)
                        if ((x8_13 & 0x21b60) == 0)
                            goto label_c88280
                        
                        goto label_c88264
                    
                    XFree(x22_2)
                    *(x20 + x23_5) = 0
    
    return 

if (x19 != 0)
    goto label_c88020

int32_t x23_1

if (x8 != 0x14 && x8 != 0x13)
    x19 = nullptr
    x23_1 = *(x22 + 0x10)
    
    if (x23_1 != 0)
        goto label_c88034
    
    return 

x19 = *(arg2 + 0x38)
label_c88020:
x23_1 = *(x22 + 0x10)

if (x23_1 == 0)
    return 

label_c88034:
void* x20_1 = x20 + zx.q(*arg2)
DefinitionDeleteField(x20_1, *(x22 + 8), x19)

if (x23_1 s< 2)
    return 

int32_t x21_1 = 1
int64_t x23_2 = 0x68
int32_t x24_1

do
    x24_1 = *(x22 + 0x10)
    x21_1 += 1
    DefinitionDeleteField(x20_1, *(x22 + 8) + x23_2, x19)
    x23_2 += 0x68
while (x21_1 s< x24_1)
