// 函数: _ZNK5Botan9Skein_51210copy_stateEv
// 地址: 0xe27a90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x0 = operator new(0x68)
void* entry_x0
int64_t result = Botan::Skein_512::Skein_512(x0, *(entry_x0 + 0x20))
void* x8 = *(entry_x0 + 0x28)
void* x9 = *(x0 + 0x28)

if (x9 != x8)
    *(x8 + 0x28)
    result = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::assign<uint64_t*>(
        x9 + 0x20, *(x8 + 0x20))

if (entry_x0 != x0)
    *(entry_x0 + 0x38)
    result = std::__ndk1::vector<uint64_t, Botan::secure_allocator<uint64_t> >::assign<uint64_t*>(
        x0 + 0x30, *(entry_x0 + 0x30))

if (entry_x0 != x0)
    *(entry_x0 + 0x50)
    result = std::__ndk1::vector<uint8_t, Botan::secure_allocator<uint8_t> >::assign<uint8_t*>(
        x0 + 0x48, *(entry_x0 + 0x48))

int64_t x8_1 = *(entry_x0 + 0x60)
void** entry_x8
*entry_x8 = x0
*(x0 + 0x60) = x8_1
return result
