// 函数: _Z20ExpireNewProductIcon7DLCType
// 地址: 0x9baa3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1.d
void* result = GetDlcDef(arg1)

if (*(result + 4) != 1)
    return result

void* x0 = GetActiveProfile()
uint64_t x22 = zx.q(*(x0 + 0x7588)) & (zx.q(x19) | zx.q(x19 s>> 4))

for (int32_t* i = *(*(x0 + 0x7580) + (x22 << 3)); i != 0; i = *(i + 8))
    if (*i == x19)
        i[1] = 1
        return SaveProfiles() __tailcall

int32_t* x0_1 = XPooledMalloc(0x10)
*x0_1 = x19
x0_1[1] = 1
uint64_t x9_2 = x22 << 3
*(x0_1 + 8) = *(*(x0 + 0x7580) + x9_2)
*(*(x0 + 0x7580) + x9_2) = x0_1
*(x0 + 0x758c) += 1
return SaveProfiles() __tailcall
