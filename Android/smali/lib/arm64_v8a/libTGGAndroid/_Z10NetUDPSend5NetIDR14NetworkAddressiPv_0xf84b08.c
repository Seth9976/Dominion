// 函数: _Z10NetUDPSend5NetIDR14NetworkAddressiPv
// 地址: 0xf84b08
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1.d == 0)
    return 

int64_t* x9_1 = *gNetwork
int32_t x8_1 = arg1.d & 0xffff

if (x8_1 u>= x9_1[1].d)
    return 

int64_t x22_1 = *x9_1

if (*(x22_1 + mulu.dp.d(x8_1, 0x90) + 0x88) != arg1.d)
    return 

uint64_t x24_1 = zx.q(x8_1)
int32_t x1 = *(x22_1 + x24_1 * 0x90 + 0x20)

if (x1 != 0xffffffff)
label_f84bac:
    int64_t* x0_1 = *gNetworkInterface
    
    if ((*(*x0_1 + 0x20))(x0_1, x1, arg2, arg4, zx.q(arg3)).d == 0xfffffffe)
        int64_t* x0_2 = *gNetworkInterface
        (*(*x0_2 + 0x18))(x0_2, zx.q(*(x22_1 + x24_1 * 0x90 + 0x20)))
        int64_t* x0_3 = *gNetworkInterface
        *(x22_1 + x24_1 * 0x90 + 0x20) =
            (*(*x0_3 + 0x10))(x0_3, zx.q(*(x22_1 + x24_1 * 0x90 + 6)), 0).d
else
    int64_t* x0 = *gNetworkInterface
    arg1 = (*(*x0 + 0x10))(x0, zx.q(*(x22_1 + x24_1 * 0x90 + 6)), 0)
    x1 = arg1.d
    *(x22_1 + x24_1 * 0x90 + 0x20) = arg1.d
    
    if (arg1.d != 0xffffffff)
        goto label_f84bac
