// 函数: _Z22ParticleDisposeForGamev
// 地址: 0xf932a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x19 = nullptr
int64_t* x21 = *(*gpGameData + 0x20)

while (true)
    void* x8_1
    
    if (x19 == 0)
        x8_1 = *x21
        x19 = x8_1
    else
        x8_1 = *x21
        x19 += 0xa8
    
    int64_t x8_2 = x8_1 + zx.q(x21[1].d) * 0xa8
    
    if (x19 u>= x8_2)
        break
    
    while (zx.d(*(x19 + 0xa2)) == 0)
        x19 += 0xa8
        
        if (x19 u>= x8_2)
            goto label_f93310
    
    ParticleDestroy(x19)

label_f93310:
uint64_t x19_1 = *gpGameData
*(x19_1 + 0x20)
DataArray<ParticleSystem>::DataArrayDispose()
void* result = *(x19_1 + 0x20)

if (result != 0)
    result = XPooledFree(result, 0x40)
    *(x19_1 + 0x20) = 0

return result
