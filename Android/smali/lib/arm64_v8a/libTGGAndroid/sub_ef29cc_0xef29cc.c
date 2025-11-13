// 函数: sub_ef29cc
// 地址: 0xef29cc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = arg1[2]
*arg1 = &_vtable_for_Botan::(anonymous namespace)::DataSource_BERObject{for `Botan::DataSource'}

if (x0 != 0)
    int64_t x8_1 = arg1[4]
    arg1[3] = x0
    Botan::deallocate_memory(x0, x8_1 - x0, 1)

return operator delete(arg1) __tailcall
