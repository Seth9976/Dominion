// 函数: sub_ef955c
// 地址: 0xef955c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[0xb]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::CurveGFp_NIST{for `Botan::CurveGFp_Repr'}

if (x0 != 0)
    int64_t x8_1 = arg1[0xd]
    arg1[0xc] = x0
    Botan::deallocate_memory(x0, (x8_1 - x0) s>> 2, 4)

void* x0_1 = arg1[6]

if (x0_1 != 0)
    int64_t x8_3 = arg1[8]
    arg1[7] = x0_1
    Botan::deallocate_memory(x0_1, (x8_3 - x0_1) s>> 2, 4)

void* result = arg1[1]

if (result == 0)
    return result

int64_t x8_5 = arg1[3]
arg1[2] = result
return Botan::deallocate_memory(result, (x8_5 - result) s>> 2, 4)
