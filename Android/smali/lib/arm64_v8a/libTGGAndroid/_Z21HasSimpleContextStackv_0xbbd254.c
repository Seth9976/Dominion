// 函数: _Z21HasSimpleContextStackv
// 地址: 0xbbd254
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8_1 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)

if (x8_1 s<= 2)
    int64_t* x19_3 =
        __emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x8_1 - 1, 0x98) + 8
    
    if (CountOngoing(*x19_3, zx.q(x19_3[2].d), 0x18, 0, 0) s<= 0)
        return zx.q(CountOngoing(*x19_3, zx.q(x19_3[2].d), 0x19, 0, 0) s< 1 ? 1 : 0)

return 0
