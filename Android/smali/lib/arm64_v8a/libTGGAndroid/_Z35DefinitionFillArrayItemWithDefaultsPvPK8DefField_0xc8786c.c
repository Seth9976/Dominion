// 函数: _Z35DefinitionFillArrayItemWithDefaultsPvPK8DefField
// 地址: 0xc8786c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefMap* x20 = *(arg2 + 0x30)
int32_t x8 = *(x20 + 0x18)

if (x8 - 1 u<= 0x10)
    if (x8 u> 0x11)
    label_c87974:
        pthread_kill(pthread_self(), 6)
        void* x0_7
        DefMap* x1_4
        DefField* x2_7
        x0_7, x1_4, x2_7 = XNoReturn()
        return DefinitionFillSubFieldWithDefaults(x0_7, x1_4, x2_7) __tailcall
    
    int32_t x9_1 = 1 << x8
    
    if ((x9_1 & 0x1c41e) != 0)
        return DefinitionFillShallowFieldWithDefaults(x20, arg1, arg2) __tailcall
    
    if ((x9_1 & 0x21a60) == 0)
        if (x8 != 8)
            goto label_c87974
        
        *arg1 = *(arg2 + 0x48)
        return 

memset(arg1, 0, sx.q(*(x20 + 0x14)))
int32_t x21 = *(x20 + 0x10)

if (x21 == 0)
    return 

DefField* x2_4 = *(x20 + 8)
DefinitionFillSubFieldWithDefaults(arg1, *(x2_4 + 0x18), x2_4)

if (x21 s< 2)
    return 

int32_t x21_1 = 1
int64_t x22_1 = 0x80
int32_t x23_1

do
    x23_1 = *(x20 + 0x10)
    x21_1 += 1
    DefMap** x2_5 = *(x20 + 8) + x22_1
    DefinitionFillSubFieldWithDefaults(arg1, *x2_5, &x2_5[-3])
    x22_1 += 0x68
while (x21_1 s< x23_1)
