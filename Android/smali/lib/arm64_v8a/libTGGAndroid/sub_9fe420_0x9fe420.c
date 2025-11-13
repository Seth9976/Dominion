// 函数: sub_9fe420
// 地址: 0x9fe420
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x0 = DomGetContextDepth()
int32_t var_38 = 0
int16_t var_34 = 0
*origContextDepth = x0
int32_t x0_2 = sub_a0a7dc(arg1)
uint32_t x22_1

if ((x0_2 & 1) != 0)
    x22_1 = zx.d(*(arg1 + 0x1a0c))
    memset(0x1379f30, 0, 0xd20)

uint64_t result

if ((x0_2 & 1) == 0 || x22_1 == 0)
    DomResetContextDepth(*origContextDepth)
    *origContextDepth = 0
    uint64_t* x0_8 = sub_9f7b40(arg1, 0x1379f30, arg2, nullptr)
    result = x0_8[1]
    
    if (result == 0)
        data_14a71d8 += 1
        uint64_t result_1 = operator new(0xe8)
        result = result_1
        __builtin_memset(result_1, 0, 0xe8)
        *(result_1 + 0xdc) = 4
        int64_t x0_9 = operator new[](0x1c0)
        __builtin_memset(x0_9, 0, 0x1c0)
        *(result + 0xd0) = x0_9
        x0_8[1] = result
        *(result + 0xb4) = arg2
        sub_9fd2ec(arg1, result, 0x1379f30)
        
        if (data_1379f34 != 0)
            sub_9fd5f0(arg1, result, 0x1379f30)
            result = sub_9fdb9c(arg1, result, 0x1379f30)
    else
        data_14a71dc += 1
else
    DomGetContextDepth()
    *origContextDepth = 0
    DeclareWinner(arg1, &var_38)
    uint64_t* x0_5 = sub_9f7b40(arg1, 0x1379f30, arg2, &var_38)
    result = x0_5[1]
    
    if (result == 0)
        data_14a71d8 += 1
        uint64_t result_2 = operator new(0xe8)
        result = result_2
        __builtin_memset(result_2, 0, 0xe8)
        *(result_2 + 0xdc) = 4
        int64_t x0_13 = operator new[](0x1c0)
        __builtin_memset(x0_13, 0, 0x1c0)
        *(result + 0xd0) = x0_13
        x0_5[1] = result
        *(result + 0xb4) = arg2
        *(result + 0xe4) = 1
    else
        data_14a71dc += 1
    
    sub_a0a828(arg1, result)

int32_t x8_2 = data_14a71b4

if (x8_2 s>= 1)
    sub_a05118(
        *(*(&data_11d5210 + (zx.q(x8_2 - 1) << 4)) + 0xd0)
            + sx.q(*((zx.q(x8_2 - 1) << 4) + &data_11d5218)) * 0x70, 
        result)

return result
