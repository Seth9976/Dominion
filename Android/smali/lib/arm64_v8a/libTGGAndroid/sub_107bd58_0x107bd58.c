// 函数: sub_107bd58
// 地址: 0x107bd58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x20 = arg3

if (arg3 s>= 1)
    x20 += arg1[2]

if (x20 s< 1)
    goto label_107bdb0

int32_t* x0_3
int64_t x0_6

while (true)
    if (arg1[2] s>= x20)
        return -1
    
label_107bdb0:
    int64_t x0_2 = ogg_sync_pageseek(&arg1[4], arg2)
    
    if ((x0_2 & 0xffffffff80000000) != 0)
        arg1[2] -= x0_2
        
        if (x20 s< 1)
            break
    else
        if (x0_2 != 0)
            int64_t result = arg1[2]
            arg1[2] = result + x0_2
            return result
        
        if (x20 == 0)
            return -1
        
        x0_3 = __errno()
        *x0_3 = 0
        
        if (arg1[0x72] == 0)
            return -0x80
        
        if (*arg1 == 0)
            return -2
        
        x0_6 = arg1[0x72](ogg_sync_buffer(&arg1[4], 0x800), 1, 0x800, *arg1)
        
        if (x0_6 s<= 0)
            break
        
        ogg_sync_wrote(&arg1[4], x0_6)
        
        if (x20 s< 1)
            break

if (x0_6 != 0 || *x0_3 != 0)
    return -0x80

return -2
