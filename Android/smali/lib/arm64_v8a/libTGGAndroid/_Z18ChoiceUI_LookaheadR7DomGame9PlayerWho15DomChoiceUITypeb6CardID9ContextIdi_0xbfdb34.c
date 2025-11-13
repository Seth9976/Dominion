// 函数: _Z18ChoiceUI_LookaheadR7DomGame9PlayerWho15DomChoiceUITypeb6CardID9ContextIdi
// 地址: 0xbfdb34
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int128_t v0
v0.q = 0
v0:8.q = 0
DomChoiceUIType* entry_x8
__builtin_memset(entry_x8, 0, 0x30)
*entry_x8 = arg3
*(entry_x8 + 0x28) = arg6
*(entry_x8 + 0x30) = 0
*(entry_x8 + 0x1c) = arg7

if ((arg4.d & 1) != 0)
    int32_t x8_1 = *(__emutls_get_address(__emutls_v.gContextStack_tl, v0) + 0x13000)
    
    if (x8_1 s<= 2)
        int64_t* x20_3 =
            __emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_1 - 1, 0x98) + 8
        
        if (CountOngoing(*x20_3, zx.q(x20_3[2].d), 0x18, 0, 0).d s<= 0)
            CountOngoing(*x20_3, zx.q(x20_3[2].d), 0x19, 0, 0)
            *(entry_x8 + 0x30) = 0
            return 

*(entry_x8 + 0x30) = 0
