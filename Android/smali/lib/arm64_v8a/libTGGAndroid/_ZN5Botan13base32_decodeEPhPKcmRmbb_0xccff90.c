// 函数: _ZN5Botan13base32_decodeEPhPKcmRmbb
// 地址: 0xccff90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint8_t* x27 = arg1
int32_t x24 = arg6.d
int64_t x20

if ((arg3 & 7) == 0)
    x20 = 0
else
    x20 = 8 - (arg3 & 7)

int64_t* x0 = operator new(8)
uint64_t x2 = ((x20 + arg3) * 5) u>> 3
*x0 = 0

if (x2 != 0)
    memset(x27, 0, x2)

uint8_t* var_68 = x27
size_t x25_1
uint64_t x8_36

if (arg3 == 0)
    x25_1 = 0
label_cd01bc:
    x8_36 = *arg4
    
    if (x8_36 u< arg3)
    label_cd040c:
        
        do
            uint32_t x15_1 = zx.d(arg2[x8_36])
            int32_t x17_5 = (((0x37 - x15_1) | x15_1 | (x15_1 - 0x32)) & 0x80) << 0x18 s>> 0x1f
            int32_t x2_9 = (((x15_1 ^ 0x3d) - 1) & not.d(x15_1) & 0x80) << 0x18 s>> 0x1f
            int32_t x15_3 = ((((x15_1 ^ 9) - 1) | ((x15_1 ^ 0x20) - 1) | ((x15_1 ^ 0xa) - 1)
                | ((x15_1 ^ 0xd) - 1)) & not.d(x15_1) & 0x80) << 0x18 s>> 0x1f
            
            if (((zx.d(x15_3.b) & 0x80) | (((zx.d(x2_9.b) & 0x81) | ((((zx.d(x15_1.b - 0x41)
                    | zx.d(((0x5a - x15_1.b) | x15_1.b | (x15_1.b - 0x41)) s>> 7)) & zx.d(x17_5.b))
                    | (zx.d(x15_1.b - 0x18) & zx.d((not.d(x17_5)).b))) & zx.d((not.d(x2_9)).b)))
                    & zx.d((not.d(x15_3)).b))) != 0x80)
                break
            
            x8_36 += 1
            *arg4 = x8_36
        while (arg3 != x8_36)
else
    if ((arg5.d & 1) != 0)
        int64_t x20_1 = 0
        uint64_t x28_1 = 0
        x25_1 = 0
        
        while (true)
            uint32_t x1 = zx.d(arg2[x28_1])
            int32_t x9_13 = (((0x37 - x1) | x1 | (x1 - 0x32)) & 0x80) << 0x18 s>> 0x1f
            int32_t x12_6 = (((x1 ^ 0x3d) - 1) & not.d(x1) & 0x80) << 0x18 s>> 0x1f
            int32_t x8_18 = ((((x1 ^ 9) - 1) | ((x1 ^ 0x20) - 1) | ((x1 ^ 0xa) - 1)
                | ((x1 ^ 0xd) - 1)) & not.d(x1) & 0x80) << 0x18 s>> 0x1f
            char x26_1 = (x8_18.b & 0x80) | (((x12_6.b & 0x81) | (((((x1.b - 0x41)
                | ((0x5a - x1.b) | x1.b | (x1.b - 0x41)) s>> 7) & x9_13.b)
                | ((x1.b - 0x18) & (not.d(x9_13)).b)) & (not.d(x12_6)).b)) & (not.d(x8_18)).b)
            
            if ((sub_f26554(x26_1, x1.b, x24 & 1) & 1) != 0)
                *(x0 + x20_1) = x26_1
                x20_1 += 1
            
            if (x28_1 != arg3 - 1 || x20_1 == 0)
                if (x20_1 != 8)
                    x28_1 += 1
                    
                    if (x28_1 == arg3)
                        break
                    
                    continue
            else if (x20_1 u< 8)
                x25_1 = 8 - x20_1
                memset(x0 + x20_1, 0, x25_1)
            else
                x25_1 = 8 - x20_1
            
            uint32_t x8_4 = zx.d(*(x0 + 1))
            x20_1 = 0
            x28_1 += 1
            *x27 = (x8_4 u>> 2).b | *x0 << 3
            uint32_t x10_2 = zx.d(*(x0 + 3))
            x27[1] = *(x0 + 2) << 1 | (x8_4 << 6).b | (x10_2 u>> 4).b
            uint32_t x8_7 = zx.d(*(x0 + 4))
            x27[2] = (x8_7 u>> 1).b | (x10_2 << 4).b
            uint32_t x10_3 = zx.d(*(x0 + 6))
            x27[3] = *(x0 + 5) << 2 | (x8_7 << 7).b | (x10_3 u>> 3).b
            x27[4] = *(x0 + 7) | (x10_3 << 5).b
            x27 = &x27[5]
            *arg4 = x28_1
            
            if (x28_1 == arg3)
                break
        
        goto label_cd01bc
    
    int64_t x26_2 = 0
    uint64_t x20_2 = 0
    
    while (true)
        uint32_t x1_1 = zx.d(arg2[x20_2])
        int32_t x9_23 = (((0x37 - x1_1) | x1_1 | (x1_1 - 0x32)) & 0x80) << 0x18 s>> 0x1f
        int32_t x12_12 = (((x1_1 ^ 0x3d) - 1) & not.d(x1_1) & 0x80) << 0x18 s>> 0x1f
        int32_t x8_26 = ((((x1_1 ^ 9) - 1) | ((x1_1 ^ 0x20) - 1) | ((x1_1 ^ 0xa) - 1)
            | ((x1_1 ^ 0xd) - 1)) & not.d(x1_1) & 0x80) << 0x18 s>> 0x1f
        char x25_2 = (x8_26.b & 0x80) | (((x12_12.b & 0x81) | (((((x1_1.b - 0x41)
            | ((0x5a - x1_1.b) | x1_1.b | (x1_1.b - 0x41)) s>> 7) & x9_23.b)
            | ((x1_1.b - 0x18) & (not.d(x9_23)).b)) & (not.d(x12_12)).b)) & (not.d(x8_26)).b)
        
        if ((sub_f26554(x25_2, x1_1.b, x24 & 1) & 1) != 0)
            *(x0 + x26_2) = x25_2
            x26_2 += 1
            
            if (x26_2 == 8)
                uint32_t x8_28 = zx.d(*(x0 + 1))
                x26_2 = 0
                x20_2 += 1
                *x27 = (x8_28 u>> 2).b | *x0 << 3
                uint32_t x10_21 = zx.d(*(x0 + 3))
                x27[1] = *(x0 + 2) << 1 | (x8_28 << 6).b | (x10_21 u>> 4).b
                uint32_t x8_31 = zx.d(*(x0 + 4))
                x27[2] = (x8_31 u>> 1).b | (x10_21 << 4).b
                uint32_t x10_22 = zx.d(*(x0 + 6))
                x27[3] = *(x0 + 5) << 2 | (x8_31 << 7).b | (x10_22 u>> 3).b
                x27[4] = *(x0 + 7) | (x10_22 << 5).b
                x27 = &x27[5]
                *arg4 = x20_2
                
                if (x20_2 == arg3)
                    break
                
                continue
        
        x20_2 += 1
        
        if (x20_2 == arg3)
            break
    
    x25_1 = 0
    x8_36 = *arg4
    
    if (x8_36 u< arg3)
        goto label_cd040c
uint64_t x8_38

if (x25_1 == 0)
    x8_38 = 0
else
    x8_38 = not.q(x25_1 u>> 1)

operator delete(x0)
return x8_38 - var_68 + x27
