// 函数: _Z16DefDeepCopyArrayPviPK8DefFieldP11AttribTablePKv
// 地址: 0xc885ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x24 = *(arg3 + 0x30)
void const* x19 = arg5
int32_t x8 = *(x24 + 0x18)
void* x23 = arg1

if (x8 - 1 u<= 0x10)
    if (x8 u<= 0x11)
        int32_t x9_1 = 1 << x8
        
        if ((x9_1 & 0x1c41e) != 0)
            return 
        
        if ((x9_1 & 0x21b60) != 0)
            goto label_c8861c
    
    pthread_kill(pthread_self(), 6)
    void* x0_7
    DefField* x1_3
    AttribTable* x2_3
    int32_t x3_2
    void* x4
    x0_7, x1_3, x2_3, x3_2, x4 = XNoReturn()
    return DefDeepCopyVariableArray(x0_7, x1_3, x2_3, x3_2, x4) __tailcall

label_c8861c:

if (arg2 s< 1)
    return 

int64_t x26_1 = sx.q(*(x24 + 0x14))
int32_t x27_1 = 0

if (x8 == 8)
    do
        char* x24_1 = *x19
        int32_t x25_1 = strlen(x24_1) + 1
        int64_t x0_3 = XMalloc(x25_1)
        *x23 = x0_3
        memcpy(x0_3, x24_1, sx.q(x25_1))
    label_c886b8:
        x27_1 += 1
        
        if (x27_1 == arg2)
            return 
        
        x24 = *(arg3 + 0x30)
        x19 += x26_1
        x23 += x26_1
    while (*(x24 + 0x18) == 8)

int32_t x25_2 = *(x24 + 0x10)

if (x25_2 == 0)
    goto label_c886b8

DefDeepCopyField(x23, *(x24 + 8), arg4, x19)

if (x25_2 s< 2)
    goto label_c886b8

int32_t x25_3 = 1
int64_t x28_1 = 0x68
int32_t fp_1

do
    fp_1 = *(x24 + 0x10)
    x25_3 += 1
    DefDeepCopyField(x23, *(x24 + 8) + x28_1, arg4, x19)
    x28_1 += 0x68
while (x25_3 s< fp_1)
goto label_c886b8
