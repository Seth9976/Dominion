// 函数: sub_100d6e0
// 地址: 0x100d6e0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t var_30 = arg1
int64_t var_28 = arg2
int64_t var_40 = arg3
int64_t x3
int64_t var_38 = x3
int32_t var_44 = 0
int64_t var_50 = 0
sub_100d7ec(&var_40, 0x12, 2, &var_50)
int64_t x21 = sx.q(var_50:4.d)

if (x21.d != 0)
    uint64_t x8_1 = zx.q(var_50.d)
    
    if (x8_1.d != 0)
        uint32_t x20_1 = (arg2 u>> 0x20).d
        int64_t x9_2
        uint64_t x10_2
        
        if (((x8_1.d | x21.d) & 0x80000000) != 0)
            x9_2 = 0
            x10_2 = 0
        else
            x9_2 = 0
            
            if (x20_1 s< x21.d)
                x10_2 = 0
            else
                x10_2 = 0
                
                if (x20_1 - x21.d s>= x8_1.d)
                    x9_2 = arg1 + x21
                    x10_2 = x8_1 << 0x20
        
        int64_t var_60 = x9_2
        uint64_t var_58_1 = x10_2
        sub_100d7ec(&var_60, 0x13, 1, &var_44)
        int32_t x8_2 = var_44
        
        if (x8_2 != 0)
            int32_t x8_3 = x8_2 + x21.d
            
            if (x8_2 + x21.d s>= 0 && x8_3 s<= x20_1)
                var_28.d = x8_3
                return sub_100da24(&var_30)
            
            uint64_t x0_5
            int32_t x1_1
            int32_t x2
            int64_t x3_3
            x0_5, x1_1, x2, x3_3 = __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
            return sub_100d7ec(x0_5, x1_1, x2, x3_3) __tailcall

return 0
