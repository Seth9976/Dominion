// 函数: _ZN5Botan4UUIDC1ERNS_21RandomNumberGeneratorE
// 地址: 0xe91af4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* x0 = operator new(0x10)
*x0 = 0
x0[1] = 0
*arg1 = x0
*(arg1 + 8) = &x0[2]
*(arg1 + 0x10) = &x0[2]
int64_t* entry_x1
int64_t result = (*(*entry_x1 + 0x10))(entry_x1, x0, 0x10)
void* x8_3 = *arg1
*(x8_3 + 6) = 0x40 | (zx.d(*(x8_3 + 6)) & 0xf).b
void* x8_4 = *arg1
*(x8_4 + 8) = 0x80 | (zx.d(*(x8_4 + 8)) & 0x3f).b
return result
