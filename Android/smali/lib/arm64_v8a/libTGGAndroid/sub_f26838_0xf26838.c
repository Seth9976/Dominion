// 函数: sub_f26838
// 地址: 0xf26838
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x19

if ((arg3 & 7) == 0)
    x19 = 0
else
    x19 = 8 - (arg3 & 7)

int64_t* x0 = operator new(8)
uint64_t x2 = ((x19 + arg3) * 5) u>> 3
*x0 = 0

if (x2 != 0)
    memset(arg1, 0, x2)

size_t x24
void* x27
int64_t x8_20

if (arg3 == 0)
    x24 = 0
    x27 = arg1
    x8_20 = *arg4
    
    if (x8_20 u< arg3)
    label_f26b4c:
        
        do
            uint32_t x15_1 = zx.d(*(arg2 + x8_20))
            int32_t x17_5 = (((0x37 - x15_1) | x15_1 | (x15_1 - 0x32)) & 0x80) << 0x18 s>> 0x1f
            int32_t x2_8 = (((x15_1 ^ 0x3d) - 1) & not.d(x15_1) & 0x80) << 0x18 s>> 0x1f
            int32_t x15_3 = ((((x15_1 ^ 9) - 1) | ((x15_1 ^ 0x20) - 1) | ((x15_1 ^ 0xa) - 1)
                | ((x15_1 ^ 0xd) - 1)) & not.d(x15_1) & 0x80) << 0x18 s>> 0x1f
            
            if (((zx.d(x15_3.b) & 0x80) | (((zx.d(x2_8.b) & 0x81) | ((((zx.d(x15_1.b - 0x41)
                    | zx.d(((0x5a - x15_1.b) | x15_1.b | (x15_1.b - 0x41)) s>> 7)) & zx.d(x17_5.b))
                    | (zx.d(x15_1.b - 0x18) & zx.d((not.d(x17_5)).b))) & zx.d((not.d(x2_8)).b)))
                    & zx.d((not.d(x15_3)).b))) != 0x80)
                break
            
            x8_20 += 1
            *arg4 = x8_20
        while (arg3 != x8_20)
else
    int64_t x19_1 = 0
    int64_t x28_1 = 0
    x24 = 0
    x27 = arg1
    
    while (true)
        uint32_t x1 = zx.d(*(arg2 + x28_1))
        int32_t x9_13 = (((0x37 - x1) | x1 | (x1 - 0x32)) & 0x80) << 0x18 s>> 0x1f
        int32_t x12_6 = (((x1 ^ 0x3d) - 1) & not.d(x1) & 0x80) << 0x18 s>> 0x1f
        int32_t x8_18 = ((((x1 ^ 9) - 1) | ((x1 ^ 0x20) - 1) | ((x1 ^ 0xa) - 1) | ((x1 ^ 0xd) - 1))
            & not.d(x1) & 0x80) << 0x18 s>> 0x1f
        char x26_1 = (x8_18.b & 0x80) | (((x12_6.b & 0x81) | (((((x1.b - 0x41)
            | ((0x5a - x1.b) | x1.b | (x1.b - 0x41)) s>> 7) & x9_13.b)
            | ((x1.b - 0x18) & (not.d(x9_13)).b)) & (not.d(x12_6)).b)) & (not.d(x8_18)).b)
        
        if ((sub_f26554(x26_1, x1.b, arg5 & 1) & 1) != 0)
            *(x0 + x19_1) = x26_1
            x19_1 += 1
        
        if (x28_1 != arg3 - 1 || x19_1 == 0)
            if (x19_1 != 8)
                x28_1 += 1
                
                if (x28_1 == arg3)
                    break
                
                continue
        else if (x19_1 u< 8)
            x24 = 8 - x19_1
            memset(x0 + x19_1, 0, x24)
        else
            x24 = 8 - x19_1
        
        uint32_t x8_4 = zx.d(*(x0 + 1))
        x19_1 = 0
        x28_1 += 1
        *x27 = (x8_4 u>> 2).b | *x0 << 3
        uint32_t x10_2 = zx.d(*(x0 + 3))
        *(x27 + 1) = *(x0 + 2) << 1 | (x8_4 << 6).b | (x10_2 u>> 4).b
        uint32_t x8_7 = zx.d(*(x0 + 4))
        *(x27 + 2) = (x8_7 u>> 1).b | (x10_2 << 4).b
        uint32_t x10_3 = zx.d(*(x0 + 6))
        *(x27 + 3) = *(x0 + 5) << 2 | (x8_7 << 7).b | (x10_3 u>> 3).b
        *(x27 + 4) = *(x0 + 7) | (x10_3 << 5).b
        x27 += 5
        *arg4 = x28_1
        
        if (x28_1 == arg3)
            break
    
    x8_20 = *arg4
    
    if (x8_20 u< arg3)
        goto label_f26b4c
uint64_t x8_22

if (x24 == 0)
    x8_22 = 0
else
    x8_22 = not.q(x24 u>> 1)

operator delete(x0)
return x8_22 - arg1 + x27
