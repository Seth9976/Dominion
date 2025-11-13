// 函数: sub_10ff24c
// 地址: 0x10ff24c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x9 = zx.d(arg2)

if (x9 == 0xff)
    return nullptr

uint64_t x8 = zx.q(x9) & 0xf

if (x8.d u<= 0xc)
    int32_t* x11_1 = *arg1
    int64_t* result
    char* x10_2
    int32_t x12_2
    
    switch (x8)
        case 0, 4, 0xc
            SystemHintOp_BTI()
            result = *x11_1
            x10_2 = &x11_1[2]
            x12_2 = x9 u>> 4 & 7
            
            if (x12_2 == 0)
                goto label_10ff344
            
        label_10ff334:
            
            if (x12_2 != 1)
                abort()
                noreturn
            
            if (result == 0)
                *arg1 = x10_2
                return result
            
            result += x11_1
        label_10ff344:
            
            if (result == 0)
                *arg1 = x10_2
                return result
            
            if ((x9 & 0x80) != 0)
                result = *result
            
            *arg1 = x10_2
            return result
        case 1
            SystemHintOp_BTI()
            int64_t x12_3 = 0
            result = nullptr
            x10_2 = x11_1
            uint64_t x13_2
            
            do
                x13_2 = zx.q(*x10_2)
                x10_2 = &x10_2[1]
                result |= (x13_2 & 0x7f) << x12_3
                x12_3 += 7
            while ((x13_2.d & 0x80) != 0)
            goto label_10ff32c
        case 2
            SystemHintOp_BTI()
            result = zx.q(*x11_1)
            x10_2 = x11_1 + 2
            x12_2 = x9 u>> 4 & 7
            
            if (x12_2 != 0)
                goto label_10ff334
            
            goto label_10ff344
        case 3
            SystemHintOp_BTI()
            result = zx.q(*x11_1)
            x10_2 = &x11_1[1]
            x12_2 = x9 u>> 4 & 7
            
            if (x12_2 != 0)
                goto label_10ff334
            
            goto label_10ff344
        case 9
            SystemHintOp_BTI()
            int64_t x12_4 = 0
            int64_t x8_1 = 0
            x10_2 = x11_1
            uint64_t x13_3
            
            do
                x13_3 = zx.q(*x10_2)
                x10_2 = &x10_2[1]
                x8_1 |= (x13_3 & 0x7f) << x12_4
                x12_4 += 7
            while ((x13_3.d & 0x80) != 0)
            
            int64_t x12_6
            
            if (((x12_4 u< 0x40 ? 1 : 0) & (x13_3.d & 0x40) u>> 6) != 0)
                x12_6 = -1 << x12_4
            else
                x12_6 = 0
            
            result = x8_1 | x12_6
            x12_2 = x9 u>> 4 & 7
            
            if (x12_2 != 0)
                goto label_10ff334
            
            goto label_10ff344
        case 0xa
            SystemHintOp_BTI()
            result = sx.q(*x11_1)
            x10_2 = x11_1 + 2
            x12_2 = x9 u>> 4 & 7
            
            if (x12_2 != 0)
                goto label_10ff334
            
            goto label_10ff344
        case 0xb
            SystemHintOp_BTI()
            result = sx.q(*x11_1)
            x10_2 = &x11_1[1]
        label_10ff32c:
            x12_2 = x9 u>> 4 & 7
            
            if (x12_2 == 0)
                goto label_10ff344
            
            goto label_10ff334

SystemHintOp_BTI()
abort()
noreturn
