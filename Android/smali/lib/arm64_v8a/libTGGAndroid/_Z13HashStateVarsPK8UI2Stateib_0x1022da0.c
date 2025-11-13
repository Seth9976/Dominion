// 函数: _Z13HashStateVarsPK8UI2Stateib
// 地址: 0x1022da0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg3.d
uint32_t x21
int32_t var_64_1

if ((arg3.d & 1) == 0)
    if (arg2 s>= 1)
        int64_t i = 0
        x21 = 0x3e8
        var_64_1 = x19
        
        do
            void** x19_3 = arg1 + i
            uint32_t x0_20 = memcrc32(&x19_3[1], 4, 
                memcrc32(&x19_3[4], 4, memcrc32(x19_3 + 0xc, 4, strcrc32(*(*x19_3 + 0x10), x21))))
            int32_t x8_11 = *(x19_3 + 0xc)
            x21 = x0_20
            
            if (x8_11 != 0)
                uint32_t x0_12
                
                if (x8_11 != 3)
                    x0_12 = memcrc32(arg1 + i + 0x28, 4, x21)
                else
                    void* x8_12 = arg1 + i
                    x0_12 = strcrc32(**(x8_12 + 0x10) + sx.q(*(x8_12 + 0x18)), x21)
                
                x21 = x0_12
            
            i += 0x30
        while (mulu.dp.d(arg2, 0x30) != i)
        
        goto label_102300c
    
    x21 = 0x3e8
else
    XTrace("start dump, num %d ")
    
    if (arg2 s<= 0)
        x21 = 0x3e8
        XTrace("final %d")
    else
        int32_t x22_1 = 0
        int64_t i_1 = 0
        x21 = 0x3e8
        var_64_1 = x19
        
        do
            void* x19_1 = arg1 + i_1
            *(*x19_1 + 0x10)
            XTrace("  %d %s")
            XTrace("    %d")
            uint32_t x0_3 = strcrc32(*(*x19_1 + 0x10), x21)
            XTrace("    %d")
            uint32_t x0_5 = memcrc32(x19_1 + 0xc, 4, x0_3)
            *(x19_1 + 0x20)
            XTrace("    %f")
            uint32_t x0_7 = memcrc32(x19_1 + 0x20, 4, x0_5)
            *(x19_1 + 8)
            XTrace("    %d")
            x21 = memcrc32(x19_1 + 8, 4, x0_7)
            XTrace("    %d")
            int32_t x8_4 = *(x19_1 + 0xc)
            
            if (x8_4 != 0)
                uint32_t x0_1
                
                if (x8_4 != 3)
                    x0_1 = memcrc32(arg1 + i_1 + 0x28, 4, x21)
                else
                    void* x19_2 = arg1 + i_1
                    *(x19_2 + 0x18)
                    **(x19_2 + 0x10)
                    XTrace("    %s")
                    x0_1 = strcrc32(**(x19_2 + 0x10) + sx.q(*(x19_2 + 0x18)), x21)
                
                x21 = x0_1
            
            XTrace("    %d")
            i_1 += 0x30
            x22_1 += 1
        while (mulu.dp.d(arg2, 0x30) != i_1)
        
    label_102300c:
        
        if ((var_64_1 & 1) != 0)
            XTrace("final %d")
return zx.q(x21)
