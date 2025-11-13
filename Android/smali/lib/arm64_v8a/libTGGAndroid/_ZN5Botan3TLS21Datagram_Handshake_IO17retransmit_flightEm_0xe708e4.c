// 函数: _ZN5Botan3TLS21Datagram_Handshake_IO17retransmit_flightEm
// 地址: 0xe708e4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = arg1 + 0x40
int64_t x8 = *result
char* var_80
int64_t entry_x1

if (((result[1] - x8) s>> 3) * -0x5555555555555555 u<= entry_x1)
    std::__ndk1::__vector_base_common<true>::__throw_out_of_range()
else
    int64_t* x22_1 = x8 + entry_x1 * 0x18
    int64_t x25_1 = x22_1[1]
    int16_t* x24_1 = *x22_1
    
    if (x25_1 != x24_1)
        int64_t* x27 = *(arg1 + 0x60)
        int64_t* x20
        int64_t* x26
        
        if (x27 != 0)
            uint32_t x8_1 = zx.d(*x24_1)
            x26 = arg1 + 0x60
            
            while (true)
                uint32_t x9_4 = zx.d(x27[4].w)
                
                if (x8_1 u>= x9_4)
                    if (x9_4 u>= x8_1)
                        goto label_e7099c
                    
                    x26 = &x27[1]
                    int64_t* x9_6 = *x26
                    
                    if (x9_6 == 0)
                        goto label_e7099c
                    
                    x27 = x9_6
                else
                    int64_t* x9_5 = *x27
                    
                    if (x9_5 == 0)
                        x26 = x27
                        x20 = *x26
                        
                        if (x20 != 0)
                            break
                        
                        goto label_e709c0
                    
                    x26 = x27
                    x27 = x9_5
            
            goto label_e709a4
        
        x27 = arg1 + 0x60
        x26 = arg1 + 0x60
    label_e7099c:
        x20 = *x26
        
        if (x20 == 0)
        label_e709c0:
            int64_t* x0 = operator new(0x48)
            int16_t x8_2 = *x24_1
            x0[5].w = 0xffff
            x0[1] = 0
            x0[2] = x27
            __builtin_memset(&x0[6], 0, 0x18)
            *x0 = 0
            *(x0 + 0x2c) = 0xff
            x0[4].w = x8_2
            *x26 = x0
            x20 = x0
            int64_t x8_4 = **(arg1 + 0x58)
            int64_t* x1
            
            if (x8_4 == 0)
                x1 = x20
            else
                *(arg1 + 0x58) = x8_4
                x1 = *x26
            
            result =
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                *(arg1 + 0x60), x1)
            *(arg1 + 0x68) += 1
            x24_1 = *x22_1
            x25_1 = x22_1[1]
            
            if (x24_1 != x25_1)
                goto label_e70a34
        else
        label_e709a4:
            
            if (x24_1 != x25_1)
            label_e70a34:
                void* x28_1 = &x20[5]
                
                do
                    uint32_t x21_3 = zx.d(*x28_1)
                    int64_t* x23_1 = *(arg1 + 0x60)
                    uint32_t x20_1 = zx.d(*x24_1)
                    std::__ndk1::__tree_node_base<void*>* x22_2
                    int64_t* x28_2
                    
                    if (x23_1 != 0)
                        x28_2 = arg1 + 0x60
                        
                        while (true)
                            uint32_t x8_7 = zx.d(x23_1[4].w)
                            
                            if (x20_1 u>= x8_7)
                                if (x8_7 u>= x20_1)
                                    goto label_e70aa8
                                
                                x28_2 = &x23_1[1]
                                int64_t* x8_9 = *x28_2
                                
                                if (x8_9 == 0)
                                    goto label_e70aa8
                                
                                x23_1 = x8_9
                            else
                                int64_t* x8_8 = *x23_1
                                
                                if (x8_8 == 0)
                                    x28_2 = x23_1
                                    x22_2 = *x28_2
                                    
                                    if (x22_2 != 0)
                                        break
                                    
                                    goto label_e70ad4
                                
                                x28_2 = x23_1
                                x23_1 = x8_8
                        
                        goto label_e70ab4
                    
                    x23_1 = arg1 + 0x60
                    x28_2 = arg1 + 0x60
                label_e70aa8:
                    x22_2 = *x28_2
                    
                    if (x22_2 == 0)
                    label_e70ad4:
                        std::__ndk1::__tree_node_base<void*>* x0_2 = operator new(0x48)
                        *(x0_2 + 0x28) = 0xffff
                        *(x0_2 + 0x20) = x20_1.w
                        *(x0_2 + 0x2c) = 0xff
                        __builtin_memset(x0_2 + 0x30, 0, 0x18)
                        *x0_2 = 0
                        *(x0_2 + 8) = 0
                        *(x0_2 + 0x10) = x23_1
                        *x28_2 = x0_2
                        x22_2 = x0_2
                        int64_t x8_12 = **(arg1 + 0x58)
                        std::__ndk1::__tree_node_base<void*>* x1_1
                        
                        if (x8_12 == 0)
                            x1_1 = x22_2
                        else
                            *(arg1 + 0x58) = x8_12
                            x1_1 = *x28_2
                        
                        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>(
                            *(arg1 + 0x60), x1_1)
                        *(arg1 + 0x68) += 1
                        x28_1 = x22_2 + 0x28
                        
                        if (zx.d(*x28_1) != x21_3)
                            goto label_e70b48
                    else
                    label_e70ab4:
                        x28_1 = x22_2 + 0x28
                        
                        if (zx.d(*x28_1) != x21_3)
                        label_e70b48:
                            char* x0_4 = operator new(1)
                            *x0_4 = 1
                            uint16_t var_64 = x21_3.w
                            void* var_78_1 = &x0_4[1]
                            void* var_70_1 = &x0_4[1]
                            var_80 = x0_4
                            char var_68 = 0x14
                            int64_t* x0_5 = *(arg1 + 0xc0)
                            
                            if (x0_5 == 0)
                                sub_a58ab4()
                                noreturn
                            
                            (*(*x0_5 + 0x30))(x0_5, &var_64, &var_68, &var_80)
                            char* x0_6 = var_80
                            
                            if (x0_6 != 0)
                                char* var_78_2 = x0_6
                                operator delete(x0_6)
                            
                            x21_3 = zx.d(*x28_1)
                    
                    Botan::TLS::Datagram_Handshake_IO::send_message(arg1.w, x20_1.w, zx.q(x21_3), 
                        zx.q(*(x22_2 + 0x2c)))
                    int64_t* result_1
                    result = result_1
                    
                    if (result != 0)
                        int64_t* result_2 = result
                        result = operator delete(result)
                    
                    x24_1 = &x24_1[1]
                while (x24_1 != x25_1)
        
        return result

int64_t* x0_8 = Botan::assertion_failure("flight.size() > 0", "Nonempty flight to retransmit", 
    "retransmit_flight", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x147d3)
char* x0_9 = var_80

if (x0_9 != 0)
    char* var_78_3 = x0_9
    operator delete(x0_9)

sub_1101e04(x0_8)
noreturn
