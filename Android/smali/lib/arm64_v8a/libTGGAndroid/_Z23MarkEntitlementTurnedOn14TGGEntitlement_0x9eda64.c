// 函数: _Z23MarkEntitlementTurnedOn14TGGEntitlement
// 地址: 0x9eda64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg1
void* x0 = GetActiveProfile()
uint64_t x22 = zx.q(*(x0 + 0x5758)) & (zx.q(x20) | zx.q(x20 s>> 4))

for (int32_t* i = *(*(x0 + 0x5750) + (x22 << 3)); i != 0; i = *(i + 8))
    if (*i == x20)
        i[1] = 1
        return SaveProfiles() __tailcall

int32_t* x0_1 = XPooledMalloc(0x10)
*x0_1 = x20
x0_1[1] = 1
uint64_t x9_2 = x22 << 3
*(x0_1 + 8) = *(*(x0 + 0x5750) + x9_2)
*(*(x0 + 0x5750) + x9_2) = x0_1
*(x0 + 0x575c) += 1
return SaveProfiles() __tailcall
