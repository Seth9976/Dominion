// 函数: _Z16RunSetupAfterFnsR7DomGame
// 地址: 0xbf2630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DomGame& x19 = arg1

if (*(arg1 + 0x1a60) s>= 1)
    int64_t x21_1 = 0x347
    int64_t i
    
    do
        int128_t var_70
        __builtin_memset(&var_70, 0, 0x50)
        int64_t entry_x4
        DomPushSetupContext(x19, 0, &var_70, 0xffffffff, entry_x4)
        (*(x19 + (x21_1 << 3)))()
        arg1, entry_x4 = __emutls_get_address(__emutls_v.gContextStack_tl)
        *(arg1 + 0x13000) -= 1
        i = x21_1 - 0x346
        x21_1 += 1
    while (i s< sx.q(*(x19 + 0x1a60)))

*(x19 + 0x1a60) = 0
