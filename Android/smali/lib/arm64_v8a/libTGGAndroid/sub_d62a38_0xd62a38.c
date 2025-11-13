// 函数: sub_d62a38
// 地址: 0xd62a38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = (**arg1)()
int32_t x25_1

if ((x0 << 3) + 9 u> arg4 || arg3[1] - *arg3 != x0)
    x25_1 = 0
else
    int64_t x8_6 = *arg2
    uint64_t x23_1 = (arg4 + 7) u>> 3
    x25_1 = 0
    void* x9_3 = arg2[1] - x8_6
    
    if (x9_3 u<= x23_1 && x9_3 u>= 2)
        if (zx.d(*(x9_3 + x8_6 - 1)) != 0xbc)
            x25_1 = 0
        else
            uint8_t* var_70
            std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::vector(&var_70)
            void* var_68
            
            if (var_68 - var_70 u< x23_1)
                void* x0_3 = Botan::allocate_memory(x23_1, 1)
                memset(x0_3, 0, x23_1)
                uint8_t* x1_1 = var_70
                size_t x2_1 = var_68 - x1_1
                
                if (x23_1 u< x2_1)
                    Botan::assertion_failure("buf_offset <= buf.size()", &data_793a18, 
                        "buffer_insert", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x46f)
                    sub_c776cc(Botan::assertion_failure(
                        "n > 0 implies in != nullptr && out != nullptr", 
                        "If n > 0 then args are not null", "copy_mem", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
                    noreturn
                
                if (x2_1 != 0)
                    if (x1_1 == 0)
                        sub_c776cc(Botan::assertion_failure(
                            "n > 0 implies in != nullptr && out != nullptr", 
                            "If n > 0 then args are not null", "copy_mem", 
                            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
                        noreturn
                    
                    memmove(x0_3 + x23_1 - x2_1, x1_1, x2_1)
                
                std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
                    &var_70, x0_3)
                
                if (x0_3 != 0)
                    Botan::deallocate_memory(x0_3, x23_1, 1)
            
            uint8_t* x23_2 = var_70
            int64_t x27_2 = ((arg4 + 7) & 0xfffffffffffffff8) - arg4
            uint32_t x8_13 = zx.d(*x23_2)
            uint64_t x9_6 = zx.q(x8_13 u> 0xf ? 1 : 0)
            uint32_t x8_14 = x8_13 u>> (x9_6 << 2).d
            uint64_t x11_3 = zx.q(x8_14 u> 3 ? 1 : 0) << 1
            uint32_t x8_15 = x8_14 u>> x11_3.d
            int32_t temp0_1 = x8_15 & 0xfe
            int64_t x9_8
            
            x9_8 = temp0_1 == 0 ? 8 : 7
            
            if (x27_2 u> x9_8
                - (((-5 & x11_3) | (1 & x9_6) << 2) + zx.q(x8_15 u>> (temp0_1 != 0 ? 1 : 0))))
            label_d62de4:
                x25_1 = 0
            else
                int64_t x26_1 = not.q(x0)
                uint64_t x24_1 = var_68 - x23_2 + x26_1
                Botan::mgf1_mask(arg1, var_68 + x26_1, x0, x23_2, x24_1)
                uint8_t i_3 = *x23_2 & (0xff u>> x27_2.d).b
                *x23_2 = i_3
                
                if (x24_1 == 0)
                label_d62de4_1:
                    x25_1 = 0
                else
                    void* x27_3 = var_68 - x0 - x23_2
                    int64_t x24_2 = 0
                    uint32_t i
                    char i_4
                    
                    for (i = zx.d(i_3); i == 0; i = zx.d(i_4))
                        if (x27_3 - 2 == x24_2)
                            goto label_d62de4_2
                        
                        i_4 = x23_2[1 + x24_2]
                        x24_2 += 1
                    
                    if (i != 1 || x24_2 == -1)
                    label_d62de4_2:
                        x25_1 = 0
                    else
                        char var_88 = 0
                        (*(*arg1 + 0x18))(arg1, &var_88, 1)
                        var_88 = 0
                        (*(*arg1 + 0x18))(arg1, &var_88, 1)
                        var_88 = 0
                        (*(*arg1 + 0x18))(arg1, &var_88, 1)
                        var_88 = 0
                        (*(*arg1 + 0x18))(arg1, &var_88, 1)
                        var_88 = 0
                        (*(*arg1 + 0x18))(arg1, &var_88, 1)
                        var_88 = 0
                        (*(*arg1 + 0x18))(arg1, &var_88, 1)
                        var_88 = 0
                        (*(*arg1 + 0x18))(arg1, &var_88, 1)
                        var_88 = 0
                        (*(*arg1 + 0x18))(arg1, &var_88, 1)
                        int64_t x1_13 = *arg3
                        (*(*arg1 + 0x18))(arg1, x1_13, arg3[1] - x1_13)
                        (*(*arg1 + 0x18))(arg1, &x23_2[x24_2 + 1], x27_3 - x24_2 - 2)
                        Botan::Buffered_Computation::final()
                        char* x0_19 = var_88.q
                        char var_54_1 = 0
                        
                        if (x0 != 0)
                            int64_t i_2 = x26_1 + 1
                            char* x9_13 = x0_19
                            int64_t i_1
                            
                            do
                                char x10_4 = *(var_68 + i_2 - 1)
                                char x11_5 = *x9_13
                                x9_13 = &x9_13[1]
                                i_1 = i_2
                                i_2 += 1
                                var_54_1 |= x11_5 ^ x10_4
                            while (i_1 u< -1)
                        
                        uint32_t x8_42 = zx.d(var_54_1)
                        int32_t x8_44 = sx.d((x8_42.b - 1) & (not.d(x8_42)).b)
                        x25_1 = x8_44 s< 0 ? 1 : 0
                        
                        if (arg5 != 0 && (x8_44 & 0x80000000) != 0)
                            *arg5 = x27_3 - x24_2 - 2
                        
                        if (x0_19 != 0)
                            char* var_80_1 = x0_19
                            int64_t var_78
                            Botan::deallocate_memory(x0_19, var_78 - x0_19, 1)
            
            uint8_t* x0_21 = var_70
            
            if (x0_21 != 0)
                uint8_t* var_68_1 = x0_21
                int64_t var_60
                Botan::deallocate_memory(x0_21, var_60 - x0_21, 1)

return zx.q(x25_1)
