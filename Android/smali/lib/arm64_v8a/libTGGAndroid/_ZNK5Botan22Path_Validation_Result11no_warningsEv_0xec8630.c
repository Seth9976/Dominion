// 函数: _ZNK5Botan22Path_Validation_Result11no_warningsEv
// 地址: 0xec8630
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x0
int64_t* x19 = *(entry_x0 + 0x18)
int64_t x8 = *(entry_x0 + 0x20)
int32_t x20_1

if (x19 == x8)
    x20_1 = 1
else
    int64_t i
    
    do
        int64_t* var_48
        sub_ec86a0(&var_48, x19)
        x20_1 = i == 0 ? 1 : 0
        std::__ndk1::__tree<Botan::Certificate_Status_Code, std::__ndk1::less<Botan::Certificate_Status_Code>, std::__ndk1::allocator<Botan::Certificate_Status_Code> >::destroy(
            &var_48)
        
        if (x8 - 0x18 == x19)
            break
        
        x19 = &x19[3]
    while (i == 0)

return zx.q(x20_1)
