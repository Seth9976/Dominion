// 函数: _Z15LastNCharactersPKci
// 地址: 0xc09830
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t i_1 = zx.d(*arg1)
char const* x19 = arg1
int32_t x8 = 0

if (i_1 != 0)
    uint32_t i = i_1
    char const* x21 = x19
    
    do
        if ((i & 0x80) != 0)
            int32_t x11_1 = i & 0xff
            
            if ((x11_1 & 0xe0) == 0xc0)
                x21 = &x21[1]
            else if ((i & 0xf0) == 0xe0)
                x21 = &x21[2]
            else if ((x11_1 & 0xf8) == 0xf0)
                x21 = &x21[3]
        
        x21 = &x21[1]
        i = zx.d(*x21)
        x8 += 1
    while (i != 0)

int32_t x8_1 = x8 - arg2

if (x8 != arg2 && i_1 != 0)
    do
        if ((i_1 & 0x80) == 0)
            goto label_c098ec
        
        int32_t x10_3 = i_1 & 0xff
        
        if ((x10_3 & 0xe0) == 0xc0)
            int32_t temp2_1 = x8_1
            x8_1 -= 1
            x19 = &x19[2]
            
            if (temp2_1 == 1)
                break
        else if ((i_1 & 0xf0) != 0xe0)
            char const* x19_2
            
            if ((x10_3 & 0xf8) == 0xf0)
                x19_2 = &x19[3]
            else
                x19_2 = x19
            
            int32_t temp3_1 = x8_1
            x8_1 -= 1
            x19 = &x19_2[1]
            
            if (temp3_1 == 1)
                break
        else
            x19 = &x19[2]
        label_c098ec:
            int32_t temp1_1 = x8_1
            x8_1 -= 1
            x19 = &x19[1]
            
            if (temp1_1 == 1)
                break
        
        i_1 = zx.d(*x19)
    while (i_1 != 0)

XString::XString()
char* entry_x8
return XString::AppendUTF8_size(entry_x8, x19.d) __tailcall
