// 函数: _Z19DomContextGetWindowv
// 地址: 0xbbd204
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
int64_t x9 = sx.q(*(x0_1 + 0x13000))
int64_t x8_1 = x9 + 1
int32_t* x9_2 = x0_1 + x9 * 0x98 - 0x48
uint64_t result

do
    x8_1 -= 1
    
    if (x8_1 s< 1)
        return 0
    
    result = zx.q(*x9_2)
    x9_2 = &x9_2[-0x26]
while (result.d == 0)

return result
