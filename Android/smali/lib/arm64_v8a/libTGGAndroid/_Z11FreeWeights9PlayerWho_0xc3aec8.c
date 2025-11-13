// 函数: _Z11FreeWeights9PlayerWho
// 地址: 0xc3aec8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* i_1 = *(muls.dp.d(arg1, 0x80cf8) + 0x195dc30)

if (i_1 != 0)
    int64_t* i
    
    do
        free(*i_1)
        int64_t* x20_1 = i_1[4]
        
        if (x20_1 != 0)
            void* x8_1 = *x20_1
            
            if (x8_1 != 0)
                free(*(x8_1 - 8))
            
            operator delete(x20_1)
        
        int64_t* x20_2 = i_1[3]
        
        if (x20_2 != 0)
            void* x8_2 = *x20_2
            
            if (x8_2 != 0)
                free(*(x8_2 - 8))
            
            operator delete(x20_2)
        
        i = i_1[2]
        XFree(i_1)
        i_1 = i
    while (i != 0)

return memset(&data_18ddc30 + sx.q(arg1) * 0x80cf8, 0, 0x80008)
