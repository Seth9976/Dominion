// 函数: _ZNK5Botan6BigIntngEv
// 地址: 0xce055c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* entry_x8
int64_t result = std::__ndk1::vector<uint32_t, Botan::secure_allocator<uint32_t> >::vector(entry_x8)
void* entry_x0
int64_t x8 = *(entry_x0 + 0x18)
entry_x8[3] = x8
int32_t x9 = *(entry_x0 + 0x20)
entry_x8[4].d = x9

if (x9 != 1)
    entry_x8[4].d = 1
    return result

if (x8 == -1)
    int64_t x9_1 = *entry_x8
    int64_t x11_1 = entry_x8[1]
    int64_t x10_1 = x11_1 - x9_1
    
    if (x11_1 == x9_1)
        x8 = 0
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = x9_1 - x11_1
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        x8 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8 -= x11_3
        while (i != 1)
    
    entry_x8[3] = x8

entry_x8[4].d = x8 == 0 ? 1 : 0
return result
