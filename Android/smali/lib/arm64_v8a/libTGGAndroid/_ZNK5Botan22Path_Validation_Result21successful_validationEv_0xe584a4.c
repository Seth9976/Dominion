// 函数: _ZNK5Botan22Path_Validation_Result21successful_validationEv
// 地址: 0xe584a4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int32_t x8_2 = *(entry_x0 + 0x48)

if (x8_2 u> 3)
    return 0

return zx.q(0xb u>> (x8_2 & 0xf)) & 1
