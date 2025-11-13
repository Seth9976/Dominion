// 函数: _Z34DefinitionFillSubFieldWithDefaultsPvPK6DefMapPK8DefField
// 地址: 0xc8797c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *(arg2 + 0x18)
uint64_t x9 = zx.q(x8 - 1)
void* x19 = arg1 + zx.q(*arg3)

if (x9.d u<= 0x2a)
    switch (x9)
        case 0, 1, 2, 3, 7, 9, 0xd, 0xe, 0xf, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 
                0x1d, 0x22, 0x27, 0x28, 0x29, 0x2a
            if (x9.d u< 0x11)
                return DefinitionFillArrayableFieldWithDefaults(x19, arg2, arg3) __tailcall
            
            goto label_c879c8
        case 4, 0x10
        label_c87a98:
            *(arg1 + zx.q(*(arg3 + 0x20))) = 0
            *x19 = 0
            return 
        case 5
            if (*(arg3 + 0x38) s>= 1)
                int64_t i = 0
                int64_t x21_1 = sx.q(*(*(arg3 + 0x30) + 0x14))
                
                do
                    DefinitionFillArrayItemWithDefaults(x19, arg3)
                    i += 1
                    x19 += x21_1
                while (*(arg3 + 0x38) s> i)
            
            return 
        case 6, 0xc, 0x11, 0x12, 0x13, 0x1e, 0x1f, 0x20, 0x21, 0x23, 0x24, 0x25, 0x26
            goto label_c87a50
        case 8
        label_c87ab4:
            *(arg1 + zx.q(*(arg3 + 0x20))) = 0
            *x19 = 0
            return 
        case 0xa
        label_c87acc:
            void* x21_2 = *(arg3 + 0x48)
            
            if (x21_2 == 0)
                *x19 = 0
                return 
            
            DefMap* x20_1 = *(arg3 + 0x30)
            void* x0_6 = XMalloc(*(x20_1 + 0x14))
            DefinitionDeepCopyReplaceBlock(x21_2, x0_6, x20_1)
            *x19 = x0_6
            return 
        case 0xb
        label_c87b10:
            *x19 = *(arg3 + 0x48)
            *(arg1 + zx.q(*(arg3 + 0x20))) = strcrc32(*(arg1 + zx.q(*arg3)), 0).d
            return 
    
    return 

label_c87a50:

if (x9.d u>= 0x11)
label_c879c8:
    int64_t x8_1 = *(arg3 + 0x48)
    
    if (x8_1 != 0)
        return memcpy(x19, x8_1, sx.q(*(*(arg3 + 0x18) + 0x14))) __tailcall
    
    return DefinitionFillArrayableFieldWithDefaults(x19, arg2, arg3) __tailcall

uint64_t x8_7 = zx.q(x8 - 8)

if (x8_7.d u> 9)
label_c87b40:
    pthread_kill(pthread_self(), 6)
    void* x0_12
    DefMap* x1_5
    x0_12, x1_5 = XNoReturn()
    return DefinitionNewDeepCopyBlock(x0_12, x1_5) __tailcall

switch (x8_7)
    case 0
        *x19 = *(arg3 + 0x48)
        return 
    case 1
        goto label_c87ab4
    case 2, 5, 6, 7, 8
        goto label_c87b40
    case 3
        goto label_c87acc
    case 4
        goto label_c87b10
    case 9
        goto label_c87a98
