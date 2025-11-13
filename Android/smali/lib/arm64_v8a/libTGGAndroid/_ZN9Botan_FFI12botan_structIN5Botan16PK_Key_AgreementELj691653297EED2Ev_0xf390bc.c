// 函数: _ZN9Botan_FFI12botan_structIN5Botan16PK_Key_AgreementELj691653297EED2Ev
// 地址: 0xf390bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void** entry_x0
int64_t* x20 = entry_x0[2]
entry_x0[1].d = 0
*entry_x0 = _vtable_for_Botan_FFI::botan_struct<Botan::PK_Key_Agreement, 691653297u> + 0x10
entry_x0[2] = 0

if (x20 == 0)
    entry_x0[2] = 0
    return 

int64_t* x0 = *x20
*x20 = 0

if (x0 != 0)
    (*(*x0 + 0x18))()

operator delete(x20)
int64_t* x20_1 = entry_x0[2]
entry_x0[2] = 0

if (x20_1 == 0)
    return 

int64_t* x0_2 = *x20_1
*x20_1 = 0

if (x0_2 != 0)
    (*(*x0_2 + 0x18))()

return operator delete(x20_1) __tailcall
