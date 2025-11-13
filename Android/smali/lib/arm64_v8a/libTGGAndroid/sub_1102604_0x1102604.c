// 函数: sub_1102604
// 地址: 0x1102604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* var_48 = arg2
uint64_t x23 = zx.q(*arg2)
void* x24_1 = &arg2[1]
var_48 = x24_1

if (x23.d == 0xffffffff)
    x23 = *(arg2 + 4)
    x24_1 = &arg2[3]
    var_48 = x24_1
    
    if (x23 == 0)
        return "FDE has zero length"
else if (x23 == 0)
    return "FDE has zero length"

uint64_t x8_1 = zx.q(*x24_1)

if (x8_1.d == 0)
    return "FDE is really a CIE"

char* result = sub_1105c18(arg1, x24_1 - x8_1, arg4)

if (result == 0)
    var_48 = x24_1 + 4
    void* x23_1 = x24_1 + x23
    int64_t x0_2 = sub_11046b8(arg1, &var_48, x23_1, zx.d(arg4[3].b), 0)
    int64_t x0_4 = sub_11046b8(arg1, &var_48, x23_1, zx.d(arg4[3].b) & 0xf, 0)
    arg3[5] = 0
    void* x26_1 = var_48
    
    if (zx.d(*(arg4 + 0x31)) != 0)
        int64_t x10_1 = 0
        int64_t x8_5 = 0
        int64_t x9_1 = neg.q(x26_1)
        
        while (true)
            char const* const x3_4
            int64_t (* x19_1)()
            
            if (x23_1 == x26_1)
                x19_1 = __sF + 0x130
                x3_4 = "truncated uleb128 expression"
            else
                if (x10_1 u<= 0x3f)
                    uint64_t x11_1 = zx.q(*x26_1)
                    int64_t x13_1 = x11_1 & 0x7f
                    int64_t x12_1 = x13_1 << x10_1
                    
                    if (x12_1 u>> x10_1 == x13_1)
                        x8_5 |= x12_1
                        x10_1 += 7
                        x26_1 += 1
                        x9_1 -= 1
                        
                        if ((sx.d((x11_1.d).b) & 0x80000000) == 0)
                            break
                        
                        continue
                
                x19_1 = __sF + 0x130
                x3_4 = "malformed uleb128 expression"
            
            fprintf(x19_1, "libunwind: %s - %s\n", "getULEB128", x3_4)
            fflush(x19_1)
            abort()
            noreturn
        
        int64_t x27_1 = neg.q(x9_1)
        var_48 = x27_1
        uint32_t x10_2 = zx.d(*(arg4 + 0x19))
        x26_1 = x8_5 - x9_1
        
        if (x10_2 != 0xff && sub_11046b8(arg1, &var_48, x23_1, x10_2 & 0xf, 0) != 0)
            var_48 = x27_1
            arg3[5] = sub_11046b8(arg1, &var_48, x23_1, zx.d(*(arg4 + 0x19)), 0)
    
    result = nullptr
    arg3[2] = x26_1
    arg3[3] = x0_2
    *arg3 = arg2
    arg3[1] = x23_1 - arg2
    arg3[4] = x0_4 + x0_2

return result
