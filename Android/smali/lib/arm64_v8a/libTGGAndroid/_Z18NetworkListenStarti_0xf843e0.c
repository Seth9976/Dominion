// 函数: _Z18NetworkListenStarti
// 地址: 0xf843e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetworkInterface
int32_t var_14
uint64_t result = (*(*x8 + 0x40))(x8, zx.q(arg1), &var_14)

if (result.d != 0)
    uint64_t x8_1 = *gNetwork
    uint64_t x9_2 = zx.q(*(x8_1 + 0x38))
    int64_t x10_2
    int32_t x11_1
    
    if (x9_2.d != *(x8_1 + 0x30))
        x10_2 = *(x8_1 + 0x28)
        x11_1 = *(x10_2 + (x9_2 << 4) + 0xc)
    else
        x10_2 = *(x8_1 + 0x28)
        x11_1 = x9_2.d + 1
        *(x8_1 + 0x30) = x11_1
    
    int16_t* x10_3 = x10_2 + (x9_2 << 4)
    *(x8_1 + 0x38) = x11_1
    *(x10_3 + 8) = 0
    *x10_3 = 0
    *(x10_3 + 0xc) = x9_2.d | *(x8_1 + 0x40) << 0x10
    int32_t x9_4 = *(x8_1 + 0x40)
    int32_t x9_5
    
    if (x9_4 == 0xffff)
        x9_5 = 1
    else
        x9_5 = x9_4 + 1
    
    *(x8_1 + 0x3c) += 1
    *(x8_1 + 0x40) = x9_5
    *x10_3 = arg1.w
    *(x10_3 + 4) = result.d
    result = zx.q(*(x10_3 + 0xc))
    *(x10_3 + 8) = var_14

return result
