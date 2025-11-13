// 函数: _ZN5Botan6PK_Ops22Verification_with_EMSA18is_valid_signatureEPKhm
// 地址: 0xdf9f38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = *(arg1 + 8)
arg1[0x28] = 0
(*(*x0 + 0x18))()
void* var_48
int32_t x19_1
void* var_60
int64_t var_50
int64_t entry_x2

if (((*(*arg1 + 0x38))(arg1) & 1) == 0)
    void* __offset(vtable_for_Botan::Null_RNG, 0x10) var_28 = _vtable_for_Botan::Null_RNG + 0x10
    int64_t* x22_1 = *(arg1 + 8)
    (*(*x22_1 + 0x20))(x22_1, &var_48, (*(*arg1 + 0x20))(arg1), &var_28)
    void* x1_4 = var_60
    int64_t var_58
    x19_1 = (*(*arg1 + 0x40))(arg1, x1_4, var_58 - x1_4, arg2, entry_x2)
    void* x0_14 = var_60
    
    if (x0_14 != 0)
        void* var_58_2 = x0_14
        Botan::deallocate_memory(x0_14, var_50 - x0_14, 1)
else
    (*(*arg1 + 0x48))(arg1, arg2, entry_x2)
    int64_t* x20_1 = *(arg1 + 8)
    x19_1 = (*(*x20_1 + 0x28))(x20_1, &var_60, &var_48, (*(*arg1 + 0x20))(arg1))
    void* x0_8 = var_60
    
    if (x0_8 != 0)
        void* var_58_1 = x0_8
        Botan::deallocate_memory(x0_8, var_50 - x0_8, 1)
void* x0_15 = var_48

if (x0_15 != 0)
    void* var_40_1 = x0_15
    int64_t var_38
    Botan::deallocate_memory(x0_15, var_38 - x0_15, 1)

return zx.q(x19_1) & 1
