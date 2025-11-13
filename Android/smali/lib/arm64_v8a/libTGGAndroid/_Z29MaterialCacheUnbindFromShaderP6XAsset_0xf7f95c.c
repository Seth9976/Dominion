// 函数: _Z29MaterialCacheUnbindFromShaderP6XAsset
// 地址: 0xf7f95c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(gMaterialCache + 8))

if (x8.d == 0)
    return 

void* i_1 = *gMaterialCache
uint64_t x11_1 = x8
void* i = i_1

do
    void* i_2 = i
    i += 0x1a38
    
    while (zx.d(*(i - 6)) == 0)
        i_2 += 0x1a38
        i += 0x1a38
        
        if (i_2 u>= i_1 + x11_1 * 0x1a38)
            return 
    
    if (*(i_2 + 0x658) == arg1 || *(i_2 + 8) == arg1)
        MaterialStateUnbind(i_2 + 8)
        *(i - 0x10) = 0
        i_1 = *gMaterialCache
        x8 = zx.q(*(gMaterialCache + 8))
    
    x11_1 = zx.q(x8.d)
while (i_1 + mulu.dp.d(x8.d, 0x1a38) u> i)
