// 函数: _ZNSt6__ndk16vectorIN5Botan8PointGFpENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_
// 地址: 0xf2a3ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::PointGFp const& x9 = *arg1
int64_t x21 = ((arg1[1] - x9) s>> 3) * -0xf0f0f0f0f0f0f0f

if (x21 + 1 u> 0x1e1e1e1e1e1e1e1)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((arg1[2] - x9) s>> 3) * -0xf0f0f0f0f0f0f0f
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x21 + 1)
        x10_3 = x21 + 1
    else
        x10_3 = x10_2
    
    int64_t x23_1
    
    x23_1 = x9_3 u< 0xf0f0f0f0f0f0f0 ? x10_3 : 0x1e1e1e1e1e1e1e1
    
    int64_t x20
    
    if (x23_1 == 0)
        x20 = 0
    label_f2a488:
        Botan::PointGFp* x21_1 = x20 + x21 * 0x88
        int64_t result = Botan::PointGFp::PointGFp(x21_1)
        Botan::PointGFp const& __saved_x1 = *arg1
        int64_t x8_2 = arg1[1]
        int64_t x23_2 = x20 + x23_1 * 0x88
        
        if (x8_2 == __saved_x1)
            *arg1 = x21_1
            arg1[1] = x21_1 + 0x88
            arg1[2] = x23_2
            
            if (__saved_x1 == 0)
                return result
        else
            int64_t i = 0
            
            do
                result = Botan::PointGFp::PointGFp(x21_1 + i - 0x88)
                i -= 0x88
            while (__saved_x1 - x8_2 != i)
            
            __saved_x1 = *arg1
            int64_t x20_1 = arg1[1]
            *arg1 = x21_1 + i
            arg1[1] = x21_1 + 0x88
            arg1[2] = x23_2
            
            if (x20_1 != __saved_x1)
                do
                    x20_1 -= 0x88
                    result = Botan::PointGFp::~PointGFp()
                while (__saved_x1 != x20_1)
            
            if (__saved_x1 == 0)
                return result
        
        return operator delete(__saved_x1) __tailcall
    
    if (x23_1 u<= 0x1e1e1e1e1e1e1e1)
        x20 = operator new(x23_1 * 0x88)
        goto label_f2a488

sub_ef2a0c()
noreturn
