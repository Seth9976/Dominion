// 函数: _Z14CardHasAltCostR7DomGame6CardIDb
// 地址: 0xbc9580
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8_1 = *(arg1 + mulu.dp.d(arg2, 0x68) + 0x1a68)
int64_t x9 = 0
int32_t* x10 = x8_1 + 0xe0

for (int32_t i = *x10; i != 0; i = *x10)
    if (i == 4)
        void* x8_2 = x8_1 + (x9 & 0xffffffff) * 0xc0
        int64_t* x8_4
        
        if ((arg3.d & 1) != 0)
            x8_4 = x8_2 + 0x188
        else
            x8_4 = x8_2 + 0xf8
        
        return *x8_4
    
    x9 += 1
    x10 = &x10[0x30]

return 0
