// 函数: _Z26DomContextStackIsAllPlayer9PlayerWho
// 地址: 0xbbc88c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
int32_t x21 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + 0x13000)

if (x21 s< 1)
    return 1

if (*(__emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x21 - 1, 0x98) + 0x18) != x19)
    return 0

int32_t x23_1 = x21 - 2
int32_t x8_3 = 1
int32_t x24_1
int32_t x9_1

do
    x24_1 = x8_3
    
    if (x23_1 == 0xffffffff)
        break
    
    x9_1 = *(__emutls_get_address(__emutls_v.gContextStack_tl) + muls.dp.d(x23_1, 0x98) + 0x18)
    x8_3 = x24_1 + 1
    x23_1 -= 1
while (x9_1 == x19)
return zx.q(x21 s<= x24_1 ? 1 : 0)
