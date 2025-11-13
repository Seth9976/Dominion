// 函数: sub_fbfb68
// 地址: 0xfbfb68
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* x9 = *arg1
char* x8_5

if (x9 == arg2)
    x9 = nullptr
    x8_5 = nullptr
else
    char* x10_1 = x9
    
    while (zx.d(*x10_1) != 0xa)
        x10_1 = &x10_1[1]
        *arg1 = x10_1
        
        if (arg2 == x10_1)
            x10_1 = arg2
            break
    
    uint32_t x8_2 = zx.d(*x9)
    
    if (x8_2 == 0x20 || x8_2 - 9 u<= 4)
        char* x8_4
        
        x8_4 = x10_1 u> x9 ? x10_1 : x9
        
        while (x9 u< x10_1)
            x9 = &x9[1]
            uint32_t x11_1 = zx.d(*x9)
            
            if (x11_1 != 0x20)
                if (x11_1 - 9 u>= 5)
                    goto label_fbfbdc
        
        x9 = x8_4
        x8_5 = x10_1
        
        if (x9 != x10_1)
            goto label_fbfbe4
        
        goto label_fbfc28
    
label_fbfbdc:
    x8_5 = x10_1
    
    if (x9 == x10_1)
    label_fbfc28:
        
        if (x10_1 != arg2)
            *arg1 = &x10_1[1]
    else
    label_fbfbe4:
        void* x8_6 = x10_1 - 1
        uint32_t i
        
        do
            bool cond:3_1 = x8_6 u< x9
            i = zx.d(*x8_6)
            x8_6 -= 1
            
            if (cond:3_1)
                break
        while (i == 0xd)
        x8_5 = x8_6 + 2
        
        if (x10_1 != arg2)
            *arg1 = &x10_1[1]

int64_t x11_3 = 0
int64_t x12 = x8_5 - x9
uint32_t i_1

do
    if (x12 == x11_3)
        return 0
    
    i_1 = zx.d(x9[x11_3])
    x11_3 += 1
while (i_1 != 0x3a)
void* x10_3 = &x9[x11_3]
void* x14 = x10_3 + 1
*arg3 = x10_3
int32_t x9_1

while (true)
    if (x12 == x11_3)
        x9_1 = 0
        break
    
    uint32_t x13_1 = zx.d(x9[x11_3])
    x11_3 += 1
    
    if (x13_1 == 0x2c)
        void* x13_2 = &x9[x11_3]
        arg3[1] = x13_2 - 2
        uint32_t x17_1 = zx.d(*x10_3)
        
        if (x17_1 == 0x20 || x17_1 - 9 u<= 4)
            while (true)
                x10_3 = x14 - 1
                
                if (x10_3 u>= x13_2 - 2)
                    break
                
                *arg3 = x14
                uint32_t x10_4 = zx.d(*x14)
                x14 += 1
                
                if (x10_4 != 0x20)
                    if (x10_4 - 9 u>= 5)
                        x10_3 = x14 - 1
                        break
        
        void* x16_2 = x13_2 + 1
        
        if (x10_3 - x9 + 2 != x11_3)
            void* x14_3 = x13_2 - 3
            uint32_t i_2
            
            do
                arg3[1] = x14_3
                bool cond:6_1 = x14_3 u< x10_3
                i_2 = zx.d(*x14_3)
                x14_3 -= 1
                
                if (cond:6_1)
                    break
            while (i_2 == 0xd)
            arg3[1] = x14_3 + 2
        
        arg3[2] = x13_2
        
        while (true)
            if (x12 == x11_3)
                x9_1 = 1
                x10_3 = x13_2
                break
            
            uint32_t x10_7 = zx.d(x9[x11_3])
            x11_3 += 1
            
            if (x10_7 == 0x2c)
                void* x12_1 = &x9[x11_3]
                void* x14_4 = x12_1 - 2
                arg3[3] = x14_4
                uint32_t x17_3 = zx.d(*x13_2)
                
                if (x17_3 == 0x20 || x17_3 - 9 u<= 4)
                    while (true)
                        x13_2 = x16_2 - 1
                        
                        if (x13_2 u>= x14_4)
                            break
                        
                        arg3[2] = x16_2
                        uint32_t x13_3 = zx.d(*x16_2)
                        x16_2 += 1
                        
                        if (x13_3 != 0x20)
                            if (x13_3 - 9 u>= 5)
                                x13_2 = x16_2 - 1
                                break
                
                void* x15_2 = -3 - x9 + x8_5 - x11_3 + 3
                void* x9_4 = x12_1 + 1
                
                if (x13_2 - x9 + 2 != x11_3)
                    void* x10_10 = x12_1 - 3
                    uint32_t i_3
                    
                    do
                        arg3[3] = x10_10
                        bool cond:8_1 = x10_10 u< x13_2
                        i_3 = zx.d(*x10_10)
                        x10_10 -= 1
                        
                        if (cond:8_1)
                            break
                    while (i_3 == 0xd)
                    arg3[3] = x10_10 + 2
                
                x10_3 = x12_1
                arg3[4] = x12_1
                
                while (true)
                    if (x15_2 == 0)
                        x9_1 = 2
                        x10_3 = x12_1
                        break
                    
                    uint32_t x11_4 = zx.d(*x10_3)
                    x10_3 += 1
                    x14_4 += 1
                    x15_2 -= 1
                    
                    if (x11_4 == 0x2c)
                        arg3[5] = x14_4
                        uint32_t x11_5 = zx.d(*x12_1)
                        
                        if (x11_5 == 0x20 || x11_5 - 9 u<= 4)
                            while (true)
                                x12_1 = x9_4 - 1
                                
                                if (x12_1 u>= x14_4)
                                    break
                                
                                arg3[4] = x9_4
                                uint32_t x11_7 = zx.d(*x9_4)
                                x9_4 += 1
                                
                                if (x11_7 != 0x20)
                                    if (x11_7 - 9 u>= 5)
                                        x12_1 = x9_4 - 1
                                        break
                        
                        if (x12_1 != x14_4)
                            void* x9_5 = x10_3 - 3
                            uint32_t i_4
                            
                            do
                                arg3[5] = x9_5
                                bool cond:9_1 = x9_5 u< x12_1
                                i_4 = zx.d(*x9_5)
                                x9_5 -= 1
                                
                                if (cond:9_1)
                                    break
                            while (i_4 == 0xd)
                            arg3[5] = x9_5 + 2
                        
                        x9_1 = 3
                        break
                
                break
        
        break

void* x12_2 = &arg3[zx.q(x9_1) * 2]
*x12_2 = x10_3
*(x12_2 + 8) = x8_5
uint32_t x13_5 = zx.d(*x10_3)

if (x13_5 == 0x20 || x13_5 - 9 u<= 4)
    void* x13_7 = x10_3 + 1
    
    while (true)
        x10_3 = x13_7 - 1
        
        if (x10_3 u>= x8_5)
            break
        
        *x12_2 = x13_7
        uint32_t x10_12 = zx.d(*x13_7)
        x13_7 += 1
        
        if (x10_12 != 0x20)
            if (x10_12 - 9 u>= 5)
                x10_3 = x13_7 - 1
                break

if (x10_3 != x8_5)
    void* x8_7 = x8_5 - 1
    uint32_t i_5
    
    do
        *(x12_2 + 8) = x8_7
        bool cond:5_1 = x8_7 u< x10_3
        i_5 = zx.d(*x8_7)
        x8_7 -= 1
        
        if (cond:5_1)
            break
    while (i_5 == 0xd)
    *(x12_2 + 8) = x8_7 + 2

return zx.q(x9_1 + 1)
