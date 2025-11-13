// 函数: _Z16DefDeepCopyFieldPvPK8DefFieldP11AttribTablePKv
// 地址: 0xc887b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x22 = *(arg2 + 0x18)
AttribTable* x21 = arg3
int32_t x8 = *(x22 + 0x18)
uint64_t x9 = zx.q(x8 - 1)

if (x9.d u<= 0x10)
    if (x9.d u> 0x10)
    label_c889f8:
        pthread_kill(pthread_self(), 6)
        void* x0_16
        void* x1_10
        DefMap* x2_10
        x0_16, x1_10, x2_10 = XNoReturn()
        return DefinitionDeepCopyReplaceBlock(x0_16, x1_10, x2_10) __tailcall
    
    switch (x9)
        case 4
            uint64_t x25_2 = zx.q(*arg2)
            int64_t x22_2 = sx.q(*(arg4 + zx.q(*(arg2 + 0x20))))
            
            if (x22_2.d == 0)
                *(arg1 + x25_2) = 0
            else
                void* x23_3 = *(arg4 + x25_2)
                
                if (x23_3 u> 0x100000 || (*(arg2 + 0x50) & 0x100) == 0)
                    size_t x24_2 = sx.q(*(*(arg2 + 0x30) + 0x14)) * x22_2
                    int64_t x0_8 = XMalloc(x24_2.d)
                    *(arg1 + x25_2) = x0_8
                    memcpy(x0_8, x23_3, x24_2)
                    return DefDeepCopyArray(*(arg1 + x25_2), x22_2.d, arg2, x21, x23_3) __tailcall
        case 5
            uint64_t x8_8 = zx.q(*arg2)
            return DefDeepCopyArray(arg1 + x8_8, *(arg2 + 0x38), arg2, nullptr, arg4 + x8_8)
                __tailcall
        case 6, 0xc, 0x10
            goto label_c889f8
        case 7, 0xb
            uint64_t x22_1 = zx.q(*arg2)
            char* x20_1 = *(arg4 + x22_1)
            int32_t x21_1 = strlen(x20_1) + 1
            int64_t x0_3 = XMalloc(x21_1)
            *(arg1 + x22_1) = x0_3
            return memcpy(x0_3, x20_1, sx.q(x21_1)) __tailcall
        case 8
            return DefDeepCopyTagValue(arg1, arg2, x21, arg4) __tailcall
        case 0xa
            uint64_t x24_3 = zx.q(*arg2)
            void* x21_2 = *(arg4 + x24_3)
            
            if (x21_2 == 0)
                *(arg1 + x24_3) = 0
            else if (x21_2 u> 0x100000 || (*(arg2 + 0x50) & 0x100) == 0)
                int32_t x23_4 = *(*(arg2 + 0x30) + 0x14)
                int64_t x0_13 = XMalloc(x23_4)
                *(arg1 + x24_3) = x0_13
                memcpy(x0_13, x21_2, sx.q(x23_4))
                return DefDeepCopyArray(*(arg1 + x24_3), x21_2 != 0 ? 1 : 0, arg2, nullptr, x21_2)
                    __tailcall
    
    return 

if (x21 != 0)
    goto label_c88850

int32_t x23_1

if (x8 != 0x14 && x8 != 0x13)
    x21 = nullptr
    x23_1 = *(x22 + 0x10)
    
    if (x23_1 != 0)
        goto label_c88858
    
    return 

x21 = *(arg2 + 0x38)
label_c88850:
x23_1 = *(x22 + 0x10)

if (x23_1 == 0)
    return 

label_c88858:
uint64_t x8_2 = zx.q(*arg2)
void* x19_1 = arg1 + x8_2
void* x20_2 = arg4 + x8_2
DefDeepCopyField(x19_1, *(x22 + 8), x21, x20_2)

if (x23_1 s< 2)
    return 

int32_t x23_2 = 1
int64_t x24_1 = 0x68
int32_t x25_1

do
    x25_1 = *(x22 + 0x10)
    x23_2 += 1
    DefDeepCopyField(x19_1, *(x22 + 8) + x24_1, x21, x20_2)
    x24_1 += 0x68
while (x23_2 s< x25_1)
