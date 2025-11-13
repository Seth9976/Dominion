// 函数: sub_d47d00
// 地址: 0xd47d00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

arg1[1] = 0
arg1[2] = arg2
*arg1 = &_vtable_for_Botan::(anonymous namespace)::Ed25519_Hashed_Sign_Operation{for `Botan::PK_Ops::Signature'}
arg1[3] = 0
arg1[4] = 0
arg1[5] = 0
int16_t var_48 = 0
Botan::HashFunction::create_or_throw(arg3, &var_48)
int64_t* result_1 = nullptr
int64_t* result = arg1[1]
int64_t var_28
arg1[1] = var_28
void* var_38

if (result == 0)
    int64_t var_28_2 = 0
    
    if ((zx.d(var_48.b) & 1) != 0)
        result = operator delete(var_38)
else
    (*(*result + 0x10))()
    result = result_1
    int64_t var_28_1 = 0
    
    if (result != 0)
        result = (*(*result + 0x10))()
    
    if ((zx.d(var_48.b) & 1) != 0)
        result = operator delete(var_38)

if ((arg4 & 1) != 0)
    void* x0_2 = operator new(0x22)
    *(x0_2 + 0x20) = 1
    __builtin_strncpy(x0_2, "SigEd25519 no Ed25519 collisions", 0x20)
    result = arg1[3]
    
    if (result != 0)
        arg1[4] = result
        result = operator delete(result)
        __builtin_memset(&arg1[3], 0, 0x18)
    
    arg1[3] = x0_2
    arg1[4] = x0_2 + 0x22
    arg1[5] = x0_2 + 0x22

return result
