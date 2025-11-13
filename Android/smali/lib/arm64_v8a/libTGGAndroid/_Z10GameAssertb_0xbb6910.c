// 函数: _Z10GameAssertb
// 地址: 0xbb6910
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((arg1.d & 1) != 0)
    return 

int64_t lr
int64_t var_10 = lr
void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
void* x8_2 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
*(*(x8_2 - 0x90) + 0x1a28) = 0xffffffff
void* x8_3 = *(x8_2 - 0x90)
*(x8_3 + 0x1a2c) = *(x8_3 + 0x1a24)
XTrace("game thread yield (error)")
xco_yield()
return XTrace("game thread resume (error)") __tailcall
