// 函数: _ZN5Botan19StreamCipher_Filter5writeEPKhm
// 地址: 0xd76700
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t entry_x2

if (entry_x2 == 0)
    return 

int64_t x19_1 = entry_x2
uint64_t x20_1 = arg2
int64_t x22_1
int64_t temp0_1

do
    int64_t* x0 = *(arg1 + 0x68)
    int64_t x2 = *(arg1 + 0x50)
    int64_t x9_2 = *(arg1 + 0x58) - x2
    
    x22_1 = x9_2 u< x19_1 ? x9_2 : x19_1
    
    (*(*x0 + 0x30))(x0, x20_1, x2, x22_1)
    int64_t x1_1 = *(arg1 + 0x50)
    
    if (*(arg1 + 0x58) - x1_1 u< x22_1)
        std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
            * x0_2
        uint64_t x1_2
        x0_2, x1_2 = Botan::assertion_failure("length <= in.size()", &data_793a18, "send", 
            "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x2d93)
        return Botan::Hash_Filter::Hash_Filter(x0_2, x1_2) __tailcall
    
    (*(*arg1 + 0x38))(arg1, x1_1, x22_1)
    temp0_1 = x19_1
    x19_1 -= x22_1
    x20_1 += x22_1
while (temp0_1 != x22_1)
