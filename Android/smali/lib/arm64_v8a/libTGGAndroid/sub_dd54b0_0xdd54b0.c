// 函数: sub_dd54b0
// 地址: 0xdd54b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = *arg2
int64_t x8 = arg2[1]

if ((neg.d((x8.d - x9.d) u>> 3) & 1) == 0)
    int64_t x23_1 = *arg1
    int64_t x25_1 = arg1[1]
    int64_t* x21_1 = arg1
    size_t x22_1 = x25_1 - x23_1
    int64_t i = x22_1 s>> 2
    
    if (x25_1 == x23_1)
        if (x8 == x9)
            return 
        
        int64_t x8_5 = ((x8 - x9) s>> 3) * 0x6db6db6db6db6db7
        void* x9_1 = x9 + 0x50
        
        while (i u<= (*(x9_1 - 0x38) - *(x9_1 - 0x40)) s>> 2)
            if (i u> (*x9_1 - *(x9_1 - 8)) s>> 2)
                break
            
            int64_t temp1_1 = x8_5
            x8_5 -= 2
            x9_1 += 0x70
            
            if (temp1_1 == 2)
                return 
    else
        memset(x23_1, 0, x22_1)
        int64_t x13_1 = *arg2
        
        if (arg2[1] == x13_1)
            return 
        
        size_t x11_1
        
        x11_1 = x22_1 s>= 0 ? x22_1 : -1
        
        size_t x10_2 = x23_1 - x25_1
        size_t x11_2
        
        x11_2 = x11_1 s< 1 ? x11_1 : 1
        
        size_t x10_3
        
        x10_3 = x10_2 s> x22_1 ? x10_2 : x22_1
        
        int64_t x8_2 = 0
        
        while (true)
            int32_t* x14_1 = *(x13_1 + x8_2 * 0x38 + 0x10)
            
            if (i u> (*(x13_1 + x8_2 * 0x38 + 0x18) - x14_1) s>> 2)
                break
            
            int64_t x15_3 = x8_2 | 1
            
            if (i u> (*(x13_1 + x15_3 * 0x38 + 0x18) - *(x13_1 + x15_3 * 0x38 + 0x10)) s>> 2)
                break
            
            int32_t* x16_3 = *x21_1
            int32_t x17_2 = x8_2.d ^ arg3
            int32_t x14_4 = ((x17_2 - 1) & not.d(x17_2)) s>> 0x1f
            *x16_3 |= *x14_1 & x14_4
            int32_t* x17_5 = *x21_1
            int32_t x15_4 = x15_3.d ^ arg3
            int32_t x15_6 = ((x15_4 - 1) & not.d(x15_4)) s>> 0x1f
            *x17_5 |= **(x13_1 + x15_3 * 0x38 + 0x10) & x15_6
            
            if (x22_1 != 4)
                int64_t i_1 = 1
                
                do
                    int32_t* x0_2 = *x21_1
                    int64_t x1_2 = i_1 << 2
                    i_1 += 1
                    x0_2[i_1] |= (*(x13_1 + x8_2 * 0x38 + 0x10))[i_1] & x14_4
                    arg1 = *x21_1
                    *(arg1 + x1_2) |= (*(x13_1 + x15_3 * 0x38 + 0x10))[i_1] & x15_6
                while (x11_2 * (x10_3 u>> 2) != i_1)
            
            x13_1 = *arg2
            x8_2 += 2
            
            if (x8_2 == ((arg2[1] - x13_1) s>> 3) * 0x6db6db6db6db6db7)
                return 
    
    Botan::assertion_failure("vec_0.size() >= words && vec_1.size() >= words", &data_793a18, 
        "const_time_lookup", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe720)

return Botan::Montgomery_Exponentation_State::exponentiation_vartime(Botan::assertion_failure(
    "g.size() % 2 == 0", &data_793a18, "const_time_lookup", 
    "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0xe715)) __tailcall
