// 函数: _ZNK5Botan3TLS18Supported_Versions8supportsENS0_16Protocol_VersionE
// 地址: 0xe6efb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int16_t* x8 = *(arg1 + 8)
int64_t x9_1 = *(arg1 + 0x10)

if (x8 == x9_1)
    return 0

int16_t* x10 = x8
uint32_t x11_1
uint32_t temp0_1
bool cond:0_1

do
    x11_1 = zx.d(*x10)
    x10 = &x10[1]
    int16_t entry_x1
    temp0_1 = zx.d(entry_x1)
    
    if (x11_1 == temp0_1)
        break
    
    cond:0_1 = x9_1 - 2 != x8
    x8 = x10
while (cond:0_1)
return zx.q(x11_1 == temp0_1 ? 1 : 0)
