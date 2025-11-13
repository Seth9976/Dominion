// 函数: _ZN5Botan6PK_Ops22Verification_with_EMSA6updateEPKhm
// 地址: 0xdf9e5c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (((*(*arg1 + 0x28))() & 1) != 0 && zx.d(arg1[0x28]) == 0)
    void* x8_3 = *arg1
    arg1[0x28] = 1
    (*(x8_3 + 0x30))(arg1)
    int64_t* x0_2 = *(arg1 + 8)
    void* var_38
    int64_t var_30
    (*(*x0_2 + 0x10))(x0_2, var_38, var_30 - var_38)
    
    if (var_38 != 0)
        void* var_30_1 = var_38
        int64_t var_28
        Botan::deallocate_memory(var_38, var_28 - var_38, 1)

int64_t* x0_4 = *(arg1 + 8)
int64_t entry_x2
return (*(*x0_4 + 0x10))(x0_4, arg2, entry_x2)
