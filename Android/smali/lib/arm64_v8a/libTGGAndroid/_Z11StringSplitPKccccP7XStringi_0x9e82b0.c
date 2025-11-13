// 函数: _Z11StringSplitPKccccP7XStringi
// 地址: 0x9e82b0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char const* x24 = arg1
int64_t x22 = 0
void* x24_1

do
    void* x1 = x24 - 1
    
    if (zx.d(arg3) == 0)
        uint32_t i
        
        do
            x1 += 1
            i = zx.d(*x1)
        while (i == 0x20)
        
        x24_1 = x1
        
        if (i != zx.d(arg2) && i != 0)
            uint32_t i_1
            
            do
                x24_1 += 1
                i_1 = zx.d(*x24_1)
                
                if (i_1 == zx.d(arg2))
                    break
            while (i_1 != 0)
    else
        uint32_t i_2
        
        do
            x1 += 1
            i_2 = zx.d(*x1)
        while (i_2 == 0x20)
        
        x24_1 = x1
        int32_t x9_1 = i_2 & 0xff
        
        if (x9_1 == zx.d(arg3))
            goto label_9e8318
        
    label_9e8340:
        
        if (x9_1 != zx.d(arg2) && (i_2 & 0xff) != 0)
            x24_1 += 1
            
            while ((zx.d(*x24_1) & 0xff) == zx.d(arg3))
            label_9e8318:
                x24_1 += 2
            label_9e831c:
                uint32_t x8_1 = zx.d(*(x24_1 - 1))
                
                if (x8_1 != zx.d(arg4))
                    x24_1 += 1
                    
                    if (x8_1 != 0)
                        goto label_9e831c
                    
                    x24_1 -= 2
                    i_2 = zx.d(*x24_1)
                    x9_1 = i_2 & 0xff
                    
                    if (x9_1 == zx.d(arg3))
                        goto label_9e8318
                    
                    goto label_9e8340
    
    XString::AppendLength(arg5 + (x22 << 3), x1.d)
    x24 = x24_1 + 1
    x22 += 1
    
    if (x22 == zx.q(arg6))
        break
while (zx.d(*x24_1) != 0)
return zx.q(x22.d)
