// 函数: sub_e00458
// 地址: 0xe00458
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg4
arg4 = nullptr
void* __offset(vtable_for_Botan::DataSource_Stream, 0x10) arg_8 =
    _vtable_for_Botan::DataSource_Stream + 0x10

if (x0 != 0)
    (*(*x0 + 8))()
    
    if ((zx.d(arg2) & 1) != 0)
    label_e004a0:
        operator delete(arg3)
        sub_1101e04(arg1)
        noreturn
else if ((zx.d(arg2) & 1) != 0)
    goto label_e004a0

sub_1101e04(arg1)
noreturn
