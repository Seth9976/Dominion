// 函数: _ZN5Botan7BLAKE2b10state_initEv
// 地址: 0xce254c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t x8 = *(entry_x0 + 0x30)

if (x8 == 0)
    Botan::assertion_failure("n > 0 implies in != nullptr && out != nullptr", 
        "If n > 0 then args are not null", "copy_mem", 
        "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x401)
    return Botan::BLAKE2b::output_length() __tailcall

__builtin_memcpy(x8, 
    "\x08\xc9\xbc\xf3\x67\xe6\x09\x6a\x3b\xa7\xca\x84\x85\xae\x67\xbb\x2b\xf8\x94\xfe\x72\xf3\x6e\x3c\x"
"f1\x36\x1d\x5f\x3a\xf5\x4f\xa5\xd1\x82\xe6\xad\x7f\x52\x0e\x51\x1f\x6c\x3e\x2b\x8c\x68\x05\x9b\x6b"
"bd\x41\xfb\xab\xd9\x83\x1f\x79\x21\x7e\x13\x19\xcd\xe0\x5b", 
    0x40)
int64_t* x8_1 = *(entry_x0 + 0x30)
*x8_1 ^= 0x1010000 | (*(entry_x0 + 8) & 0x7f8) u>> 3
*(entry_x0 + 0x28) = 0
__builtin_memset(entry_x0 + 0x48, 0, 0x20)
