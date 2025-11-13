// 函数: _Z29DefinitionDeleteVariableArrayPvPK8DefFieldP11AttribTablei
// 地址: 0xc87ea0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg4 == 0)
    return 

uint64_t x25_1 = zx.q(*arg2)
int32_t i_1 = arg4
void* x23_1 = *(arg1 + x25_1)

if (x23_1 u<= 0x100000 && (*(arg2 + 0x50) & 0x100) != 0)
    return 

void* x8_2 = *(arg2 + 0x30)
int32_t x9_1 = *(x8_2 + 0x18)

if (x9_1 - 1 u> 0x10)
label_c87f24:
    
    if (i_1 s>= 1)
        int64_t x26_1 = sx.q(*(x8_2 + 0x14))
        void* x24_1 = x23_1
        int32_t i
        
        do
            DefinitionDeleteVariableArrayField(x24_1, arg2, arg3)
            i = i_1
            i_1 -= 1
            x24_1 += x26_1
        while (i != 1)
else
    if (x9_1 u> 0x11)
    label_c87f7c:
        pthread_kill(pthread_self(), 6)
        void* x0_3
        DefField* x1_1
        x0_3, x1_1 = XNoReturn()
        return DefSubDefPtrGetCount(x0_3, x1_1) __tailcall
    
    int32_t x9_2 = 1 << x9_1
    
    if ((x9_2 & 0x1c41e) == 0)
        if ((x9_2 & 0x21b60) == 0)
            goto label_c87f7c
        
        goto label_c87f24

XFree(x23_1)
*(arg1 + x25_1) = 0
