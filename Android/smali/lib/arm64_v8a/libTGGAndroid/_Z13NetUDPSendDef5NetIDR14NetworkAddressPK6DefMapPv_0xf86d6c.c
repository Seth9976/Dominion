// 函数: _Z13NetUDPSendDef5NetIDR14NetworkAddressPK6DefMapPv
// 地址: 0xf86d6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x23 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x23 + 0x28)
int32_t x20 = arg1
int32_t var_ed90
int32_t var_ed8c
DefBinGetSize(arg4, arg3, &var_ed8c, &var_ed90)
void var_ed88
int64_t result = DefBinSerialize(arg4, arg3, &var_ed88, 0)

if (x20 != 0)
    int64_t* x9_1 = *gNetwork
    int32_t x8_1 = x20 & 0xffff
    
    if (x8_1 u< x9_1[1].d)
        int64_t x21_1 = *x9_1
        
        if (*(x21_1 + mulu.dp.d(x8_1, 0x90) + 0x88) == x20)
            uint64_t x24_1 = zx.q(x8_1)
            int32_t x20_1 = var_ed8c
            int32_t x1_2 = *(x21_1 + x24_1 * 0x90 + 0x20)
            
            if (x1_2 != 0xffffffff)
            label_f86e60:
                int64_t* x0_3 = *gNetworkInterface
                result = (*(*x0_3 + 0x20))(x0_3, x1_2, arg2, &var_ed88, zx.q(x20_1))
                
                if (result.d == 0xfffffffe)
                    int64_t* x0_4 = *gNetworkInterface
                    (*(*x0_4 + 0x18))(x0_4, zx.q(*(x21_1 + x24_1 * 0x90 + 0x20)))
                    int64_t* x0_5 = *gNetworkInterface
                    result = (*(*x0_5 + 0x10))(x0_5, zx.q(*(x21_1 + x24_1 * 0x90 + 6)), 0)
                    *(x21_1 + x24_1 * 0x90 + 0x20) = result.d
            else
                int64_t* x0_2 = *gNetworkInterface
                result = (*(*x0_2 + 0x10))(x0_2, zx.q(*(x21_1 + x24_1 * 0x90 + 6)), 0)
                x1_2 = result.d
                *(x21_1 + x24_1 * 0x90 + 0x20) = result.d
                
                if (result.d != 0xffffffff)
                    goto label_f86e60

if (*(x23 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
