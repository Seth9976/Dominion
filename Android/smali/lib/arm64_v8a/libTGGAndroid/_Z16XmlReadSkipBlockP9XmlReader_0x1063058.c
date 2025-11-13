// 函数: _Z16XmlReadSkipBlockP9XmlReader
// 地址: 0x1063058
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t i = *(arg1 + 8)
int32_t x9 = *(arg1 + 0x140)
int32_t x20 = 0
int32_t x21

if (i == 1)
    x21 = x9 + 1
else
    x21 = x9

int32_t x23_1

if (i != 4)
label_10630a0:
    x23_1 = 0
    goto label_10630a4

do
    x23_1 = x20 | (x21 == *(arg1 + 0x140) ? 1 : 0)
label_10630a4:
    char* x9_3 = *(arg1 + 0x10)
label_10630b8:
    uint32_t x10_3 = zx.d(*x9_3)
    uint64_t x11_1 = zx.q(x10_3 - 9)
    
    if (x11_1.d u<= 0x17)
        switch (x11_1)
            case 0, 4, 0x17
                goto label_10630ec
            case 1
                *(arg1 + 0x12c) += 1
                x10_3 = zx.d(*x9_3)
            label_10630ec:
                int32_t x13_2 = x10_3 & 0xe0
                int32_t x12_2 = x10_3 & 0xf0
                int32_t x11_2 = x10_3 & 0xf8
                
                if ((x10_3 & 0x80) != 0 && ((x11_2 != 0xf0 ? 1 : 0) & (x12_2 != 0xe0 ? 1 : 0)
                        & (sx.d(x10_3.b) s< 0 ? 1 : 0) & (x13_2 != 0xc0 ? 1 : 0) & 1) == 0)
                    if (x13_2 == 0xc0)
                        x9_3 = &x9_3[1]
                    else if (x12_2 == 0xe0)
                        x9_3 = &x9_3[2]
                    else if (x11_2 == 0xf0)
                        x9_3 = &x9_3[3]
                
                x9_3 = &x9_3[1]
                *(arg1 + 0x10) = x9_3
                goto label_10630b8
    
    XmlReader* x0 = arg1
    
    if (i == 2)
        if ((sub_1062b34(x0, nullptr) & 1) == 0)
            return zx.q(x20) & 1
        
        x0 = arg1
    
    int32_t x0_2 = sub_1062630(x0)
    
    if (((x23_1 | not.d(x0_2)) & 1) != 0)
        if ((x0_2 & 1) != 0)
            x20 = x23_1
        
        return zx.q(x20) & 1
    
    i = *(arg1 + 8)
    x20 = x23_1
while (i == 4)

goto label_10630a0
