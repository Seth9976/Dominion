// 函数: _ZN5Botan11SecureQueue5writeEPKhm
// 地址: 0xd7d7e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x2
size_t x19 = entry_x2
uint64_t x21 = arg2

if (*(arg1 + 0x60) == 0)
    int64_t* x0 = operator new(0x30)
    x0[1] = 0
    x0[2] = 0
    x0[3] = 0
    int64_t x0_1 = Botan::allocate_memory(0x400, 1)
    x0[1] = x0_1
    x0[3] = x0_1 + 0x400
    memset(x0_1, 0, 0x400)
    x0[2] = x0_1 + 0x400
    *x0 = 0
    x0[4] = 0
    x0[5] = 0
    *(arg1 + 0x60) = x0
    *(arg1 + 0x68) = x0
    
    if (x19 != 0)
    label_d7d864:
        void* x22_2 = *(arg1 + 0x68)
        
        while (true)
            int64_t x9_1 = *(x22_2 + 8)
            int64_t x8_1 = *(x22_2 + 0x28)
            size_t x10_3 = *(x22_2 + 0x10) - x9_1 - x8_1
            size_t x23_4
            
            x23_4 = x10_3 u< x19 ? x10_3 : x19
            
            if (x23_4 != 0)
                if (x21 == 0 || x9_1 == 0)
                    int64_t* x0_5 = Botan::assertion_failure(
                        "n > 0 implies in != nullptr && out != nullptr", 
                        "If n > 0 then args are not null", "copy_mem", 
                        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
                    void* x8_5 = *x23_4
                    
                    if (x8_5 != 0)
                        int64_t x9_2 = *(x22_2 + 0x18)
                        *(x22_2 + 0x10) = x8_5
                        Botan::deallocate_memory(x8_5, x9_2 - x8_5, 1)
                    
                    operator delete(x22_2)
                    sub_1101e04(x0_5)
                    noreturn
                
                memmove(x9_1 + x8_1, x21, x23_4)
                x8_1 = *(x22_2 + 0x28)
            
            size_t temp0_1 = x19
            x19 -= x23_4
            *(x22_2 + 0x28) = x8_1 + x23_4
            
            if (temp0_1 == x23_4)
                break
            
            int64_t* x0_3 = operator new(0x30)
            x0_3[1] = 0
            x0_3[2] = 0
            x0_3[3] = 0
            int64_t x0_4 = Botan::allocate_memory(0x400, 1)
            x21 += x23_4
            x0_3[1] = x0_4
            x0_3[3] = x0_4 + 0x400
            memset(x0_4, 0, 0x400)
            x0_3[2] = x0_4 + 0x400
            *x0_3 = 0
            x0_3[4] = 0
            x0_3[5] = 0
            **(arg1 + 0x68) = x0_3
            x22_2 = **(arg1 + 0x68)
            *(arg1 + 0x68) = x22_2
else if (x19 != 0)
    goto label_d7d864
