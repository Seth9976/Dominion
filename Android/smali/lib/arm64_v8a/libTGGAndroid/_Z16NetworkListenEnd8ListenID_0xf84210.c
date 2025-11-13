// 函数: _Z16NetworkListenEnd8ListenID
// 地址: 0xf84210
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x8 = *gNetworkInterface
void* x20 = *(*gNetwork + 0x28) + (zx.q(arg1) << 4)
int64_t result = (*(*x8 + 0x50))(x8, zx.q(*(x20 + 4)))
uint64_t x8_1 = *gNetwork
int32_t x10_1 = *(x8_1 + 0x38)
*(x8_1 + 0x38) = zx.d(*(x20 + 0xc))
*(x20 + 0xc) = x10_1
*(x8_1 + 0x3c) -= 1
return result
