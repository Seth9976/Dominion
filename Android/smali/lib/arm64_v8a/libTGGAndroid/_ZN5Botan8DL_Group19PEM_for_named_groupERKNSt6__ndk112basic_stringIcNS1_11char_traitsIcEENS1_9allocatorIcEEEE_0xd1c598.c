// 函数: _ZN5Botan8DL_Group19PEM_for_named_groupERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd1c598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void var_30
Botan::DL_Group::DL_Group(&var_30)
void* x0_1 = Botan::DL_Group::data()

if (*(x0_1 + 0x40) == -1)
    int64_t x9_1 = *(x0_1 + 0x28)
    int64_t x11_1 = *(x0_1 + 0x30)
    int64_t x10_1 = x11_1 - x9_1
    int64_t x8
    
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
        
        int64_t i_2 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int32_t i
        
        do
            int32_t x12_3 = *(x9_1 - 4 + (i_2 << 2))
            i = i_2
            i_2 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8 -= x11_3
        while (i != 1)
    
    *(x0_1 + 0x40) = x8

int64_t result = Botan::DL_Group::PEM_encode(&var_30)
int64_t* var_28

if (var_28 != 0)
    int64_t x9_3
    int32_t i_1
    
    do
        x9_3 = __ldaxr(&var_28[1])
        i_1 = __stlxr(x9_3 - 1, &var_28[1])
    while (i_1 != 0)
    
    if (x9_3 == 0)
        (*(*var_28 + 0x10))(var_28)
        return std::__ndk1::__shared_weak_count::__release_weak()

return result
