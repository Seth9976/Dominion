// 函数: sub_e4dc80
// 地址: 0xe4dc80
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg5
void* __offset(vtable_for_Botan::PK_Decryptor_EME, 0x10) arg_48 =
    _vtable_for_Botan::PK_Decryptor_EME + 0x10
arg5 = nullptr

if (x0 != 0)
    (*(*x0 + 0x18))()

if (arg6 != 0)
    void* arg_a8 = arg6
    operator delete(arg6)

void* x0_2 = *arg3

if (x0_2 != 0)
    int64_t x8_3 = *(arg2 + 0x30)
    *(arg2 + 0x28) = x0_2
    Botan::deallocate_memory(x0_2, x8_3 - x0_2, 1)

void* x0_3 = *arg4

if (x0_3 != 0)
    *(arg2 + 0x10) = x0_3
    operator delete(x0_3)

sub_1101e04(arg1)
noreturn
