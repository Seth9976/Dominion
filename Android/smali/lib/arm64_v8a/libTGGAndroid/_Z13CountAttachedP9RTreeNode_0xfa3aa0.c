// 函数: _Z13CountAttachedP9RTreeNode
// 地址: 0xfa3aa0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20

if (arg1 == 0)
    x20 = 0
else
    RTreeNode* i = arg1
    x20 = 0
    
    do
        if (*(i + 0x20) == 0)
            return zx.q(1 + x20)
        
        int32_t x0_1 = CountAttached(*(i + 0x20))
        i = *(i + 0x28)
        x20 = x20 + x0_1 + 1
    while (i != 0)

return zx.q(x20)
