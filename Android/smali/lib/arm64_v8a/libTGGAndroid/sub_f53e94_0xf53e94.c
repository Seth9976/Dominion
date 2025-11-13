// 函数: sub_f53e94
// 地址: 0xf53e94
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x9 = zx.q(*arg1)
uint64_t x10 = zx.q(*arg2)
uint64_t i_2 = x9 u>> 1
uint64_t i_4

if ((x9.d & 1) == 0)
    i_4 = i_2
else
    i_4 = *(arg1 + 8)

uint64_t x11_1

if ((x10.d & 1) == 0)
    x11_1 = x10 u>> 1
else
    x11_1 = *(arg2 + 8)

if (i_4 != x11_1)
    return 0

void* x1

if ((x10.d & 1) != 0)
    x1 = *(arg2 + 0x10)
else
    x1 = &arg2[1]

if ((x9.d & 1) == 0)
    if (i_4 != 0)
        void* x9_2 = &arg1[1]
        uint64_t i
        
        do
            if (zx.d(*x9_2) != zx.d(*x1))
                return 0
            
            i = i_2
            i_2 -= 1
            x9_2 += 1
            x1 += 1
        while (i != 1)
    
    goto label_f53f3c

if (i_4 == 0)
label_f53f3c:
    uint64_t x11_3 = zx.q(arg1[0x18])
    uint64_t x12_2 = zx.q(arg2[0x18])
    uint64_t i_3 = x11_3 u>> 1
    uint64_t i_5
    
    if ((x11_3.d & 1) == 0)
        i_5 = i_3
    else
        i_5 = *(arg1 + 0x20)
    
    uint64_t x13_2
    
    if ((x12_2.d & 1) == 0)
        x13_2 = x12_2 u>> 1
    else
        x13_2 = *(arg2 + 0x20)
    
    if (i_5 == x13_2)
        void* x1_1
        
        if ((x12_2.d & 1) != 0)
            x1_1 = *(arg2 + 0x28)
        else
            x1_1 = &arg2[0x19]
        
        if ((x11_3.d & 1) != 0)
            if (i_5 != 0)
                return zx.q(memcmp() == 0 ? 1 : 0)
        else if (i_5 != 0)
            void* x9_5 = &arg1[0x19]
            uint32_t x10_4
            uint32_t x11_5
            uint64_t i_1
            
            do
                x10_4 = zx.d(*x9_5)
                x11_5 = zx.d(*x1_1)
                
                if (x10_4 != x11_5)
                    break
                
                i_1 = i_3
                i_3 -= 1
                x9_5 += 1
                x1_1 += 1
            while (i_1 != 1)
            return zx.q(x10_4 == x11_5 ? 1 : 0)
        
        return 1
else if (memcmp() == 0)
    goto label_f53f3c

return 0
