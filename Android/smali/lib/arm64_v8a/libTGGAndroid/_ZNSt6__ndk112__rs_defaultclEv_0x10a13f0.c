// 函数: _ZNSt6__ndk112__rs_defaultclEv
// 地址: 0x10a13f0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((zx.d(data_24bab80) & 1) == 0 && __cxa_guard_acquire(&data_24bab80) != 0)
    uint64_t x8_1 = 0x1571
    data_24b97f8 = 0x1571
    
    for (int64_t i = 1; i != 0x270; i += 1)
        x8_1 = zx.q(i.d + ((x8_1 u>> 0x1e).d ^ x8_1.d) * 0x6c078965)
        (&data_24b97f8)[i] = x8_1
    
    data_24bab78 = 0
    __cxa_guard_release(&data_24bab80)

int64_t x9_1 = data_24bab78
int64_t x13_1 = (x9_1 + 1) u% 0x270
int64_t x15_3 = (&data_24b97f8)[x13_1]
(&data_24b97f8)[x9_1] = ((x15_3 & 1) * 0x9908b0df) ^ (&data_24b97f8)[(x9_1 + 0x18d) u% 0x270]
    ^ ((x15_3 & 0x7ffffffe) | ((&data_24b97f8)[x9_1] & 0xffffffff80000000)) u>> 1
int64_t x9_8 = (&data_24b97f8)[data_24bab78]
data_24bab78 = x13_1
int64_t x9_9 = (x9_8 u>> 0xb & 0xffffffff) ^ x9_8
int64_t x9_10 = (zx.q(x9_9.d << 7) & 0x9d2c5680) ^ x9_9
int64_t x9_11 = (zx.q(x9_10.d << 0xf) & 0xefc60000) ^ x9_10
return x9_11 ^ x9_11 u>> 0x12
