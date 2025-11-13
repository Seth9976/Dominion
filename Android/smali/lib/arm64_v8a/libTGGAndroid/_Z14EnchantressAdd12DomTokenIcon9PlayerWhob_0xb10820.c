// 函数: _Z14EnchantressAdd12DomTokenIcon9PlayerWhob
// 地址: 0xb10820
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg2 == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg2, 0x4d48)

int64_t (* x8_2)() = x8_1 + 0x4d26

if (arg1.d == 0xe)
    int64_t (* x9_2)() = x8_2 + 0x12
    x8_2 += 0xe
    int32_t x10_1 = *x9_2
    *x9_2 = x10_1 + 1
    
    if (x10_1 == 0)
    label_b108b4:
        
        if (zx.d(*x8_2) == 0)
            return DomCreateTokenIcon(arg1, 0, zx.q(arg2), false) __tailcall
else if (arg1.d == 9)
    int64_t (* x9_3)() = x8_2 + 0xa
    x8_2 += 6
    int32_t x10_2 = *x9_3
    *x9_3 = x10_2 + 1
    
    if (x10_2 == 0)
        goto label_b108b4
else
    if (arg1.d != 1)
        pthread_kill(pthread_self(), 6)
        int64_t x0_2
        int64_t x1_1
        bool x2_2
        x0_2, x1_1, x2_2 = XNoReturn()
        return EnchantressRemove(x0_2, x1_1, x2_2) __tailcall
    
    int32_t x10 = *(x8_2 + 2)
    *(x8_2 + 2) = x10 + 1
    
    if (x10 == 0)
        goto label_b108b4
