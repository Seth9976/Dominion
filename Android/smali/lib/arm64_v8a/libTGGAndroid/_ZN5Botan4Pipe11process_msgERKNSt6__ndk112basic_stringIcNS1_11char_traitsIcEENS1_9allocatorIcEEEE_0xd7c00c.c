// 函数: _ZN5Botan4Pipe11process_msgERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
// 地址: 0xd7c00c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* entry_x1
int32_t temp0 = zx.d(*entry_x1) & 1
void* x20

if (temp0 != 0)
    x20 = *(entry_x1 + 0x10)
else
    x20 = &entry_x1[1]

if (temp0 != 0)
    *(entry_x1 + 8)

Botan::Pipe::start_msg()
Botan::Pipe::write(arg1, x20)
return Botan::Pipe::end_msg() __tailcall
