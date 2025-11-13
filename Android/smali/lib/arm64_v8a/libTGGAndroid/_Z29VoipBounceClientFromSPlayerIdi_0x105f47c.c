// 函数: _Z29VoipBounceClientFromSPlayerIdi
// 地址: 0x105f47c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = nullptr
void* result_1 = *gVoipServer
int64_t x10_1 = result_1 + zx.q(*(gVoipServer + 8)) * 0x34

do
    if (result == 0)
        result = result_1
    else
        result += 0x34
    
    if (result u>= x10_1)
        return 0
    
    while (zx.d(*(result + 0x32)) == 0)
        result += 0x34
        
        if (result u>= x10_1)
            return 0
while (*result != arg1)

return result
