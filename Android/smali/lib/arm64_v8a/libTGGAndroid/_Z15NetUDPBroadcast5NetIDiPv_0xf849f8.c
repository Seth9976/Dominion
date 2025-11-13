// 函数: _Z15NetUDPBroadcast5NetIDiPv
// 地址: 0xf849f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return 

uint64_t x21_1 = zx.q(arg1.d) & 0xffff
int64_t* x8_1 = *gNetwork

if (x21_1.d u>= x8_1[1].d)
    return 

int64_t x22_1 = *x8_1

if (*(x22_1 + x21_1 * 0x90 + 0x88) != arg1.d)
    return 

int32_t x1 = *(x22_1 + x21_1 * 0x90 + 0x20)

if (x1 != 0xffffffff)
label_f84a94:
    int64_t* x0_1 = *gNetworkInterface
    
    if ((*(*x0_1 + 0x20))(x0_1, x1, x22_1 + mulu.dp.d(x21_1.d, 0x90), arg3, zx.q(arg2)).d
            == 0xfffffffe)
        int64_t* x0_2 = *gNetworkInterface
        (*(*x0_2 + 0x18))(x0_2, zx.q(*(x22_1 + x21_1 * 0x90 + 0x20)))
        int64_t* x0_3 = *gNetworkInterface
        *(x22_1 + x21_1 * 0x90 + 0x20) =
            (*(*x0_3 + 0x10))(x0_3, zx.q(*(x22_1 + x21_1 * 0x90 + 6)), 0).d
else
    int64_t* x0 = *gNetworkInterface
    arg1 = (*(*x0 + 0x10))(x0, zx.q(*(x22_1 + x21_1 * 0x90 + 6)), 0)
    x1 = arg1.d
    *(x22_1 + x21_1 * 0x90 + 0x20) = arg1.d
    
    if (arg1.d != 0xffffffff)
        goto label_f84a94
