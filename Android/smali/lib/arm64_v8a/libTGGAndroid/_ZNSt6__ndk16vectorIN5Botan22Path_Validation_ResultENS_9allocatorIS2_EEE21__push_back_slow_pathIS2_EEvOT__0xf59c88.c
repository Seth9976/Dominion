// 函数: _ZNSt6__ndk16vectorIN5Botan22Path_Validation_ResultENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf59c88
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x9 = *arg1
int64_t x22 = ((*(arg1 + 8) - x9) s>> 4) * -0x3333333333333333

if (x22 + 1 u> 0x333333333333333)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x9_3 = ((*(arg1 + 0x10) - x9) s>> 4) * -0x3333333333333333
    int64_t x10_2 = x9_3 << 1
    int64_t x10_3
    
    if (x10_2 u< x22 + 1)
        x10_3 = x22 + 1
    else
        x10_3 = x10_2
    
    int64_t x21_1
    
    x21_1 = x9_3 u< 0x199999999999999 ? x10_3 : 0x333333333333333
    
    int64_t result
    
    if (x21_1 == 0)
        result = 0
    label_f59d18:
        int128_t* x8_2 = result + x22 * 0x50
        *(x8_2 + 8) = 0
        x8_2[1].q = 0
        int64_t x9_4 = result + x21_1 * 0x50
        int128_t* entry_x1
        *x8_2 = *entry_x1
        x8_2[1].q = entry_x1[1].q
        __builtin_memset(entry_x1, 0, 0x48)
        x8_2[2].q = 0
        *(x8_2 + 0x28) = 0
        *(x8_2 + 0x18) = *(entry_x1 + 0x18)
        *(x8_2 + 0x28) = *(entry_x1 + 0x28)
        *(x8_2 + 0x38) = 0
        x8_2[4].q = 0
        x8_2[3] = entry_x1[3]
        x8_2[4].q = entry_x1[4].q
        *(x8_2 + 0x48) = *(entry_x1 + 0x48)
        void* x20_2 = *arg1
        void* x11_2 = *(arg1 + 8)
        
        if (x11_2 == x20_2)
            *arg1 = x8_2
            *(arg1 + 8) = &x8_2[5]
            *(arg1 + 0x10) = x9_4
            
            if (x20_2 == 0)
                return result
        else
            int64_t i = 0
            
            do
                void* x14_1 = x8_2 + i
                void* x15_1 = x11_2 + i
                __builtin_memset(x14_1 - 0x50, 0, 0x18)
                i -= 0x50
                *(x14_1 - 0x50) = *(x15_1 - 0x50)
                *(x14_1 - 0x48) = *(x15_1 - 0x48)
                *(x14_1 - 0x40) = *(x15_1 - 0x40)
                __builtin_memset(x15_1 - 0x50, 0, 0x48)
                __builtin_memset(x14_1 - 0x38, 0, 0x18)
                *(x14_1 - 0x38) = *(x15_1 - 0x38)
                *(x14_1 - 0x30) = *(x15_1 - 0x30)
                *(x14_1 - 0x28) = *(x15_1 - 0x28)
                __builtin_memset(x14_1 - 0x20, 0, 0x18)
                *(x14_1 - 0x20) = *(x15_1 - 0x20)
                *(x14_1 - 0x18) = *(x15_1 - 0x18)
                *(x14_1 - 0x10) = *(x15_1 - 0x10)
                *(x14_1 - 8) = *(x15_1 - 8)
            while (x20_2 - x11_2 != i)
            
            x20_2 = *arg1
            int64_t x21_2 = *(arg1 + 8)
            *arg1 = x8_2 + i
            *(arg1 + 8) = &x8_2[5]
            *(arg1 + 0x10) = x9_4
            
            if (x21_2 != x20_2)
                do
                    x21_2 -= 0x50
                    result = Botan::Path_Validation_Result::~Path_Validation_Result()
                while (x20_2 != x21_2)
            
            if (x20_2 == 0)
                return result
        
        return operator delete(x20_2) __tailcall
    
    if (x21_1 u<= 0x333333333333333)
        int128_t v0
        result, v0 = operator new(x21_1 * 0x50)
        goto label_f59d18

sub_ef2a0c()
noreturn
