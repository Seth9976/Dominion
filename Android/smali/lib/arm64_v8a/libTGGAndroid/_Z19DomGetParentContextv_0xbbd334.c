// 函数: _Z19DomGetParentContextv
// 地址: 0xbbd334
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
int32_t x8_1 = *(x0_1 + 0x13000)

if (x8_1 == 1)
    return nullptr

return x0_1 + muls.dp.d(x8_1 - 2, 0x98)
