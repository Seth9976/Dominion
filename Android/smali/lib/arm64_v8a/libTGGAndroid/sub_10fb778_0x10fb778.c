// 函数: sub_10fb778
// 地址: 0x10fb778
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x21 = *(arg1 + 0x10)
(*(*x21 + 0x20))(x21)

if (zx.d(*(x21 + 9)) != 1)
    (*(*x21 + 0x28))(x21, arg2)

int64_t* x20_1 = *(arg1 + 0x18)
int64_t result = (*(*x20_1 + 0x20))(x20_1, arg2)

if (zx.d(*(x20_1 + 9)) != 1)
    jump(*(*x20_1 + 0x28))

return result
