// 函数: callback
// 地址: 0x1105604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t dlpi_phnum = zx.q(arg1->dlpi_phnum)

if (dlpi_phnum != 0)
    int64_t x9_1 = *(arg3 + 0x10)
    uint64_t dlpi_addr = arg1->dlpi_addr
    
    if (x9_1 u>= dlpi_addr)
        struct Elf64_Phdr* dlpi_phdr = arg1->dlpi_phdr
        int64_t i = 0
        
        do
            if (*(dlpi_phdr + i) == 1)
                void* x13_1 = dlpi_phdr + i
                int64_t x12_3 = *(x13_1 + 0x10) + dlpi_addr
                
                if (x9_1 u>= x12_3)
                    int64_t x13_2 = *(x13_1 + 0x28)
                    
                    if (x9_1 u< x13_2 + x12_3)
                        int64_t* x9_2 = *(arg3 + 8)
                        int64_t x22_1 = dlpi_phnum - -0xffffffff
                        *x9_2 = x12_3
                        x9_2[1] = x13_2
                        
                        while (true)
                            int64_t x9_3 = x22_1 & 0xffffffff
                            
                            if (dlpi_phdr[x9_3].p_type == 0x6474e550)
                                void* x8_1 = dlpi_phdr + x9_3 * 0x38
                                void* x10_3 = *(arg3 + 8)
                                char* x23_1 = *(x8_1 + 0x10) + dlpi_addr
                                *(x10_3 + 0x20) = x23_1
                                int64_t x24_1 = *(x8_1 + 0x28)
                                *(x10_3 + 0x28) = x24_1
                                int64_t x25_1 = *arg3
                                void* var_68 = &x23_1[1]
                                
                                if (zx.d(*x23_1) == 1)
                                    var_68 = &x23_1[2]
                                    uint32_t x3_2 = zx.d(x23_1[1])
                                    var_68 = &x23_1[3]
                                    uint32_t x20_2 = zx.d(x23_1[2])
                                    var_68 = &x23_1[4]
                                    int64_t x0_2 = sub_11046b8(x25_1, &var_68, x24_1, x3_2, x23_1)
                                    
                                    if (x20_2 != 0xff)
                                        sub_11046b8(x25_1, &var_68, x24_1, x20_2, x23_1)
                                    
                                    void* x8_6 = *(arg3 + 8)
                                    *(x8_6 + 0x10) = x0_2
                                    *(x8_6 + 0x18) = -1
                                    return 1
                                
                                fwrite("libunwind: Unsupported .eh_frame_hdr version\n", 0x2d, 1, 
                                    __sF + 0x130)
                            
                            dlpi_phnum = zx.q(dlpi_phnum.d - 1)
                            
                            if ((dlpi_phnum.d & 0xffff) == 0)
                                break
                            
                            dlpi_phdr = arg1->dlpi_phdr
                            x22_1 -= 1
                        
                        break
            
            i += 0x38
        while (dlpi_phnum * 0x38 != i)

return 0
