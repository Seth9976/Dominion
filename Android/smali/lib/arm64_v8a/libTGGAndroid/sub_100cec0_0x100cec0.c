// 函数: sub_100cec0
// 地址: 0x100cec0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x8 = (arg2 u>> 0x20).d

if ((x8 & 0x80000000) != 0)
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
        0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
    __assert2("C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
        0x4ed, "stbtt__buf stbtt__cff_index_get(stbtt__buf, int)", "i >= 0 && i < count")
else
    uint32_t x10_1
    int32_t x11_1
    
    if (x8 != 0)
        x11_1 = 1
        x10_1 = zx.d(*arg1) << 8
        
        if (1 s>= x8)
            goto label_100cf0c
        
        goto label_100cee4
    
    x11_1 = 0
    x10_1 = 0
    uint32_t x9_2
    uint32_t x12_1
    
    if (0 s< x8)
    label_100cee4:
        x12_1 = zx.d(arg1[zx.q(x11_1)])
        x11_1 += 1
        
        if (x11_1 s< x8)
            x9_2 = zx.d(arg1[zx.q(x11_1)])
            x11_1 += 1
        else
            x9_2 = 0
    else
    label_100cf0c:
        x12_1 = 0
        
        if (x11_1 s>= x8)
            x9_2 = 0
        else
            x9_2 = zx.d(arg1[zx.q(x11_1)])
            x11_1 += 1
    
    if ((arg3 & 0x80000000) != 0)
        __assert2(
            "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
            0x4ed, "stbtt__buf stbtt__cff_index_get(stbtt__buf, int)", "i >= 0 && i < count")
    else
        uint32_t x10_2 = x10_1 | x12_1
        
        if (x10_2 s<= arg3)
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0x4ed, "stbtt__buf stbtt__cff_index_get(stbtt__buf, int)", "i >= 0 && i < count")
        else if (x9_2 - 1 u< 4)
            int32_t x11_2 = x11_1 + x9_2 * arg3
            
            if ((x11_2 & 0x80000000) == 0 && x11_2 s<= x8)
                int32_t x12_3 = 0
                uint32_t x13 = x9_2
                int32_t x14 = x11_2
                
                while (true)
                    if (x14 s< x8)
                        uint32_t x15_1 = zx.d(arg1[sx.q(x14)])
                        x11_2 = x14 + 1
                        x14 = x11_2
                        uint32_t temp0_1 = x13
                        x13 -= 1
                        x12_3 = x12_3 << 8 | x15_1
                        
                        if (temp0_1 == 1)
                            break
                    else
                        uint32_t temp1_1 = x13
                        x13 -= 1
                        x12_3 <<= 8
                        
                        if (temp1_1 == 1)
                            break
                
                uint32_t x14_1 = x9_2
                
                while (true)
                    if (x11_2 s< x8)
                        uint32_t x15_2 = zx.d(arg1[sx.q(x11_2)])
                        x11_2 += 1
                        uint32_t temp2_1 = x14_1
                        x14_1 -= 1
                        x13 = x13 << 8 | x15_2
                        
                        if (temp2_1 == 1)
                            break
                    else
                        uint32_t temp3_1 = x14_1
                        x14_1 -= 1
                        x13 <<= 8
                        
                        if (temp3_1 == 1)
                            break
                
                uint64_t x9_4 = zx.q(x13 - x12_3)
                
                if (((x9_4.d | (x12_3 + (x10_2 + 1) * x9_2 + 2)) & 0x80000000) != 0)
                    return 0
                
                void* result = nullptr
                
                if (x8 s< x12_3 + (x10_2 + 1) * x9_2 + 2)
                    return 0
                
                if (x8 - (x12_3 + (x10_2 + 1) * x9_2 + 2) s>= x9_4.d)
                    result = &arg1[sx.q(x12_3 + (x10_2 + 1) * x9_2 + 2)]
                
                return result
            
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0x478, "void stbtt__buf_seek(stbtt__buf *, int)", "!(o > b->size || o < 0)")
            __assert2(
                "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 
                0x4ed, "stbtt__buf stbtt__cff_index_get(stbtt__buf, int)", "i >= 0 && i < count")

int32_t* x0_3
float v0
float v1
x0_3, v0, v1 = __assert2(
    "C:\x\ax2017\Engine\android\AndroidEngine\..\..\/ExternalCode/stb/stb_truetype.h", 0x4ee, 
    "stbtt__buf stbtt__cff_index_get(stbtt__buf, int)", "offsize >= 1 && offsize <= 4")
return sub_100d098(x0_3, v0, v1) __tailcall
