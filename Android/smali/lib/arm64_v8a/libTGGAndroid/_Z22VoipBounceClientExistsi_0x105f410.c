// 函数: _Z22VoipBounceClientExistsi
// 地址: 0x105f410
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9 = nullptr
void* x10 = *gVoipServer
int64_t x11 = x10 + zx.q(*(gVoipServer + 8)) * 0x34
int32_t x8_2

do
    if (x9 == 0)
        x9 = x10
    else
        x9 += 0x34
    
    x8_2 = x9 u< x11 ? 1 : 0
    
    if (x9 u>= x11)
        return 0
    
    while (zx.d(*(x9 + 0x32)) == 0)
        x9 += 0x34
        
        if (x9 u>= x11)
            return 0
while (*x9 != arg1)

return zx.q(x8_2)
