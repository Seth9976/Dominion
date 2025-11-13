// 函数: _ZNK5Botan8EC_Group29blinded_base_point_multiply_xERKNS_6BigIntERNS_21RandomNumberGeneratorERNSt6__ndk16vectorIS1_NS6_9allocatorIS1_EEEE
// 地址: 0xd27110
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = Botan::EC_Group::data()
Botan::PointGFp_Base_Point_Precompute::mul(x0 + 0x190, arg2, arg3, x0 + 0xe8)
int64_t var_40

if (var_40 == -1)
    int64_t var_58
    int64_t var_50
    int64_t x10_1 = var_50 - var_58
    
    if (var_50 == var_58)
        int64_t var_40_2 = 0
    label_d271dc:
        void* entry_x8
        __builtin_memset(entry_x8, 0, 0x18)
        *(entry_x8 + 0x18) = -1
        *(entry_x8 + 0x20) = 1
    else
        int64_t x12_1
        
        x12_1 = x10_1 s>= 0 ? x10_1 : -1
        
        int64_t x11_2 = var_58 - var_50
        int64_t x12_2
        
        x12_2 = x12_1 s< 1 ? x12_1 : 1
        
        int64_t x8_2 = x10_1 s>> 2
        int64_t x10_2
        
        x10_2 = x11_2 s> x10_1 ? x11_2 : x10_1
        
        int64_t i_1 = x12_2 * (x10_2 u>> 2)
        uint64_t x11_3 = 1
        int64_t i
        
        do
            int32_t x12_3 = *(var_58 - 4 + (i_1 << 2))
            i = i_1
            i_1 -= 1
            x11_3 = zx.q(x11_3.d) & zx.q(((x12_3 - 1) & not.d(x12_3)) s>> 0x1f)
            x8_2 -= x11_3
        while (i != 1)
        int64_t var_40_1 = x8_2
        
        if (x8_2 == 0)
            goto label_d271dc
        
        Botan::PointGFp::get_affine_x()
else
    if (var_40 == 0)
        goto label_d271dc
    
    Botan::PointGFp::get_affine_x()

return Botan::PointGFp::~PointGFp()
