// 函数: spSkin_getAttachmentName
// 地址: 0xfb62cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* i = *(arg1 + 0x28)

if (i != 0)
    int32_t x9_1 = 0
    
    do
        if (*i == arg2)
            if (x9_1 == arg3)
                return *(i + 8)
            
            x9_1 += 1
        
        i = *(i + 0x18)
    while (i != 0)

return 0
