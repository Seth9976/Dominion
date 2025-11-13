// 函数: _Z12GetNumMPBans12DomExpansion
// 地址: 0xb3cb28
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t i = 0
int32_t x20 = 0
void* x22 = GetActiveProfile() + 0x5964

do
    uint64_t x0_1 = zx.q(*(x22 + i))
    
    if (x0_1.d == 0)
        break
    
    i += 4
    int32_t var_24
    
    if (DomCardExp(x0_1, &var_24) == arg1)
        x20 += 1
while (i != 0xaf0)

return zx.q(x20)
