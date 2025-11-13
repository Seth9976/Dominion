// 函数: _ZNSt6__ndk16vectorIN5Botan3OIDENS_9allocatorIS2_EEE21__push_back_slow_pathIS2_EEvOT_
// 地址: 0xf580d4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *arg1
int64_t x22 = (*(arg1 + 8) - x8) s>> 5

if ((x22 + 1) u>> 0x3b != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    int64_t x8_1 = *(arg1 + 0x10) - x8
    int64_t x10_2 = x8_1 s>> 4
    int64_t x9_3
    
    if (x10_2 u< x22 + 1)
        x9_3 = x22 + 1
    else
        x9_3 = x10_2
    
    int64_t x21_1
    
    if (0x3ffffffffffffff u> x8_1 s>> 5)
        x21_1 = x9_3
    else
        x21_1 = 0x7ffffffffffffff
    
    void* result
    
    if (x21_1 == 0)
        result = nullptr
    label_f58148:
        void** x9_4 = result + (x22 << 5)
        x9_4[2] = 0
        x9_4[3] = 0
        *x9_4 = _vtable_for_Botan::OID + 0x10
        void* entry_x1
        *(x9_4 + 8) = *(entry_x1 + 8)
        x9_4[3] = *(entry_x1 + 0x18)
        __builtin_memset(entry_x1 + 8, 0, 0x18)
        void* x20_2 = *arg1
        void* x13 = *(arg1 + 8)
        void* x11_1 = result + (x21_1 << 5)
        
        if (x13 == x20_2)
            *arg1 = x9_4
            *(arg1 + 8) = &x9_4[4]
            *(arg1 + 0x10) = x11_1
        else
            int64_t i = 0
            
            do
                void* x16_1 = x9_4 + i
                void* x17_1 = x13 + i
                *(x16_1 - 0x20) = _vtable_for_Botan::OID + 0x10
                __builtin_memset(x16_1 - 0x18, 0, 0x18)
                i -= 0x20
                *(x16_1 - 0x18) = *(x17_1 - 0x18)
                *(x16_1 - 0x10) = *(x17_1 - 0x10)
                result = *(x17_1 - 8)
                *(x16_1 - 8) = result
                __builtin_memset(x17_1 - 0x18, 0, 0x18)
            while (x20_2 - x13 != i)
            
            x20_2 = *arg1
            void** x10_4 = *(arg1 + 8)
            *arg1 = x9_4 + i
            *(arg1 + 8) = &x9_4[4]
            *(arg1 + 0x10) = x11_1
            
            if (x10_4 != x20_2)
                void** x21_2 = x10_4
                
                do
                    x21_2 = &x21_2[-4]
                    *x21_2 = _vtable_for_Botan::OID + 0x10
                    result = x21_2[1]
                    
                    if (result != 0)
                        x10_4[-2] = result
                        result = operator delete(result)
                    
                    x10_4 = x21_2
                while (x20_2 != x21_2)
        
        if (x20_2 == 0)
            return result
        
        return operator delete(x20_2) __tailcall
    
    if (x21_1 u>> 0x3b == 0)
        int128_t v0
        result, v0 = operator new(x21_1 << 5)
        goto label_f58148

sub_ef2a0c()
noreturn
