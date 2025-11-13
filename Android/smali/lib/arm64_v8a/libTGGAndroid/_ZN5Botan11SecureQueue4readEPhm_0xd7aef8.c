// 函数: _ZN5Botan11SecureQueue4readEPhm
// 地址: 0xd7aef8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

size_t entry_x2
int64_t result

if (entry_x2 == 0)
    result = 0
else
    void** i = *(arg1 + 0x60)
    size_t x20_1 = entry_x2
    uint64_t x21_1 = arg2
    result = 0
    
    while (i != 0)
        int64_t x8_1 = i[4]
        size_t x9_2 = i[5] - x8_1
        size_t x23_1
        
        x23_1 = x9_2 u< x20_1 ? x9_2 : x20_1
        
        if (x23_1 != 0)
            int64_t x9_3
            
            if (x21_1 != 0)
                x9_3 = i[1]
            
            if (x21_1 == 0 || x9_3 == 0)
                sub_c776cc(Botan::assertion_failure(
                    "n > 0 implies in != nullptr && out != nullptr", 
                    "If n > 0 then args are not null", "copy_mem", 
                    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401))
                noreturn
            
            memmove(x21_1, x9_3 + x8_1, x23_1)
            x8_1 = i[4]
        
        i[4] = x8_1 + x23_1
        void** i_1 = *(arg1 + 0x60)
        
        if (i_1[5] != i_1[4])
            i = i_1
            x21_1 += x23_1
            x20_1 -= x23_1
            result += x23_1
            
            if (x20_1 == 0)
                break
        else
            i = *i_1
            void* x0_1 = i_1[1]
            *i_1 = nullptr
            i_1[4] = 0
            i_1[5] = 0
            
            if (x0_1 != 0)
                int64_t x8_5 = i_1[3]
                i_1[2] = x0_1
                Botan::deallocate_memory(x0_1, x8_5 - x0_1, 1)
            
            operator delete(i_1)
            *(arg1 + 0x60) = i
            x21_1 += x23_1
            x20_1 -= x23_1
            result += x23_1
            
            if (x20_1 == 0)
                break

*(arg1 + 0x58) += result
return result
