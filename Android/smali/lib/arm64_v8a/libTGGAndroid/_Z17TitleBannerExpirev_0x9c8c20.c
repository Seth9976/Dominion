// 函数: _Z17TitleBannerExpirev
// 地址: 0x9c8c20
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = GetActiveProfile()
int64_t x21 = zx.q(*(x0 + 0x7588)) & 0xfffffffffffffdff

for (int32_t* i = *(*(x0 + 0x7580) + (x21 << 3)); i != 0; i = *(i + 8))
    if (*i == 0xffffd8f1)
        i[1] = 1
        return SaveProfiles() __tailcall

int64_t* x0_1 = XPooledMalloc(0x10)
*x0_1 = 0x1ffffd8f1
x0_1[1] = (*(x0 + 0x7580))[x21]
(*(x0 + 0x7580))[x21] = x0_1
*(x0 + 0x758c) += 1
return SaveProfiles() __tailcall
