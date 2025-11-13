// 函数: _ZN8CardIterppEv
// 地址: 0xbb69f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x0
int32_t x8 = *(entry_x0 + 0xc)
entry_x0[1].d = x8

if (x8 != 0)
    int64_t x20_1 = *entry_x0
    uint64_t x21_1 = zx.q(x8.w)
    
    if (x21_1.d u>= 0x320)
        void* x0_1 = __emutls_get_address(__emutls_v.gContextStack_tl)
        void* x8_3 = x0_1 + sx.q(*(x0_1 + 0x13000)) * 0x98
        *(*(x8_3 - 0x90) + 0x1a28) = 0xffffffff
        void* x8_4 = *(x8_3 - 0x90)
        *(x8_4 + 0x1a2c) = *(x8_4 + 0x1a24)
        XTrace("game thread yield (error)")
        xco_yield()
        XTrace("game thread resume (error)")
    
    x8 = *(x20_1 + x21_1 * 0x68 + 0x1ac8)

*(entry_x0 + 0xc) = x8
