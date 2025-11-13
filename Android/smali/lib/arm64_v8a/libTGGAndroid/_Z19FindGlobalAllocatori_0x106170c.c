// 函数: _Z19FindGlobalAllocatori
// 地址: 0x106170c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_1

if (*gAllocatorArray == 0)
    AllocatorInitForApp()
    
    if (arg1 s>= 0x11)
    label_1061730:
        
        if (arg1 s<= 0x20)
            x8_1 = 1
        else if (arg1 s< 0x41)
            x8_1 = 2
        else if (arg1 s< 0x81)
            x8_1 = 3
        else if (arg1 s< 0x101)
            x8_1 = 4
        else if (arg1 s< 0x201)
            x8_1 = 5
        else if (arg1 s<= 0x400)
            x8_1 = 6
        else
            x8_1 = 7
    else
        x8_1 = 0
else
    if (arg1 s>= 0x11)
        goto label_1061730
    
    x8_1 = 0

return *gAllocatorArray + (x8_1 << 5)
