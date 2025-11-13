// 函数: _Z21AttachmentInitForGamev
// 地址: 0xf69764
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = *gpGameData
int64_t* x0 = XPooledCalloc(0x28)
__builtin_memset(x0, 0, 0x18)
x0[4] = 0
x0[3].d = 1
*(x20 + 0x28) = x0
int64_t result = XMalloc(0xd000)
*x0 = result
*(x0 + 0xc) = 0x400
x0[4] = "Attachments"
x0[3].d = 0xdd8b
return result
