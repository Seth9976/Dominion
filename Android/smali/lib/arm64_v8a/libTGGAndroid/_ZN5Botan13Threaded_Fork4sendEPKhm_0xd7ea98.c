// 函数: _ZN5Botan13Threaded_Fork4sendEPKhm
// 地址: 0xd7ea98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = *(arg1 + 8)

if (*(arg1 + 0x10) != x8)
    Botan::Threaded_Fork::thread_delegate_work(arg1, x8)

int64_t result
int128_t v0
int128_t v1
uint128_t v2
uint128_t v3
result, v0, v1, v2, v3 = Botan::Threaded_Fork::thread_delegate_work(arg1, arg2)
void* x8_1 = *(arg1 + 0x20)
int64_t x10 = *(arg1 + 0x28)
void* x9_1 = x10 - x8_1

if (x10 != x8_1)
    void* x11_1
    
    x11_1 = x9_1 s>= 0 ? x9_1 : -ffffffffffffffff
    
    void* x10_1 = x8_1 - x10
    void* x11_2
    
    x11_2 = x11_1 s< 1 ? x11_1 : 1
    
    void* x12_1
    
    x12_1 = x10_1 s> x9_1 ? x10_1 : x9_1
    
    int64_t x13_1 = x11_2 * (x12_1 u>> 3)
    int32_t x13_2
    int64_t i_4
    
    if (x13_1 u>= 4)
        i_4 = x13_1 & 0xfffffffffffffffc
        int128_t* x14_1 = x8_1 + 0x10
        v0.d = 1
        v0:4.d = 1
        int64_t i_3 = i_4
        v1.d = 1
        v1:4.d = 1
        int64_t i
        
        do
            v2 = x14_1[-1]
            v3 = *x14_1
            i = i_3
            i_3 -= 4
            x14_1 = &x14_1[2]
            uint128_t v2_1 = vceqzq_u64(v2, 0)
            uint128_t v3_1 = vceqzq_u64(v3, 0)
            v0 &= vmovn_s64(v2_1)
            v1 &= vmovn_s64(v3_1)
        while (i != 4)
        uint128_t v0_1 = v1 & v0
        x13_2 = v0_1.d & vdup_laneq_s32(v0_1, 1)
        
        if (x13_1 != i_4)
            goto label_d7eb80
    else
        i_4 = 0
        x13_2 = 1
    label_d7eb80:
        void* x9_2
        
        x9_2 = x10_1 s> x9_1 ? x10_1 : x9_1
        
        int64_t i_2 = neg.q(i_4) + x11_2 * (x9_2 u>> 3)
        int64_t* x8_2 = x8_1 + (i_4 << 3)
        int64_t i_1
        
        do
            int64_t x10_2 = *x8_2
            x8_2 = &x8_2[1]
            i_1 = i_2
            i_2 -= 1
            x13_2 &= x10_2 == 0 ? 1 : 0
        while (i_1 != 1)
    
    if ((x13_2 & 1) == 0)
        *(arg1 + 0x10) = *(arg1 + 8)
        return result

uint64_t var_40 = arg2
int64_t x2
int64_t var_38_1 = x2
return Botan::operator+=<uint8_t, Botan::secure_allocator<uint8_t>, uint64_t>(&arg1[8], &var_40)
