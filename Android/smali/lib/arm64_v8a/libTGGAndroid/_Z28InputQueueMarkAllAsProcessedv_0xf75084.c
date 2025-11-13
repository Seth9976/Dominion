// 函数: _Z28InputQueueMarkAllAsProcessedv
// 地址: 0xf75084
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x10 = nullptr
int64_t* x8_1 = *gInputGameGlobals + 0x20

while (true)
    int64_t* x11_2
    
    if (x10 == 0)
        x11_2 = x8_1
    else
        x11_2 = x10 + 0x28
    
    do
        x10 = *x11_2
        
        if (x10 == 0)
            return 
        
        x11_2 = x10 + 0x28
    while (zx.d(*(x10 + 0x20)) != 0)
    
    *(x10 + 0x20) = 1
