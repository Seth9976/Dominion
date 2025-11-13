// 函数: _Z19NetworkListenUpdateR9NetListen
// 地址: 0xf844a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t v8
int64_t var_70 = v8
uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x8 = *(x21 + 0x28)
int64_t var_94
__builtin_memset(&var_94, 0, 0x1c)
int32_t var_98 = *(arg1 + 8)
int64_t* x0 = *gNetworkInterface
int64_t result
int128_t v0
int128_t v1
result, v0, v1 = (*(*x0 + 0x48))(x0, zx.q(*(arg1 + 4)), &var_98)

while (result.d != 0)
    int64_t* x8_13 = *gNetwork
    uint64_t x9_2 = zx.q(x8_13[2].d)
    int64_t x10_3
    int32_t x11_1
    
    if (x9_2.d != x8_13[1].d)
        x10_3 = *x8_13
        x11_1 = *(x10_3 + x9_2 * 0x90 + 0x88)
    else
        x10_3 = *x8_13
        x11_1 = x9_2.d + 1
        x8_13[1].d = x11_1
    
    int128_t* fp_2 = x10_3 + x9_2 * 0x90
    v0.q = 0
    v0:8.q = 0
    x8_13[2].d = x11_1
    __builtin_memset(fp_2, 0, 0x88)
    *(fp_2 + 0x88) = x9_2.d | x8_13[3].d << 0x10
    int32_t x9_4 = x8_13[3].d
    int32_t x9_5
    
    if (x9_4 == 0xffff)
        x9_5 = 1
    else
        x9_5 = x9_4 + 1
    
    *(x8_13 + 0x14) += 1
    x8_13[3].d = x9_5
    fp_2[2].d = 0xffffffff
    *fp_2 = 0
    v1 = var_98.o
    fp_2[2].d = result.d
    *(fp_2 + 0x24) = 1
    *(fp_2 + 0x3c) = 0x100000004
    *fp_2 = v1
    int64_t var_8c
    fp_2[1] = var_8c:4.o
    uint64_t x8_14 = *gNetwork
    int32_t x9_6 = *(x8_14 + 0x90)
    int32_t* x20_1
    int128_t v0_1
    int128_t v1_1
    
    if (x9_6 == 0)
        int32_t* x0_1
        x0_1, v0_1, v1_1 = XCalloc(0xed70)
        x20_1 = x0_1
    else
        void* x0_4 = *(x8_14 + 0x88)
        void* x10_7 = *(x0_4 + 0x10)
        *(x8_14 + 0x88) = x10_7
        
        if (x10_7 == 0)
            *(x8_14 + 0x80) = 0
        else
            *(x10_7 + 8) = 0
            x9_6 = *(x8_14 + 0x90)
        
        x20_1 = *x0_4
        *(x8_14 + 0x90) = x9_6 - 1
        v0_1, v1_1 = XPooledFree(x0_4, 0x18)
    x20_1[1] = 0x5dd
    int32_t x8_4 = *(fp_2 + 0x88)
    x20_1[2] = 0
    *x20_1 = x8_4
    v0_1 = fp_2[1]
    *(x20_1 + 0xed48) = *fp_2
    *(x20_1 + 0xed58) = v0_1
    void* fp_1 = *gNetwork
    void** x0_2 = XPooledCalloc(0x18)
    *x0_2 = x20_1
    x0_2[1] = 0
    x0_2[2] = *(fp_1 + 0x58)
    void* x8_7 = *(fp_1 + 0x58)
    void* x8_8
    
    if (x8_7 == 0)
        x8_8 = fp_1 + 0x50
    else
        x8_8 = x8_7 + 8
    
    *x8_8 = x0_2
    int32_t x8_9 = *(fp_1 + 0x60)
    *(fp_1 + 0x58) = x0_2
    *(fp_1 + 0x60) = x8_9 + 1
    int64_t* x0_3 = *gNetworkInterface
    result, v0, v1 = (*(*x0_3 + 0x48))(x0_3, zx.q(*(arg1 + 4)), &var_98)

if (*(x21 + 0x28) == x8)
    return result

__stack_chk_fail()
noreturn
