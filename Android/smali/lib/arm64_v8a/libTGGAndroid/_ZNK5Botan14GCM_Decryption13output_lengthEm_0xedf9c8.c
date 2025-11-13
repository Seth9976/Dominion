// 函数: _ZNK5Botan14GCM_Decryption13output_lengthEm
// 地址: 0xedf9c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = *(arg1 + 8)
int64_t entry_x1

if (x8 u<= entry_x1)
    return entry_x1 - x8

Botan::assertion_failure("input_length >= tag_size()", "Sufficient input", "output_length", 
    "..\..\ExternalCode\botan\botanAM\arm/botan_all_android.h", 0x4e44)
return Botan::GCM_Decryption::minimum_final_size() __tailcall
