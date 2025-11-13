// 函数: _ZN5Botan5PKCS88load_keyERNS_10DataSourceENSt6__ndk18functionIFNS3_12basic_stringIcNS3_11char_traitsIcEENS3_9allocatorIcEEEEvEEE
// 地址: 0xdfb1c8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x21 + 0x28)
int64_t* x0 = *(arg2 + 0x20)
void var_70
int64_t* result_1

if (x0 == 0)
    result_1 = nullptr
else if (arg2 == x0)
    result_1 = &var_70
    (*(*x0 + 0x18))(x0, &var_70)
else
    result_1 = (*(*x0 + 0x10))()

int64_t entry_x8
sub_dfb2d0(entry_x8, arg1, &var_70, 1)
int64_t* result = result_1

if (&var_70 == result)
    result = (*(*result + 0x20))()
else if (result != 0)
    result = (*(*result + 0x28))()

if (*(x21 + 0x28) == x9)
    return result

__stack_chk_fail()
noreturn
