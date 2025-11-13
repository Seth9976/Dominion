// 函数: sub_f41788
// 地址: 0xf41788
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0 = arg1[0x16]
*arg1 = &_vtable_for_botan_rng_init_custom::$_187::operator()() const::Custom_RNG{for `Botan::RandomNumberGenerator'}

if (x0 != 0)
    int64_t var_28 = arg1[4]
    (*(*x0 + 0x30))(x0, &var_28)
    int64_t* x0_1 = arg1[0x16]
    
    if (&arg1[0x12] == x0_1)
        (*(*x0_1 + 0x20))()
    else if (x0_1 != 0)
        (*(*x0_1 + 0x28))()

int64_t* x0_2 = arg1[0x10]

if (&arg1[0xc] == x0_2)
    (*(*x0_2 + 0x20))()
else if (x0_2 != 0)
    (*(*x0_2 + 0x28))()

int64_t* result = arg1[0xa]

if (&arg1[6] == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if ((zx.d(arg1[1].b) & 1) == 0)
    return result

return operator delete(arg1[3])
