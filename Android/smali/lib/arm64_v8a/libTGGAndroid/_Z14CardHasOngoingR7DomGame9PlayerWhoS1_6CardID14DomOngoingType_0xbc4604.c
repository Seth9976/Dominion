// 函数: _Z14CardHasOngoingR7DomGame9PlayerWhoS1_6CardID14DomOngoingType
// 地址: 0xbc4604
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x11 = *(arg1 + mulu.dp.d(arg4, 0x68) + 0x1a68)
int32_t x10 = *(x11 + 0xe0)

if (x10 == 0)
    return 0xffffffff

int32_t x9 = *(arg1 + 0x19d4)
int32_t x12 = zx.d(*(arg1 + 0x19e0)) != 0 ? 1 : 0
int32_t x8_3 = x12 & (x9 == arg3 ? 1 : 0)
int32_t x9_2 = x12 & (x9 == arg2 ? 1 : 0)
int64_t x8_4

if (arg3 == arg2)
    if ((x8_3 & 1) != 0)
        x8_4 = 0
        void* x11_1 = x11 + 0x1a0
        
        while (true)
            if ((zx.d(*(x11_1 - 0xc)) & 4) != 0)
                if (((x10 == 7 ? 1 : 0) & x9_2 & 1) != 0)
                label_bc4664:
                    
                    if (*(x11_1 - 0xa8) == arg5)
                        break
            else if (x10 == 7)
                goto label_bc4664
            
            x10 = *x11_1
            x11_1 += 0xc0
            x8_4 += 1
            
            if (x10 == 0)
                return 0xffffffff
        
        return (zx.q(x8_4.d) & 0xf) | zx.q((0x3fff & arg4) << 0x12) | 0x10
    
    x8_4 = 0
    void* x11_3 = x11 + 0x1a0
    
    while (true)
        if ((zx.d(*(x11_3 - 0x1c)) & 2) == 0)
            if ((zx.d(*(x11_3 - 0xc)) & 4) != 0)
                if (((x10 == 7 ? 1 : 0) & x9_2 & 1) != 0)
                label_bc4718:
                    
                    if (*(x11_3 - 0xa8) == arg5)
                        return (zx.q(x8_4.d) & 0xf) | zx.q((0x3fff & arg4) << 0x12) | 0x10
            else if (x10 == 7)
                goto label_bc4718
        
        x10 = *x11_3
        x11_3 += 0xc0
        x8_4 += 1
        
        if (x10 == 0)
            return 0xffffffff
else if ((x8_3 & 1) == 0)
    x8_4 = 0
    void* x11_4 = x11 + 0x1a0
    
    while (true)
        if ((*(x11_4 - 0x1c) & 3) == 1)
            if ((zx.d(*(x11_4 - 0xc)) & 4) != 0)
                if (((x10 == 7 ? 1 : 0) & x9_2 & 1) != 0)
                label_bc4770:
                    
                    if (*(x11_4 - 0xa8) == arg5)
                        return (zx.q(x8_4.d) & 0xf) | zx.q((0x3fff & arg4) << 0x12) | 0x10
            else if (x10 == 7)
                goto label_bc4770
        
        x10 = *x11_4
        x11_4 += 0xc0
        x8_4 += 1
        
        if (x10 == 0)
            return 0xffffffff
else
    x8_4 = 0
    void* x11_2 = x11 + 0x1a0
    
    while (true)
        if ((zx.d(*(x11_2 - 0x1c)) & 1) != 0)
            if ((zx.d(*(x11_2 - 0xc)) & 4) != 0)
                if (((x10 == 7 ? 1 : 0) & x9_2 & 1) != 0)
                label_bc46c0:
                    
                    if (*(x11_2 - 0xa8) == arg5)
                        return (zx.q(x8_4.d) & 0xf) | zx.q((0x3fff & arg4) << 0x12) | 0x10
            else if (x10 == 7)
                goto label_bc46c0
        
        x10 = *x11_2
        x11_2 += 0xc0
        x8_4 += 1
        
        if (x10 == 0)
            return 0xffffffff
