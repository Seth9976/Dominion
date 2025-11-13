// 函数: _Z26VoipBounceClientChangeGameii
// 地址: 0x105f600
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t result = XTraceAndLog("VoipBounceClientChangeGame %x %x")
void* x8 = nullptr
void* x9 = *gVoipServer
int64_t x10_1 = x9 + zx.q(*(gVoipServer + 8)) * 0x34

while (true)
    if (x8 == 0)
        x8 = x9
    else
        x8 += 0x34
    
    if (x8 u>= x10_1)
        break
    
    while (zx.d(*(x8 + 0x32)) == 0)
        x8 += 0x34
        
        if (x8 u>= x10_1)
            return result
    
    if (*x8 == arg1)
        *(x8 + 0x2c) = arg2
        break

return result
