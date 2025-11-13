// 函数: _ZNK5Botan9ASN1_Time11encode_intoERNS_11DER_EncoderE
// 地址: 0xcb6920
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = *(arg1 + 0x20)
char var_38
void* var_28

if (x19 - 0x17 u>= 2)
    int64_t* x0_2 = Botan::throw_invalid_argument("ASN1_Time: Bad encoding tag", "encode_into", 
        "..\..\ExternalCode\botan\botanAM\arm\botan_all_android.cpp")
    
    if ((zx.d(var_38) & 1) != 0)
        operator delete(var_28)
    
    sub_1101e04(x0_2)
    noreturn

Botan::ASN1_Time::to_string()
uint64_t x3

if ((zx.d(var_38) & 1) == 0)
    x3 = &var_38 | 1
else
    x3 = var_28

int64_t entry_x1
int64_t result = Botan::DER_Encoder::add_object(entry_x1, zx.q(x19), nullptr, x3)

if ((zx.d(var_38) & 1) == 0)
    return result

return operator delete(var_28)
