// 函数: sub_ef286c
// 地址: 0xef286c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x10 = *(arg1 + 0x28)
int64_t x8_1 = *(arg1 + 0x18) - *(arg1 + 0x10)

if (x8_1 u>= x10)
    return zx.q(x8_1 - x10 u>= arg2 ? 1 : 0)

size_t x0_1
int64_t x1
size_t x2
int64_t x3
x0_1, x1, x2, x3 = Botan::assertion_failure("m_offset <= m_obj.length()", &data_793a18, 
    "check_available", "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp", 0x3132)
return sub_ef28bc(x0_1, x1, x2, x3) __tailcall
