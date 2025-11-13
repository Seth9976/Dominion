// 函数: _Z17EnchantressRemove12DomTokenIcon9PlayerWhob
// 地址: 0xb108e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t (* x8_1)()

if (arg2.d == 0xffffffff)
    x8_1 = gDomClient + 0x48
else
    x8_1 = gDomClient + 0x48 + muls.dp.d(arg2.d, 0x4d48)

int64_t (* x8_2)() = x8_1 + 0x4d28

if (arg1.d == 0xe)
    goto label_b10930

if (arg1.d == 9)
    int32_t x9_3 = *(x8_2 + 8)
    *(x8_2 + 8) = x9_3 - 1
    
    if (x9_3 == 1)
        return DomRemoveTokenIconSimple(arg1, arg2, false) __tailcall
    
    return 

if (arg1.d != 1)
    pthread_kill(pthread_self(), 6)
    arg1, arg2, x8_2 = XNoReturn()
label_b10930:
    x8_2 += 0x10

int32_t x9_1 = *x8_2
*x8_2 = x9_1 - 1

if (x9_1 == 1)
    return DomRemoveTokenIconSimple(arg1, arg2, false) __tailcall
