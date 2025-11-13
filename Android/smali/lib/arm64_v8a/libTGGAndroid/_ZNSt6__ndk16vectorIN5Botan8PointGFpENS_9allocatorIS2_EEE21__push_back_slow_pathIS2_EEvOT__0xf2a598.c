// 函数: _ZNSt6__ndk16vectorIN5Botan8PointGFpENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf2a598
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
Botan::PointGFp&& x19 = arg1
int64_t x21 = ((*(arg1 + 8) - x9) s>> 3) * -0xf0f0f0f0f0f0f0f

if (x21 + 1 u> 0x1e1e1e1e1e1e1e1)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(x19 + 0x10) - x9) s>> 3) * -0xf0f0f0f0f0f0f0f
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x21 + 1)
        x10_3 = x21 + 1
    else
        x10_3 = x10_2
    
    int64_t x23_1
    
    x23_1 = x9_3 u< 0xf0f0f0f0f0f0f0 ? x10_3 : 0x1e1e1e1e1e1e1e1
    
    Botan::PointGFp&& x20
    int128_t v0
    int128_t v1
    
    if (x23_1 == 0)
        x20 = nullptr
    label_f2a634:
        v0.q = 0
        v0:8.q = 0
        int64_t* x21_1 = x20 + x21 * 0x88
        __builtin_memset(&x21_1[1], 0, 0x20)
        __builtin_memset(&x21_1[7], 0, 0x18)
        __builtin_memset(&x21_1[0xc], 0, 0x18)
        int64_t* entry_x1
        int64_t x9_4 = entry_x1[1]
        int64_t x10_4 = x21_1[1]
        int64_t x23_2 = x20 + x23_1 * 0x88
        *x21_1 = *entry_x1
        x21_1[1] = x9_4
        v0 = *(entry_x1 + 0x10)
        *entry_x1 = 0
        entry_x1[1] = x10_4
        v1 = *(x21_1 + 0x10)
        *(x21_1 + 0x10) = v0
        int64_t x11_3 = entry_x1[4]
        int64_t x9_5 = entry_x1[5]
        *(entry_x1 + 0x10) = v1
        int64_t x12_2 = x21_1[4]
        x21_1[4] = x11_3
        x21_1[5] = x9_5
        int32_t x9_6 = entry_x1[6].d
        entry_x1[4] = x12_2
        entry_x1[5] = -1
        x21_1[6].d = x9_6
        entry_x1[6].d = 1
        v1 = *(x21_1 + 0x38)
        *(x21_1 + 0x38) = *(entry_x1 + 0x38)
        *(entry_x1 + 0x38) = v1
        int64_t x13 = entry_x1[9]
        int64_t x11_4 = entry_x1[0xa]
        entry_x1[9] = x21_1[9]
        entry_x1[0xa] = -1
        x21_1[9] = x13
        x21_1[0xa] = x11_4
        x21_1[0xb].d = entry_x1[0xb].d
        entry_x1[0xb].d = 1
        v1 = *(x21_1 + 0x60)
        *(x21_1 + 0x60) = *(entry_x1 + 0x60)
        *(entry_x1 + 0x60) = v1
        int64_t x13_1 = entry_x1[0xe]
        int64_t x11_6 = entry_x1[0xf]
        entry_x1[0xe] = x21_1[0xe]
        entry_x1[0xf] = -1
        x21_1[0xe] = x13_1
        x21_1[0xf] = x11_6
        x21_1[0x10].d = entry_x1[0x10].d
        entry_x1[0x10].d = 1
        void* x22_2 = *x19
        int64_t x9_7 = *(x19 + 8)
        
        if (x9_7 == x22_2)
            *x19 = x21_1
            *(x19 + 8) = &x21_1[0x11]
            *(x19 + 0x10) = x23_2
            
            if (x22_2 == 0)
                return 
        else
            int64_t i = 0
            
            do
                Botan::PointGFp::PointGFp(x21_1 + i - 0x88)
                i -= 0x88
            while (x22_2 - x9_7 != i)
            
            x22_2 = *x19
            int64_t x20_1 = *(x19 + 8)
            *x19 = x21_1 + i
            *(x19 + 8) = &x21_1[0x11]
            *(x19 + 0x10) = x23_2
            
            if (x20_1 != x22_2)
                do
                    x20_1 -= 0x88
                    Botan::PointGFp::~PointGFp()
                while (x22_2 != x20_1)
            
            if (x22_2 == 0)
                return 
        
        return operator delete(x22_2) __tailcall
    
    if (x23_1 u<= 0x1e1e1e1e1e1e1e1)
        arg1, v0, v1 = operator new(x23_1 * 0x88)
        x20 = arg1
        goto label_f2a634

sub_ef2a0c()
noreturn
