// 函数: _ZNSt6__ndk16vectorIN5Botan3OIDENS_9allocatorIS2_EEE21__push_back_slow_pathIRKS2_EEvOT_
// 地址: 0xf562f4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

Botan::OID const& x27 = *arg1
Botan::OID const& x19 = arg1[1]
int64_t fp = (x19 - x27) s>> 5

if ((fp + 1) u>> 0x3b != 0)
    std::__ndk1::__vector_base_common<true>::__throw_length_error()
else
    void* x9_2 = arg1[2] - x27
    int64_t x11_1 = x9_2 s>> 4
    int64_t x8_2
    
    if (x11_1 u< fp + 1)
        x8_2 = fp + 1
    else
        x8_2 = x11_1
    
    int64_t x26_1
    
    if (0x3ffffffffffffff u> x9_2 s>> 5)
        x26_1 = x8_2
    else
        x26_1 = 0x7ffffffffffffff
    
    Botan::OID const&&& x21
    
    if (x26_1 == 0)
        x21 = nullptr
    label_f56378:
        void* x28 = &x21[fp * 4]
        *(x28 + 0x10) = 0
        *(x28 + 0x18) = 0
        *x28 = _vtable_for_Botan::OID + 0x10
        *(x28 + 8) = 0
        void* entry_x1
        int64_t x24 = *(entry_x1 + 8)
        int64_t x8_5 = *(entry_x1 + 0x10)
        uint64_t x22_2 = x8_5 - x24
        
        if (x8_5 != x24)
            if ((x22_2 & 0xffffffff80000000) != 0)
                int64_t* x0_8 = std::__ndk1::__vector_base_common<true>::__throw_length_error()
                void* x8_11 = *(x28 + 8)
                
                if (x8_11 != 0)
                    x21[fp * 4 + 2] = x8_11
                    operator delete(x8_11)
                
                operator delete(x21)
                sub_1101e04(x0_8)
                noreturn
            
            int64_t x0_2 = operator new(x22_2)
            void* fp_1 = &x21[fp * 4]
            *(x28 + 8) = x0_2
            *(fp_1 + 0x10) = x0_2
            *(fp_1 + 0x18) = x0_2 + (x22_2 s>> 2 << 2)
            memcpy(x0_2, x24, x22_2)
            *(fp_1 + 0x10) = x0_2 + x22_2
        
        void* x8_9 = &x21[x26_1 * 4]
        
        if (x19 == x27)
            *arg1 = x28
            arg1[1] = x28 + 0x20
            arg1[2] = x8_9
        else
            int64_t i = 0
            
            do
                void* x13_1 = x28 + i
                void* x14_1 = x19 + i
                *(x13_1 - 0x20) = _vtable_for_Botan::OID + 0x10
                __builtin_memset(x13_1 - 0x18, 0, 0x18)
                i -= 0x20
                *(x13_1 - 0x18) = *(x14_1 - 0x18)
                *(x13_1 - 0x10) = *(x14_1 - 0x10)
                *(x13_1 - 8) = *(x14_1 - 8)
                __builtin_memset(x14_1 - 0x18, 0, 0x18)
            while (x27 - x19 != i)
            
            x19 = *arg1
            void** x11_3 = arg1[1]
            *arg1 = x28 + i
            arg1[1] = x28 + 0x20
            arg1[2] = x8_9
            
            if (x11_3 != x19)
                void** x21_1 = x11_3
                
                do
                    x21_1 = &x21_1[-4]
                    *x21_1 = _vtable_for_Botan::OID + 0x10
                    arg1 = x21_1[1]
                    
                    if (arg1 != 0)
                        x11_3[-2] = arg1
                        operator delete(arg1)
                    
                    x11_3 = x21_1
                while (x19 != x21_1)
        
        if (x19 == 0)
            return 
        
        return operator delete(x19) __tailcall
    
    if (x26_1 u>> 0x3b == 0)
        x21 = operator new(x26_1 << 5)
        goto label_f56378

sub_ef2a0c()
noreturn
