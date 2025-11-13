// 函数: _Z17StyleFindOverridePK9AttribMapPKc
// 地址: 0x101521c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg1 != 0)
    int64_t* x0_1 = AttribMapGetDef(*gUI2AttribTable, arg1, *macro_ptr_UI2StateOverrides, 0x69)
    
    if (x0_1 != 0)
        int64_t x21_1 = sx.q(x0_1[1].d)
        
        if (x21_1.d s>= 1)
            int64_t x22_1 = 0
            void* result = *x0_1 + 0x18
            
            do
                if (strcmp(arg2, *(result - 0x18)) == 0)
                    return result
                
                x22_1 += 1
                result += 0x30
            while (x22_1 s< x21_1)

return nullptr
