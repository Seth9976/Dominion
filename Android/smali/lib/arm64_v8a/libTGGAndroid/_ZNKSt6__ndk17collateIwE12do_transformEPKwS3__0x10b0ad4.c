// 函数: _ZNKSt6__ndk17collateIwE12do_transformEPKwS3_
// 地址: 0x10b0ad4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2
void* x22 = entry_x2 - arg2

if (entry_x2 - arg2 s< 0)
    wchar_t* x0_3
    wchar_t* x1_1
    x0_3, x1_1 = std::__ndk1::__basic_string_common<true>::__throw_length_error()
    return std::__ndk1::collate<wchar_t>::do_hash(x0_3, x1_1) __tailcall

int64_t x23 = x22 s>> 2
void* x19_1
char* entry_x8

if (x23 u> 4)
    int64_t x24_1 = (x23 + 4) & 0xfffffffffffffffc
    arg1 = operator new(x24_1 << 2)
    *(entry_x8 + 8) = x23
    *(entry_x8 + 0x10) = arg1
    *entry_x8 = x24_1 | 1
    x19_1 = arg1
    
    if (arg2 != entry_x2)
        memcpy(x19_1, arg2, x22 & 0xfffffffffffffffc)
        x19_1 = ((x22 - 4) & 0xfffffffffffffffc) + x19_1 + 4
else
    *entry_x8 = (x22 u>> 1).b & 0xfe
    x19_1 = &entry_x8[4]
    
    if (arg2 != entry_x2)
        memcpy(x19_1, arg2, x22 & 0xfffffffffffffffc)
        x19_1 = ((x22 - 4) & 0xfffffffffffffffc) + x19_1 + 4
*x19_1 = 0
