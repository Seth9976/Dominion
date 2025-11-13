// 函数: _ZN5Botan3TLS21Datagram_Handshake_IO16send_under_epochERKNS0_17Handshake_MessageEt
// 地址: 0xe71fbc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x22 = arg2
(*(*arg2 + 8))(arg2)
int32_t x0_2
int128_t v0
x0_2, v0 = (**x22)(x22)
void* result_1
int32_t entry_x2
int64_t entry_x8

if (x0_2 == 3)
    Botan::TLS::Datagram_Handshake_IO::send_message(arg1.w, *(arg1 + 0x92), zx.q(entry_x2), 3)
    void* var_98
    
    if (var_98 != 0)
        void* var_90_1 = var_98
        operator delete(var_98)
    
    *(arg1 + 0x92) += 1
    __builtin_memset(entry_x8, 0, 0x18)
else
    int16_t var_b8
    
    if (x0_2 != 0xfe)
        void* x26_1 = *(arg1 + 0x48)
        int16_t* x8_6 = *(x26_1 - 0x10)
        
        if (x8_6 == *(x26_1 - 8))
            void* x23_1 = *(x26_1 - 0x18)
            void* x24_1 = x8_6 - x23_1
            
            if (x24_1 s<= -3)
                goto label_e72334
            
            int64_t x27_1 = x24_1 s>> 1
            void* x9_5
            
            if (x24_1 u< x27_1 + 1)
                x9_5 = x27_1 + 1
            else
                x9_5 = x24_1
            
            void* x28_1
            
            x28_1 = x27_1 u< 0x3fffffffffffffff ? x9_5 : 0x7fffffffffffffff
            
            int64_t x25_1
            
            if (x28_1 == 0)
                x25_1 = 0
            else
                if ((x28_1 & 0xffffffff80000000) != 0)
                    sub_ef2a0c()
                    noreturn
                
                int64_t x0_8
                x0_8, v0 = operator new(x28_1 << 1)
                x25_1 = x0_8
            
            int16_t* fp_1 = x25_1 + (x27_1 << 1)
            *fp_1 = *(arg1 + 0x92)
            
            if (x24_1 s>= 1)
                memcpy(x25_1, x23_1, x24_1)
            
            *(x26_1 - 0x18) = x25_1
            *(x26_1 - 0x10) = &fp_1[1]
            *(x26_1 - 8) = x25_1 + (x28_1 << 1)
            
            if (x23_1 != 0)
                operator delete(x23_1)
            
            goto label_e72140
        
        *x8_6 = *(arg1 + 0x92)
        *(x26_1 - 0x10) = &x8_6[1]
    label_e72140:
        void* result_3 = result_1
        var_b8 = entry_x2.w
        int32_t var_b4_1 = x0_2
        int64_t var_78
        size_t x25_2 = var_78 - result_3
        int64_t var_b0_1
        __builtin_memset(&var_b0_1, 0, 0x18)
        int64_t var_a0_1
        void* __offset(Botan::TLS::Handshake_Message, 0x60) x25_4
        void* __offset(Botan::TLS::Handshake_Message, 0x60) x26_3
        
        if (var_78 != result_3)
            if ((x25_2 & 0xffffffff80000000) != 0)
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
            label_e72334:
                std::__ndk1::__vector_base_common<true>::__throw_length_error()
                sub_ef2a0c()
                noreturn
            
            int64_t x0_12 = operator new(x25_2)
            int64_t x26_2 = x0_12 + x25_2
            var_b0_1 = x0_12
            int64_t var_a8_1 = x0_12
            var_a0_1 = x26_2
            memcpy(x0_12, result_3, x25_2)
            int64_t var_a8_2 = x26_2
            x25_4 = arg1 + 0x60
            x26_3 = *x25_4
            
            if (x26_3 == 0)
                goto label_e721e8
            
            goto label_e72194
        
        x25_4 = arg1 + 0x60
        x26_3 = *x25_4
        std::__ndk1::__tree_node_base<void*>* x24_2
        
        if (x26_3 != 0)
        label_e72194:
            uint32_t x8_10 = zx.d(*(arg1 + 0x92))
            x25_4 = arg1 + 0x60
            
            while (true)
                uint32_t x9_6 = zx.d(*(x26_3 + 0x20))
                
                if (x8_10 u>= x9_6)
                    if (x9_6 u>= x8_10)
                        goto label_e721ec
                    
                    x25_4 = x26_3 + 8
                    void* x9_8 = *x25_4
                    
                    if (x9_8 == 0)
                        goto label_e721ec
                    
                    x26_3 = x9_8
                else
                    void* x9_7 = *x26_3
                    
                    if (x9_7 == 0)
                        x25_4 = x26_3
                        x24_2 = *x25_4
                        
                        if (x24_2 != 0)
                            goto label_e72274
                        
                        break
                    
                    x25_4 = x26_3
                    x26_3 = x9_7
            
            goto label_e721f8
        
    label_e721e8:
        x26_3 = x25_4
    label_e721ec:
        x24_2 = *x25_4
        
        if (x24_2 == 0)
        label_e721f8:
            std::__ndk1::__tree_node_base<void*>* x0_13 = operator new(0x48)
            int16_t x8_11 = *(arg1 + 0x92)
            __builtin_memset(x0_13 + 0x30, 0, 0x18)
            *x0_13 = 0
            *(x0_13 + 8) = 0
            *(x0_13 + 0x10) = x26_3
            *(x0_13 + 0x28) = 0xffff
            *(x0_13 + 0x2c) = 0xff
            *(x0_13 + 0x20) = x8_11
            *x25_4 = x0_13
            x24_2 = x0_13
            int64_t x8_13 = **(arg1 + 0x58)
            std::__ndk1::__tree_node_base<void*>* x1_4
            
            if (x8_13 == 0)
                x1_4 = x24_2
            else
                *(arg1 + 0x58) = x8_13
                x1_4 = *x25_4
            
            std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                *(arg1 + 0x60), x1_4)
            *(arg1 + 0x68) += 1
        
    label_e72274:
        void* x0_15 = *(x24_2 + 0x30)
        *(x24_2 + 0x28) = var_b8.q
        
        if (x0_15 != 0)
            *(x24_2 + 0x38) = x0_15
            operator delete(x0_15)
            __builtin_memset(x24_2 + 0x30, 0, 0x18)
        
        *(x24_2 + 0x30) = var_b0_1.o
        *(x24_2 + 0x40) = var_a0_1
        *(arg1 + 0x92) += 1
        int64_t x0_16 = std::__ndk1::chrono::steady_clock::now()
        int64_t x9_9 = *(arg1 + 0x70)
        uint16_t x1_5 = *(arg1 + 0x92) - 1
        *(arg1 + 0x80) = x0_16 s/ 0xf4240
        *(arg1 + 0x88) = x9_9
        Botan::TLS::Datagram_Handshake_IO::send_message(arg1.w, x1_5, zx.q(entry_x2), zx.q(x0_2))
    else
        var_b8 = entry_x2.w
        char var_64 = 0x14
        int64_t* x0_3 = *(arg1 + 0xc0)
        
        if (x0_3 == 0)
            sub_a58ab4()
            noreturn
        
        (*(*x0_3 + 0x30))(x0_3, &var_b8, &var_64, &result_1)
        __builtin_memset(entry_x8, 0, 0x18)
void* result = result_1

if (result == 0)
    return result

void* result_2 = result
return operator delete(result)
